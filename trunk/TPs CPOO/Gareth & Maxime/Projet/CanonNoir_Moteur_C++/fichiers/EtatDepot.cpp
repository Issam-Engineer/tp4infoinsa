/**
*\file EtatDepot.cpp
*\brief File which contains the functions and code of the EtatDepot class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

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
		cout<<"Test 1"<<endl;
		if(CPBC->getCouleur() == CP->getCouleur()) {
			//motor->getFacade()->setBonPort(true);
			motor->getFacade()->setBonPort(CPBC->getCouleur(),true);
			if(BC->type() == 'C' && motor->getFacade()->getATresor(CPBC->getCouleur())) {
				((CasePort*)BC->getPort())->setNbTresors();
				motor->getFacade()->setNbTresors(CPBC->getCouleur());
				motor->getJoueurInd(motor->getJCourant())->getBateauCourant()->setATresor(false);
				motor->getFacade()->setATresor(CPBC->getCouleur(),false);
				if(motor->getFacade()->getNbTresors(CPBC->getCouleur()) == 3){
					motor->getJoueurInd(motor->getJCourant())->GAGNANT();
					motor->modifCourant(ETATFINPARTIE);
				} else {
				cout<<"Et un tr�sor de plus ! Plus que "<<(3-(CPBC->getNbTresors()))<<endl;
				motor->setJCourant((motor->getJCourant()+1)%(motor->getNbJoueurs()));
				motor->modifCourant(ATTENTELANCERDE);
			} } else /*if(BC->type() != 'C')*/ {
				BC = new Caravelle();
	            //motor->getJoueurInd(motor->getJCourant())->setBateauCourant(new Caravelle());
				motor->getFacade()->setTypeBat(CPBC->getCouleur(),3);
				cout<<"Caravelle r�cup�r�e !"<<endl;
				motor->setJCourant((motor->getJCourant()+1)%(motor->getNbJoueurs()));
				motor->modifCourant(ATTENTELANCERDE);
				} }else {
				motor->setJCourant((motor->getJCourant()+1)%(motor->getNbJoueurs()));
				motor->modifCourant(ATTENTELANCERDE);
			}
	//motor->getFacade()->setBonPort(false);
	motor->getFacade()->execute();
}