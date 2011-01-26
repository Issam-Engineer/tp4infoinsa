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

	//if le joueur � cliquer on v�rifie la valeur des bool�en pour ensuite voir quels d�s on doit prendre 
	//il s'agit simplement d'un etat qui permet de g�rer l'interaction !
	
	motor->modifCourant(PROPOSEDEPLACEMENT);
}