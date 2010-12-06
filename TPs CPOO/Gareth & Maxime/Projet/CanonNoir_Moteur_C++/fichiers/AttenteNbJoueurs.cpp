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
	while(Facade::nb_Joueurs == NULL);
	motor.nbJoueurs = ... ; 
	motor.courant = new AttenteInitialisation();
	motor.execute();
}