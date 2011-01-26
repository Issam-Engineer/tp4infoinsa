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
	_plateau = new Plateau();
	_de = (*new De());
	modifCourant(0); // on initialise int courant
	cout<<"valeur de l'int courant :"<<courant<<endl;
	_etats.push_back(new AttenteNbJoueurs(this));
	_etats.push_back(new AttenteInitialisation(this));
	_etats.push_back(new AttentePremLancerDe(this));
	_etats.push_back(new AttenteLancerDe(this));
	_etats.push_back(new AttenteChoixBateau(this));
	_etats.push_back(new ProposeDeplacement(this));
	_etats.push_back(new AttenteDeplacement(this));
	_etats.push_back(new EtatTresor(this));
	_etats.push_back(new EtatDepot(this));
	_etats.push_back(new Duel(this));
	_etats.push_back(new EtatTir(this));
	_etats.push_back(new AttenteChoixBateauVise(this));
	_etats.push_back(new EtatCanonFin(this));
	_etats.push_back(new EtatFinPartie(this));
};

MoteurJeu::~MoteurJeu(){
	
}

void MoteurJeu::execute(){
	_etats[courant]->execute();
}


void MoteurJeu::modifNbJoueurs(int n){
	nbJoueurs=n;
	cout<<"NbJoueurs MoteurJeu initialise a: "<<n<<endl;
}

Joueur* MoteurJeu::getJoueurInd(int i){
	return &tabJoueurs[i];
}

Plateau* MoteurJeu::getPlateau() const {
	return _plateau;
}

void MoteurJeu::setTabJoueurs(int ind,Joueur j){
	tabJoueurs[ind]=j;
}

void MoteurJeu::setTabJoueur(Joueur* t){
	for(int k=0;k<getNbJoueurs();k++){
		tabJoueurs[k] = t[k];
	}
}

bool MoteurJeu::estAccessible(pair<int,int> p){
	bool res;
	res = _plateau->estAccessible(p);
	return res;
}

void MoteurJeu::setAccessible(pair<int,int> p){_plateau->setAccessible(p);}
void MoteurJeu::setInaccessible(pair<int,int> p){_plateau->setInaccessible(p);}
void MoteurJeu::setAccessibleAll(bool b){_plateau->setAccessibleAll(b);}

Case* MoteurJeu::getCase(int x, int y){return _plateau->getCase(make_pair(x,y)); }

Joueur* MoteurJeu::getJoueurCourant(){
	return &tabJoueurs[_JCourant];
}