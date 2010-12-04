/**
* \file Fregate.cpp
* \brief file which contains function and code of the Fregate class
* \author Havez Maxime
* \author Thiveux Gareth
* \version 1.0
*/

#include "Fregate.h"

Fregate::Fregate(){

	peutTirer = true;
	PeutPorterTresor = true;
	peutEtreVise = true;
	peutJouer2Des = true;

}

void Fregate::init(){
	
	peutTirer = true;
	PeutPorterTresor = true;
	peutEtreVise = true;
	peutJouer2Des = true;
	// gérer l'initialisation de sa position ???

}

string Fregate::typeBateau(){

	return "Fregate";

}