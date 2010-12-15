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
	_cp1=c;
	_cp2=NULL;
}

Joueur::Joueur(int num, CasePort* c1, CasePort* c2){
	_numero=num;
	_cp1=c1;
	_cp2=c2;
}

Joueur::Joueur(){
	_numero=0;
}

void Joueur::setNumero(int i){
	_numero=i;
}

void Joueur::GAGNANT(){
	_gagnant=true;
}