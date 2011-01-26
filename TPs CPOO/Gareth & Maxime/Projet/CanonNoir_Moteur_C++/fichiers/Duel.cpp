/**
*\file Duel.cpp
*\brief File which contains the functions and code of theDuel class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "Duel.h"
#include "Bateau.h"
#include "Joueur.h"

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
	/*int x_face;
	int y_face;
	if(motor->getFacade()->getX() == 1){
		x_face = 11;
		y_face = motor->getFacade()->getY();
	} else if(motor->getFacade()->getX() == 11) {
		x_face = 1;
		y_face = motor->getFacade()->getY();
	} else if(motor->getFacade()->getY() == 1) {
		x_face = motor->getFacade()->getX();
		y_face = 8;
	} else if(motor->getFacade()->getY() == 8) {
		x_face = motor->getFacade()->getX();
		y_face = 1;
	}

	Bateau* res;
	for(int i=0; i<motor->getNbJoueurs(); i++){
		if(motor->getJoueurInd(i)->bateauAtPos(make_pair(x_face,y_face)) == true){
			res = motor->getJoueurInd(i)->getBateauPos(make_pair(x_face,y_face));
			cout<<"Bateau en face !"<<endl;
			//motor->modifCourant(ETATTIR);
			//motor->getFacade()->execute();
		}
	}*/


	motor->setJCourant((motor->getJCourant()+1)%(motor->getNbJoueurs()));
	motor->modifCourant(ATTENTELANCERDE);
}