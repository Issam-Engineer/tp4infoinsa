#include "Caravelle.h"

void Caravelle::init(){
	
	peutTirer = true;
	PeutPorterTresor = true;
	peutEtreVise = true;
	peutJouer2Des = true;
	// g�rer l'initialisation de sa position ???

}

string Caravelle::typeBateau(){
	return "Caravelle";
}