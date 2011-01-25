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
#include "Caravelle.h"

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
		CasePort* CP = (CasePort*)BC->getPosition();
		if(BC->getCouleur() == CP->getCouleur()) {
			motor->getFacade()->setBonPort(true);
			if(BC->type() == 'C' && BC->getATresor()) {
				BC->getPosition()->setNbTresors((CP->getNbTresors())+1);
				motor->getJoueurInd(motor->getJCourant())->getBateauCourant()->setATresor(false);
				if(BC->getPosition()->getNbTresors() == 3){
					motor->getJoueurInd(motor->getJCourant())->GAGNANT();
					motor->getFacade()->setPartieTerminee(true);
				} else {
				cout<<"Et un trésor de plus ! Plus que "<<(3-(CP->getNbTresors()))<<endl;
			} } else {
	            motor->getJoueurInd(motor->getJCourant())->setBateauCourant(new Caravelle());
				cout<<"Caravelle récupérée !"<<endl;
			}
		}
	motor->getFacade()->setBonPort(false);

	motor->setJCourant((motor->getJCourant()+1)%(motor->getNbJoueurs()));
	motor->modifCourant(ATTENTELANCERDE);
	motor->getFacade()->execute();
}