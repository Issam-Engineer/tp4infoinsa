/**
*\file  AttenteChoixBateau.h
*\brief File containing the functionalities and the attributes of the AttenteChoixBateau class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "AttenteChoixBateau.h"

void AttenteChoixBateau::execute(){


	if(motor.getNbJoueurs() == 2){
		
		pair<int,int> posit; // construire à partir de la facade la position
		int x= motor.getFacade()->getX();
		int y=  motor.getFacade()->getY();
		if( x!=-1 && y!=-1 ){
			posit = make_pair(x,y);
		}
		//if( motor.getJoueurInd(motor.getJCourant).hasBateau
		//EN FONCTION DU BATEAU CHOISIT ON DOIT PROPOSER D'UTILISER 1 ou 2 DES
		motor.getFacade()->setChoixDe1(true);
		motor.getFacade()->setChoixDe2(true);		
		motor.getFacade()->setChoix2De(true);

		motor.modifCourant(ATTENTECHOIXDE);

	}else if(motor.getJoueurInd(motor.getJCourant()).getBateau1().type() == 'C'){ //LE JC A UNE CARAVELLE
				
		motor.modifCourant(ATTENTECHOIXDE);

	}else{
		motor.modifCourant(PROPOSEDEPLACEMENT);
	}
}