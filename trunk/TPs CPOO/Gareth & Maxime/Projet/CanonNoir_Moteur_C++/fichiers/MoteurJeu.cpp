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
	etats[0]=new AttenteNbJoueurs();
	etats[1]=new AttenteInitialisation();
	etats[2]=new AttentePremLancerDe();
	etats[3]=new AttenteChoixBateau();
	etats[4]=new ProposeDeplacement();
	etats[5]=new AttenteDeplacement();
	etats[6]=new Duel();
	etats[7]=new AttenteCanonPuissance();
	etats[8]=new AttenteCanonAngle();
	etats[9]=new EtatCanonFin();
	etats[10]=new EtatTresor();
	etats[11]=new EtatDepos();
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