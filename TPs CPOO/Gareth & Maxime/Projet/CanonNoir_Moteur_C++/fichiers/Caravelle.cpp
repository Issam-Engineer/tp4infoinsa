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
	// g�rer l'initialisation de sa position ???

}

string Caravelle::typeBateau(){

	return "Caravelle";

}