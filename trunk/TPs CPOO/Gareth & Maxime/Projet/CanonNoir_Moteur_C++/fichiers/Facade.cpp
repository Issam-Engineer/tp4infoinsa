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

void Facade::setChoixDe1(bool b){
	_choixDe1=b;
}

void Facade::setChoixDe2(bool b){
	_choixDe2=b;
}

void Facade::setChoix2De(bool b){
	_choix2De=b;
}

void Facade::setX(int u){
	_clicX=u;
}

void Facade::setY(int u){
	_clicY=u;
}
