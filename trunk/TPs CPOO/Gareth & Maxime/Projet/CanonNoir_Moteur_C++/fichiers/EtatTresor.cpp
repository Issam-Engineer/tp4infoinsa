/**
*\file EtatTresor.cpp
*\brief File which contains the functions and code of the EtatTresor class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "EtatTresor.h"
#include "Joueur.h"

EtatTresor::EtatTresor(MoteurJeu * m){
	motor = m;
	cout << "Constructeur : EtatTresor" << endl;
}

void EtatTresor::execute(){
	//on verifie le type du bateau courant, et si c'est une caravelle ou une frégate,
	//on incrémente le compteur du bateau courant
	cout<<"EtatTresor.execute()"<<endl;

	Bateau* BC = motor->getJoueurInd(motor->getJCourant())->getBateauCourant();
	if(BC->type() == 'C' && !BC->getATresor()){
		BC->setATresor(true);
		motor->getFacade()->setTresorRecup(true);
		cout<<"Trésor à bord !"<<endl;
	}

	motor->setJCourant((motor->getJCourant()+1)%(motor->getNbJoueurs()));
	motor->modifCourant(ATTENTELANCERDE);
}