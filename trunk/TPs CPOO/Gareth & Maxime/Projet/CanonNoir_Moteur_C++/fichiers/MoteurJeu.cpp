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
#include "AttenteChoixDe.h"
#include "AttenteChoixBateauVise.h"
#include "Joueur.h"
#include "Plateau.h"


MoteurJeu::MoteurJeu(Facade* f):facade(f),nbJoueurs(0),courant(NULL),_JCourant(0),finPartie(false){
	tabJoueurs = new Joueur[4];
	setEtat(0); // on initialise int courant
	cout<<"valeur de l'int courant :"<<courant<<endl;
	_etats.push_back(new AttenteNbJoueurs(this));
	_etats.push_back(new AttenteInitialisation(this));
	_etats.push_back(new AttentePremLancerDe(this));
	_etats.push_back(new AttenteLancerDe(this));
	_etats.push_back(new AttenteChoixBateau(this));
	_etats.push_back(new ProposeDeplacement(this));
	_etats.push_back(new AttenteDeplacement(this));

	/*
	_etats[7] = new Duel();
	_etats[8] = new EtatTir();
	_etats[9] = new AttenteCanonPuissance();
	_etats[10] = new AttenteCanonAngle();
	_etats[11] = new EtatCanonFin();
	_etats[12] = new EtatTresor();
	_etats[13] = new EtatDepot();
	_etats[14] = new EtatFinPartie();
	_etats[16] = new AttenteChoixBateauVise();
	_etats[15] = new AttenteChoixDe(this);
	*/
};

MoteurJeu::~MoteurJeu(){
	
}

void MoteurJeu::setEtat(int i){
	courant=i;
	//_etats[courant]->modifMotor(this);
}


void MoteurJeu::execute(){
	_etats[courant]->execute();
}


void MoteurJeu::modifNbJoueurs(int n){
	nbJoueurs=n;
	cout<<"NbJoueurs MoteurJeu initialise a: "<<n<<endl;
}

void MoteurJeu::modifCourant(int e){
	courant=e;
}

Joueur MoteurJeu::getJoueurInd(int i){
	return tabJoueurs[i];
}

Plateau* MoteurJeu::getPlateau() const {
	return _plateau;
}


void MoteurJeu::setTabJoueur(/*vector<Joueur>*/Joueur* t){
	/*delete tabJoueurs;*/
	tabJoueurs = t;
}

void MoteurJeu::setJCourant(int i){
	_JCourant=i;
}

bool MoteurJeu::estAccessible(pair<int,int> p){
	bool res;
	res = _plateau->estAccessible(p);
	return res;
}

void MoteurJeu::setAccessible(pair<int,int> p){
	_plateau->setAccessible(p);
}
