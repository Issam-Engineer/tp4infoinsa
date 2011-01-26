/**
*\file  AttenteChoixDe.h
*\brief File containing the functionalities and the attributes of the AttenteChoixDe class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "AttenteChoixDe.h"

AttenteChoixDe::AttenteChoixDe(MoteurJeu* m){
	motor=m;
}

void AttenteChoixDe::execute(){

	//if le joueur à cliquer on vérifie la valeur des booléen pour ensuite voir quels dés on doit prendre 
	//il s'agit simplement d'un etat qui permet de gérer l'interaction !
	
	motor->modifCourant(PROPOSEDEPLACEMENT);
}