/**
*\file  AttenteChoixBateau.h
*\brief File containing the functionalities and the attributes of the AttenteChoixBateau class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "AttenteChoixBateau.h"
#include "Joueur.h"

void AttenteChoixBateau::execute(){

	// construire à partir de la facade la position
	pair<int,int> posit; 
	int x= motor.getFacade()->getX();
	int y=  motor.getFacade()->getY();

	if( x!=-1 && y!=-1 ){
			posit = make_pair(x,y);
	}else{
		return; //C'est que les positions ne sont pas correctes
	}

	//2 Joueurs
	if(motor.getNbJoueurs() == 2){

		//si le joueur a bien un bateau sur la case cliquée
		if( motor.getJoueurInd(motor.getJCourant()).bateauAtPos(posit)){

			//le bateau du joueur cliqué peut jouer 2 dés
			if( motor.getJoueurInd(motor.getJCourant()).getBateauPos(posit).peutJouer2Des()){

				//ON DOIT PROPOSER D'UTILISER 1 ou 2 DES
				motor.getFacade()->setChoixDe1(true);
				motor.getFacade()->setChoixDe2(true);		
				motor.getFacade()->setChoix2De(true);

				motor.modifCourant(ATTENTECHOIXDE);
			}
		}

		
	//3 ou 4 Joueurs
	}else if(	motor.getJoueurInd(motor.getJCourant()).bateauAtPos(posit) &&
				motor.getJoueurInd(motor.getJCourant()).getBateauPos(posit).peutJouer2Des()){ 
		
		motor.getFacade()->setChoixDe1(true);
		motor.getFacade()->setChoixDe2(true);		
		motor.getFacade()->setChoix2De(true);

		motor.modifCourant(ATTENTECHOIXDE);

	}else if (motor.getJoueurInd(motor.getJCourant()).bateauAtPos(posit)){//bateau autre qu'une caravelle

		motor.modifCourant(PROPOSEDEPLACEMENT);

	}else{
		return;
	}
}
