/**
* \file Caravelle.cpp
* \brief fichier qui contient le code des fonctions de la classe Caravelle
* \author Havez Maxime
* \author Thiveux Gareth
* \version 1.0
*/

#include "Caravelle.h"


Caravelle::Caravelle(){
	peutTirer = true;
	PeutPorterTresor = true;
	peutEtreVise = true;
	peutJouer2Des = true;
}

void Caravelle::init(){
	
	peutTirer = true;
	PeutPorterTresor = true;
	peutEtreVise = true;
	peutJouer2Des = true;
	// gérer l'initialisation de sa position ???

}

string Caravelle::typeBateau(){

	return "Caravelle";

}