/**
* \file Joueur.cpp
* \brief File which contains the functions and code of the Joueur class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "Joueur.h"

Joueur::Joueur(int num, CasePort* c){
	_numero=num;
	_cp=c;
}

Joueur::Joueur(){
	_numero=0;
}