/**
*\file  AttenteDeplacement.cpp
*\brief File containing the functionalities and the attributes of the AttenteDeplacement class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "AttenteDeplacement.h"
#include "Joueur.h"
#include "Plateau.h"

AttenteDeplacement::AttenteDeplacement(MoteurJeu * m){
	motor=m;
	cout << "Constructeur : AttenteDeplacement" << endl;
}

void AttenteDeplacement::execute(){

	cout<<"AttenteDeplacement.execute()"<<endl;
	int x = motor->getFacade()->getX();
	int y = motor->getFacade()->getY();

	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;

	motor->getJoueurInd(motor->getJCourant())->getBateauCourant()->positionner(motor->getPlateau()->getCase(make_pair(x,y)));
	cout<<"test 1 "<<endl;
	motor->getFacade()->setCoulBateauCourant(motor->getJoueurInd(motor->getJCourant())->getBateauCourant()->getCouleur());
	cout<<"test 2 "<<endl;
	Bateau* boc = motor->getJoueurInd(motor->getJCourant())->getBateauCourant();
	cout<<"test 3 "<<endl;
	// QUEL EST L'ETAT SUIVANT ?

	int ETAT_SUIVANT;
	
	ETAT_SUIVANT = motor->getCase(x,y)->getEtat();
	cout<<"test 4 "<<endl;

	if(ETAT_SUIVANT != -1){
		motor->modifCourant(ETAT_SUIVANT);
		cout<<"ModifCourant(ETAT_SUIVANT) avec ETAT_SUIVANT = "<<ETAT_SUIVANT<<endl;
		if(ETAT_SUIVANT != ATTENTECHOIXBATVISE && ETAT_SUIVANT != ETATTRESOR && ETAT_SUIVANT != ETATDEPOT){
			motor->getFacade()->execute();
			cout<<"test 5 "<<endl;
		}

	} else {
		motor->setJCourant((motor->getJCourant()+1)%(motor->getNbJoueurs()));
		motor->modifCourant(ATTENTELANCERDE);
		motor->getFacade()->setEnableClicDe(true);
		cout<<"test 6 "<<endl;
	}
	//boc->setCourant(false);

}