/**
*\file EtatDepot.cpp
*\brief File which contains the functions and code of the EtatDepot class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "EtatDepot.h"
#include "Joueur.h"

EtatDepot::EtatDepot(MoteurJeu * m){
	motor = m;
	cout << "Constructeur : EtatDepot" << endl;
}

void EtatDepot::execute(){
	//on verifie le type du bateau courant, si c'est un radeau, on remet le bateau courant en caravelle,
	//si c'est une caravelle ou une frégate on vérifie que le bateau possède ou non un trésor,
	//et si oui, on incrémente le compteur du joueur courant
	cout<<"EtatDepot.execute()"<<endl;
		Bateau* BC = motor->getJoueurInd(motor->getJCourant())->getBateauCourant();
	if(BC->type() == 'C' && BC->getATresor()){
		motor->getJoueurInd(motor->getJCourant())->setNbTresors(motor->getJoueurInd(motor->getJCourant())->getNbTresors()+1);
		motor->getJoueurInd(motor->getJCourant())->getBateauCourant()->setATresor(false);
		if(motor->getJoueurInd(motor->getJCourant())->getNbTresors() == 3){
			motor->getJoueurInd(motor->getJCourant())->GAGNANT();
			motor->getFacade()->setPartieTerminee(true);
		} else {
		cout<<"Et un trésor de plus ! Plus que "<<(3-(motor->getJoueurInd(motor->getJCourant())->getNbTresors()))<<endl;
		}
	}

	motor->setJCourant((motor->getJCourant()+1)%(motor->getNbJoueurs()));
	motor->modifCourant(ATTENTELANCERDE);
}