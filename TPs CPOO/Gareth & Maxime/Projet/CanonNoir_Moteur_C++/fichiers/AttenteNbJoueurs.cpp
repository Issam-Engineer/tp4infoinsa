/**
*\file  AttenteNbJoueurs.h
*\brief File which contains the functions and code of the AttenteNbJoueurs class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "AttenteNbJoueurs.h"


void AttenteNbJoueurs::execute(){
	if((motor.getFacade())->_nb_Joueurs==2 || motor.getFacade()->_nb_Joueurs==3 || motor.getFacade()->_nb_Joueurs==4){
		motor.modifNbJoueurs(motor.getFacade()->_nb_Joueurs);
		motor.modifCourant(ATTENTEINITIALISATION);
	}else{
		cerr<<"ERROR : AttenteNbJoueurs : Facade::nb_joueur n'a pas une valeur correcte"<<endl;
	}
}