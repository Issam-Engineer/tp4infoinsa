/**
* \file MoteurJeu.cpp
* \brief File which contains the functions and code of the MoteurJeu class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "MoteurJeu.h"
#include "Etat.h"
#include "AttenteNbJoueurs.h"
#include "AttenteInitialisation.h"
#include "AttentePremLancerDe.h"
#include "AttenteLancerDe.h"
#include "AttenteChoixBateau.h"
#include "ProposeDeplacement.h"
#include "AttenteDeplacement.h"
#include "Duel.h"
#include "EtatTir.h"
#include "AttenteCanonPuissance.h"
#include "AttenteCanonAngle.h"
#include "EtatCanonFin.h"
#include "EtatTresor.h"
#include "EtatDepot.h"
#include "EtatFinPartie.h"


MoteurJeu::MoteurJeu():nbJoueurs(0),courant(NULL),j_indJoueurCourant(0),tabJoueurs(NULL),finPartie(false){
	_etats[0] = new AttenteNbJoueurs();
	_etats[1] = new AttenteInitialisation();
	_etats[2] = new AttentePremLancerDe();
	_etats[3] = new AttenteLancerDe();
	_etats[4] = new AttenteChoixBateau();
	_etats[5] = new ProposeDeplacement();
	_etats[6] = new AttenteDeplacement();
	_etats[7] = new Duel();
	_etats[8] = new EtatTir();
	_etats[9] = new AttenteCanonPuissance();
	_etats[10] = new AttenteCanonAngle();
	_etats[11] = new EtatCanonFin();
	_etats[12] = new EtatTresor();
	_etats[13] = new EtatDepot();
	_etats[14] = new EtatFinPartie();
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