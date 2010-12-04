/**
* \file Radeau.cpp
* \brief file which contains function and code of the Radeau class
* \author Havez Maxime
* \author Thiveux Gareth
* \version 1.0
*/

#include "Radeau.h"

Radeau::Radeau() {
	
	peutTirer = false;
	PeutPorterTresor = false;
	peutEtreVise = false;
	peutJouer2Des = false;

}

void Radeau::init(){
	
	peutTirer = false;
	PeutPorterTresor = false;
	peutEtreVise = false;
	peutJouer2Des = false;
	// gérer l'initialisation de sa position ???

}

string Radeau::typeBateau(){

	return "Radeau";

}