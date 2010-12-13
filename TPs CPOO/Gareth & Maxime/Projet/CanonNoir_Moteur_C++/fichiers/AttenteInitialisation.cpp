/**
* \file  AttenteInitialisation.cpp
* \brief File which contains the functions and code of the AttenteInitialisation class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "AttenteInitialisation.h"
#include "AttentePremLancerDe.h"
#include "Joueur.h"

void AttenteInitialisation::execute(){
	if(((motor.getFacade())->_couleur1!=0 && (motor.getFacade())->_couleur2!=0) &&
		((motor.getNbJoueurs()==3) ||
		(motor.getNbJoueurs()==3 && (motor.getFacade())->_couleur2!=0) ||
		(motor.getNbJoueurs()==4 && (motor.getFacade())->_couleur2!=0 && (motor.getFacade())->_couleur2!=0))) {
			motor.tabJoueurs[0] = (*new Joueur(1, motor.getPlateau().getCasePort(motor.getFacade()->_couleur1)));
			motor.tabJoueurs[1] = (*new Joueur(2, motor.getPlateau().getCasePort(motor.getFacade()->_couleur2)));
			motor.tabJoueurs[2] = (*new Joueur(3, motor.getPlateau().getCasePort(motor.getFacade()->_couleur3)));
			motor.tabJoueurs[3] = (*new Joueur(4, motor.getPlateau().getCasePort(motor.getFacade()->_couleur4)));
			motor.modifCourant(ATTENTEPREMLANCERDE);
	}else{
		cerr<<"ERREUR : AttenteNbJoueurs : Facade::nb_joueur n'a pas une valeur correcte"<<endl;
	}
}