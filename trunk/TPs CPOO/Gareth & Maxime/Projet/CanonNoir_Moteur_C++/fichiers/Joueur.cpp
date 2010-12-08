/**
* \file Joueur.cpp
* \brief File which contains the functions and code of the Joueur class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "Joueur.h"

Joueur::Joueur(string n, int num){
	_nom=n;_numero=num;
}

Joueur::Joueur(){
	_nom = "défault";
	_numero=0;
}