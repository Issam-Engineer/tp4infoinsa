/**
* \file MoteurJeu.cpp
* \brief File which contains the functions and code of the MoteurJeu class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "MoteurJeu.h"
#include "Etat.h"

MoteurJeu::MoteurJeu():nbJoueurs(0),courant(NULL),j_indJoueurCourant(0),tabJoueurs(NULL),finPartie(false){
	_etats[0] = new AttenteNbJoueurs();
	_etats[1] = new AttenteInitialisation();
	_etats[2] = new AttentePremLancerDe();
	_etats[3] = new AttenteChoixBateau();
	_etats[4] = new ProposeDeplacement();
	_etats[5] = new AttenteDeplacement();
	_etats[6] = new Duel();
	_etats[7] = new AttenteCanonPuissance();
	_etats[8] = new AttenteCanonAngle();
	_etats[9] = new EtatCanonFin();
	_etats[10] = new EtatTresor();
	_etats[11] = new EtatDepot();
	courant = ATTENTENBJOUEURS;
};

void MoteurJeu::setEtat(int i){
	courant=i;
	_etats[courant]->modifMotor(*this);
}


void MoteurJeu::execute(){
	_etats[courant]->execute();
}


void MoteurJeu::modifNbJoueurs(int n){
	nbJoueurs=n;
}

void MoteurJeu::modifCourant(int e){
	courant=e;
}