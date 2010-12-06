/**
*\file  AttenteNbJoueurs.h
*\brief File which contains the functions and code of the AttenteNbJoueurs class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "AttenteNbJoueurs.h"
#include "AttenteInitialisation.h"



void AttenteNbJoueurs::execute(){
	if((motor.getFacade())->nb_Joueurs==2 || motor.getFacade()->nb_Joueurs==3 || motor.getFacade()->nb_Joueurs==4){
		motor.modifNbJoueurs(motor.getFacade()->nb_Joueurs);
		motor.modifCourant(new AttenteInitialisation());
	}else{
		cerr<<"ERROR : AttenteNbJoueurs"<<endl;
}