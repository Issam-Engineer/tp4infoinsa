/**
*\file Duel.cpp
*\brief File which contains the functions and code of theDuel class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "Duel.h"

Duel::Duel(MoteurJeu * m){
	motor = m;
	touche = false;
	cout << "Constructeur : Duel" << endl;
}

void Duel::execute(){
	//on verifie le type du bateau courant, et si c'est une caravelle ou une frégate,
	//on regarde sur la case bordure plateau en face s'il y a un bateau adverse
	//Si oui, on propose d'engager le duel, et si le joueur accepte on passe dans l'état EtatTir
	//sinon, on finit le tour
	cout<<"Duel.execute()"<<endl;

	motor->modifCourant(ATTENTELANCERDE);
}