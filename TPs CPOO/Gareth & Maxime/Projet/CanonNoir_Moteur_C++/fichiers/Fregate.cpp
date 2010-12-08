/**
* \file Fregate.cpp
* \brief file which contains functions and code of the Fregate class
* \author Havez Maxime
* \author Thiveux Gareth
* \version 1.0
*/

#include "Fregate.h"

Fregate::Fregate(){

	pTirer = true;
	pPTresor = true;
	pEVise = true;
	pJ2Des = true;

}

void Fregate::init(){
	
	pTirer = true;
	pPTresor = true;
	pEVise = true;
	pJ2Des = true;
	// gérer l'initialisation de sa position ???

}

string Fregate::typeBateau(){

	return "Fregate";

}