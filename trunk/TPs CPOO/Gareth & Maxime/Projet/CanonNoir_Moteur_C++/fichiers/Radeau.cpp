#include "Radeau.h"

void Radeau::init(){
	
	peutTirer = false;
	PeutPorterTresor = false;
	peutEtreVise = false;
	peutJouer2Des = false;
	// g�rer l'initialisation de sa position ???

}

string Radeau::typeBateau(){
	return "Radeau";
}