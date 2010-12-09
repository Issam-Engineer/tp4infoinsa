/**
*\file Facade.cpp
*\brief File which contains the functions and code of the Facade class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "Facade.h"
#include "MoteurJeu.h"


void Facade::initNbJoueurs(int n){
	_nb_Joueurs=n;
}

void Facade::execute(){
	_moteur->execute();
}

int Facade::getAngle(){
	return _angle;
}

int Facade::getPuissance(){
	return _puissance;
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