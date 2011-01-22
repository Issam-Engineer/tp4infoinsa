/**
*\file EtatDepot.cpp
*\brief File which contains the functions and code of the EtatDepot class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "EtatDepot.h"

EtatDepot::EtatDepot(MoteurJeu * m){
	motor = m;
	cout << "Constructeur : EtatDepot" << endl;
}

void EtatDepot::execute(){
	//on verifie le type du bateau courant, si c'est un radeau, on remet le bateau courant en caravelle,
	//si c'est une caravelle ou une fr�gate on v�rifie que le bateau poss�de ou non un tr�sor,
	//et si oui, on incr�mente le compteur du joueur courant
	cout<<"EtatDepot.execute()"<<endl;


	motor->modifCourant(ATTENTELANCERDE);
}