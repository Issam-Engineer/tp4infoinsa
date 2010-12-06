/**
* \file MoteurJeu.cpp
* \brief File which contains the functions and code of the MoteurJeu class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "MoteurJeu.h"
#include "AttenteNbJoueurs.h"


void MoteurJeu::setEtat(){
	Etat* courant = new AttenteNbJoueurs();
	execute();
}


void MoteurJeu::execute(){
	courant->motor = this;
	courant->execute();
}

MoteurJeu::MoteurJeu():nbJoueurs(0),courant(NULL),j_indJoueurCourant(0),tabJoueurs(NULL),finPartie(false){
	
};