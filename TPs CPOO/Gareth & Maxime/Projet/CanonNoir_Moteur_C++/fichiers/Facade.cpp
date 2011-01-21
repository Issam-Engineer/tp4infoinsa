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

/*void Facade::setChoixDe1(bool b){
	_choixDe1=b;
}

void Facade::setChoixDe2(bool b){
	_choixDe2=b;
}

void Facade::setChoix2De(bool b){
	_choix2De=b;
}*/

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

bool Facade::getAccessible(int x, int y){
	pair<int,int> p = make_pair(x,y);
	return _moteur->estAccessible(p);
}

void Facade::setAccessibleAll(bool b){_moteur->setAccessibleAll(b);}