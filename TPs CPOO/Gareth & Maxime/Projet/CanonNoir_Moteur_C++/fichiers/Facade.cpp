/**
*\file Facade.cpp
*\brief File which contains the functions and code of the Facade class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "Facade.h"

void Facade::initNbJoueurs(int n){
	nb_Joueurs=n;
}

void Facade::execute(){
	moteur->execute();
}

int Facade::getAngle(){
	return angle;
}

int Facade::getPuissance(){
	return puissance;
}