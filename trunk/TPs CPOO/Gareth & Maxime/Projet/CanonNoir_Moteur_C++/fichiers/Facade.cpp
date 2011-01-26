/**
*\file Facade.cpp
*\brief File which contains the functions and code of the Facade class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "Facade.h"
#include "MoteurJeu.h"
#include "Joueur.h"


extern "C" __declspec(dllexport) Facade* Facade_new(){return new Facade();}
extern "C" __declspec(dllexport) void Facade_delete(Facade * f){delete f;}



Facade::Facade(){
	_moteur=new MoteurJeu(this);
	_nb_Joueurs=0;
	_couleur1=0;
	_couleur2=0;
	_couleur3=0;
	_couleur4=0;
	_clicDe=false;
	_afficherDe1=false;
	_afficherDe2=false;
	/*
	_choixDe1=false;
	_choixDe2=false;
	_choix2De=false;
	*/
	_clicX=-1;
	_clicY=-1;
	_angle=-1;
	_puissance=-1;
	_initialiserOK=false;
	_ProposerDeplacement=false;
	_enableClicDe=true;
	_choixBateau=false;
	_tresorRecup=false;
	_nbTresorsRouge=0;
	_nbTresorsVert=0;
	_nbTresorsJaune=0;
	_nbTresorsBleu=0;
	_aTresorBatRouge=false;
	_aTresorBatVert=false;
	_aTresorBatJaune=false;
	_aTresorBatBleu=false;
	_bonPortRouge=false;
	_bonPortVert=false;
	_bonPortJaune=false;
	_bonPortBleu=false;
	_typeBatRouge=3;
	_typeBatVert=3;
	_typeBatJaune=3;
	_typeBatBleu=3;
	_partieTerminee=false;
}

Facade::~Facade(){
	delete _moteur;
}

void Facade::initNbJoueurs(int n){
	_nb_Joueurs=n;
}

void Facade::execute(){
	_moteur->execute();
}

int Facade::getCouleur1(){
	return _couleur1;
}

int Facade::getCouleur2(){
	return _couleur2;
}

int Facade::getCouleur3(){
	return _couleur3;
}

int Facade::getCouleur4(){
	return _couleur4;
}

void Facade::setClicDe(bool b){
	_clicDe=b;
}

void Facade::setAfficherDe1(bool b){
	_afficherDe1=b;
}

void Facade::setAfficherDe2(bool b){
	_afficherDe2=b;
}

void Facade::setX(int u){
	_clicX=u;
}

void Facade::setY(int u){
	_clicY=u;
}

int Facade::getDe1(){
	return _moteur->getDe()->getDe1();
}

int Facade::getDe2(){
	return _moteur->getDe()->getDe2();
}

int Facade::getNumJCourant(){
	return _moteur->getJoueurInd(_moteur->getJCourant())->getNumero();
}

int Facade::getMotorNbJoueur(){
	return _moteur->getNbJoueurs();
}

int Facade::getCoulPortJCourant(){
	/*cout<<"le joueur courant est le joueur numéro :"<<_moteur->getJoueurInd(_moteur->getJCourant())->getNumero()<<endl;
	cout<<"La couleur du Port du joueur courant est :"
		<<_moteur->getJoueurInd(_moteur->getJCourant())->getPort1()->getCouleur()
		<<endl;*/
	return _moteur->getJoueurInd(_moteur->getJCourant())->getPort1()->getCouleur();
}

int Facade::getCoulBateauCourant(){
	return _coulBatCourant;
}

void Facade::setCoulBateauCourant(int c){
	_coulBatCourant = c;
}


bool Facade::getAccessible(int x, int y){
	pair<int,int> p = make_pair(x,y);
	return _moteur->estAccessible(p);
}

void Facade::setAccessibleAll(bool b){_moteur->setAccessibleAll(b);}

bool Facade::getATresor(){
	return _moteur->getJoueurInd(_moteur->getJCourant())->getBateauCourant()->getATresor();
}

void Facade::setATresor(bool b){
	_moteur->getJoueurInd(_moteur->getJCourant())->getBateauCourant()->setATresor(b);
}

bool Facade::getBonPort(){
	return _moteur->getJoueurInd(_moteur->getJCourant())->getBateauCourant()->getBonPort();
}
void Facade::setBonPort(bool b){
	_moteur->getJoueurInd(_moteur->getJCourant())->getBateauCourant()->setBonPort(b);
}

int Facade::getNbTresorsPort(){
	return _moteur->getJoueurInd(_moteur->getJCourant())->getBateauCourant()->getPort()->getNbTresors();
}

int Facade::getNbTresors(int c){
	int tot;
	if(c == 1){
		tot = _nbTresorsRouge;
	} else if(c == 2){
		tot = _nbTresorsVert;
	} else if(c == 3){
		tot = _nbTresorsJaune;
	} else if(c == 4){
		tot = _nbTresorsBleu;
	}
	return tot;
}

void Facade::setNbTresors(int c){
	if(c == 1){
		_nbTresorsRouge+=1;
	} else if(c == 2){
		_nbTresorsVert+=1;
	} else if(c == 3){
		_nbTresorsJaune+=1;
	} else if(c == 4){
		_nbTresorsBleu+=1;
	}
}

bool Facade::getATresor(int c){
	bool res;
	if(c == 1){
		res = _aTresorBatRouge;
	} else if(c == 2){
		res = _aTresorBatVert;
	} else if(c == 3){
		res = _aTresorBatJaune;
	} else if(c == 4){
		res = _aTresorBatBleu;
	}
	return res;
}

void Facade::setATresor(int c, bool b){
	if(c == 1){
		_aTresorBatRouge = b;
	} else if(c == 2){
		_aTresorBatVert = b;
	} else if(c == 3){
		_aTresorBatJaune = b;
	} else if(c == 4){
		_aTresorBatBleu = b;
	}
}

bool Facade::getBonPort(int c){
	bool res;
	if(c == 1){
		res = _bonPortRouge;
	} else if(c == 2){
		res = _bonPortVert;
	} else if(c == 3){
		res = _bonPortJaune;
	} else if(c == 4){
		res = _bonPortBleu;
	}
	return res;
}

void Facade::setBonPort(int c, bool b){
	if(c == 1){
		_bonPortRouge = b;
	} else if(c == 2){
		_bonPortVert = b;
	} else if(c == 3){
		_bonPortJaune = b;
	} else if(c == 4){
		_bonPortBleu = b;
	}
}

int Facade::getTypeBat(int c){
	int type;
	if(c == 1){
		type = _typeBatRouge;
	} else if(c == 2){
		type = _typeBatVert;
	} else if(c == 3){
		type = _typeBatJaune;
	} else if(c == 4){
		type = _typeBatBleu;
	}
	return type;
}

void Facade::setTypeBat(int c, int t){
	if(c == 1){
		_typeBatRouge = t ;
	} else if(c == 2){
		_typeBatVert = t;
	} else if(c == 3){
		_typeBatJaune = t;
	} else if(c == 4){
		_typeBatBleu = t;
	}
}

int Facade::getEtatCourant(){
	return _moteur->getCourant();
}

int Facade::getTypeBateauCourant(){
	char type = _moteur->getJoueurInd(_moteur->getJCourant())->getBateauCourant()->type();
	int typeret=0;
	if(type == 'C') { typeret = 3; }
	else if(type == 'F') { typeret = 2; }
	else { typeret = 1; }
	return typeret;
}

void Facade::SaveXAttaquant(){
	_moteur->setXAttaquant(_clicX);
	//cout<<"SaveX"<<endl;
}

void Facade::SaveYAttaquant(){
	_moteur->setYAttaquant(_clicY);
	//cout<<"SaveY"<<endl;
}

double Facade::getLongueurHisto(int indice){
	//cout<<"valeur du first : "<<_moteur->histogramme[indice].first<<endl;
	return _moteur->histogramme[indice].first;
}

double Facade::getHauteurHisto(int indice){
	//cout<<"valeur du second : "<<_moteur->histogramme[indice].second<<endl;
	return _moteur->histogramme[indice].second ;
}
