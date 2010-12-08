/**
* \file Radeau.cpp
* \brief file which contains functions and code of the Radeau class
* \author Havez Maxime
* \author Thiveux Gareth
* \version 1.0
*/

#include "Radeau.h"

Radeau::Radeau() {
	
	pTirer = false;
	pPTresor = false;
	pEVise = false;
	pJ2Des = false;

}

void Radeau::init(){
	
	pTirer = false;
	pPTresor = false;
	pEVise = false;
	pJ2Des = false;
	// g�rer l'initialisation de sa position ???

}

string Radeau::typeBateau(){

	return "Radeau";

}