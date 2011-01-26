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
	//si c'est une caravelle ou une fr�gate on v�rifie que le bateau poss�de ou non un tr�sor,
	//et si oui, on incr�mente le compteur du joueur courant
	cout<<"EtatDepot.execute()"<<endl;
		Bateau* BC = motor->getJoueurInd(motor->getJCourant())->getBateauCourant();
		CasePort* CP = (CasePort*)BC->getPosition();
		CasePort* CPBC = (CasePort*)BC->getPort();
		if(CPBC->getCouleur() == CP->getCouleur()) {
			motor->getFacade()->setBonPort(true);
			if(BC->type() == 'C' && BC->getATresor()) {
				((CasePort*)BC->getPort())->setNbTresors();
				motor->getFacade()->setNbTresors(CPBC->getCouleur());
				motor->getJoueurInd(motor->getJCourant())->getBateauCourant()->setATresor(false);
				if(CPBC->getNbTresors() == 3){
					motor->getJoueurInd(motor->getJCourant())->GAGNANT();
					motor->modifCourant(ETATFINPARTIE);
				} else {
				cout<<"Et un tr�sor de plus ! Plus que "<<(3-(CPBC->getNbTresors()))<<endl;
				motor->setJCourant((motor->getJCourant()+1)%(motor->getNbJoueurs()));
				motor->modifCourant(ATTENTELANCERDE);
			} } else {
	            motor->getJoueurInd(motor->getJCourant())->setBateauCourant(new Caravelle());
				cout<<"Caravelle r�cup�r�e !"<<endl;
				motor->setJCourant((motor->getJCourant()+1)%(motor->getNbJoueurs()));
				motor->modifCourant(ATTENTELANCERDE);
			}
		}
	//motor->getFacade()->setBonPort(false);
	motor->getFacade()->execute();
}