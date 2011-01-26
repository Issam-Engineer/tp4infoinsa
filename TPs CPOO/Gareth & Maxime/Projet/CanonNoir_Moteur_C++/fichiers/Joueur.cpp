/**
* \file Joueur.cpp
* \brief File which contains the functions and code of the Joueur class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "Joueur.h"
#include "Caravelle.h"


Joueur::Joueur(int num, CasePort* c){
	_numero=num;
	_cp1=c;
	_cp2=NULL;
	_bateau1 = new Caravelle();
	_bateau1->positionner(c);
	_bateauCourant = _bateau1;
	//_bateau1->setCourant(true);
	_bateau1->setCouleur(c->getCouleur());
	//_nbTresors = 0;
	_bateau1->setPort(c);
}

Joueur::Joueur(int num, CasePort* c1, CasePort* c2){
	_numero=num;
	_cp1=c1;
	_cp2=c2;
	_bateau1 = new Caravelle();
	_bateau2 = new Caravelle();
	_bateau1->positionner(c1);
	_bateau2->positionner(c2);
	//_bateau1->setCourant(false);
	//_bateau2->setCourant(false);
	_bateau1->setCouleur(c1->getCouleur());
	_bateau2->setCouleur(c2->getCouleur());
	//_nbTresors = 0;
	_bateau1->setPort(c1);
	_bateau2->setPort(c2);
}

Joueur::Joueur(){
	_numero=0;
	_cp1=0;
	_cp2=0;
	//_nbTresors = 0;
}


void Joueur::GAGNANT(){
	_gagnant=true;
}

bool Joueur::bateauAtPos(pair<int,int> p){
	bool res=false;
	if((_bateau1->getPosition()->getPosition()==p) || (_bateau2->getPosition()->getPosition()==p)){
		res=true;
	}
	return res;
}

Bateau* Joueur::getBateauPos(pair<int,int> p){
	Bateau * res;
	if(bateauAtPos(p)){
		if(_bateau1->getPosition()->getPosition()==p) res = _bateau1;
		else res = _bateau2;
	}else{
		cerr<<"ERREUR : il n'y a pas de bateau à cette position"<<endl;
	}
	return res;
}

/*Bateau* Joueur::getBateauCourant(){
	Bateau* res;
	if(_bateau1->getCourant()) res=_bateau1;
	else if(_bateau2->getCourant()) res=_bateau2;
	else {
		cout<<"ERREUR : ce n'est il n'y a pas de bateau courant"<<endl;
	}
	return res;
}*/