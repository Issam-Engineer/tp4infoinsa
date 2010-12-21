/**
*\file  ProposeDeplacement.h
*\brief File containing the functionalities and the attributes of the ProposeDeplacement class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "ProposeDeplacement.h"

void ProposeDeplacement::execute(){

	//On regarde la valeur du ou des dés
	if( motor.getFacade()->getChoixDe1() ){
		_valeurDe = motor.getDe().getDe1();
	}else if( motor.getFacade()->getChoixDe2() ){
		_valeurDe = motor.getDe().getDe2();
	}else if( motor.getFacade()->getChoix2De() ){
		_valeurDe = motor.getDe().getSommeDe();
	}else{
		cout<<"ERREUR : Choix de dé mal géré"<<endl;
	}

	//On récupère la position du BATEAU COURANT !
	pair<int,int> temp = motor.getJoueurInd(motor.getJCourant()).getBateauCourant().getPosition()->getPosition();
	int x = temp.first; 
	int y = temp.second;



}