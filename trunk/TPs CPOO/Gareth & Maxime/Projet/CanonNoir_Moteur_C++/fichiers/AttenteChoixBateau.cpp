/**
*\file  AttenteChoixBateau.h
*\brief File containing the functionalities and the attributes of the AttenteChoixBateau class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "AttenteChoixBateau.h"
#include "Joueur.h"

void AttenteChoixBateau::execute(){

	// construire � partir de la facade la position
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

		//si le joueur a bien un bateau sur la case cliqu�e
		if( motor.getJoueurInd(motor.getJCourant()).bateauAtPos(posit)){

			//On indique quel bateau est le courant gr�ce au bool�en courant de bateau, qui est � false lors de l'initialisation (quand il y a 2 joueurs)
			motor.getJoueurInd(motor.getJCourant()).getBateauPos(posit).setCourant(true);

			//le bateau du joueur cliqu� peut jouer 2 d�s
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

	//bateau autre qu'une caravelle
	}else if (motor.getJoueurInd(motor.getJCourant()).bateauAtPos(posit)){

		motor.modifCourant(PROPOSEDEPLACEMENT);

	}else{
		return;
	}
}
