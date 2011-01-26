/**
*\file EtatFinPartie.cpp
*\brief File which contains the functions and code of the EtatFinPartie class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "EtatFinPartie.h"
#include "Joueur.h"
#include "Caravelle.h"

EtatFinPartie::EtatFinPartie(MoteurJeu * m){
	motor = m;
	cout << "Constructeur : EtatFinPartie" << endl;
}

void EtatFinPartie::execute(){
	motor->getFacade()->setPartieTerminee(true);
}