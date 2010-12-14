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
#include "Plateau.h"

void AttenteInitialisation::execute(){
	if(((motor.getFacade())->_couleur1!=0 && (motor.getFacade())->_couleur2!=0) &&
		((motor.getNbJoueurs()==2) ||
		(motor.getNbJoueurs()==3 && (motor.getFacade())->_couleur3!=0) ||
		(motor.getNbJoueurs()==4 && (motor.getFacade())->_couleur4!=0) && ((motor.getFacade())->_couleur3!=0) )){
			//attention au cast, getCasePort rend un pointeur Case* dont on est sur que c'est une CasePort
			motor.getJoueurInd(0) = (*new Joueur(1, (CasePort*) motor.getPlateau()->getCasePort(motor.getFacade()->_couleur1)));
			motor.getJoueurInd(1) = (*new Joueur(2, (CasePort*) motor.getPlateau()->getCasePort(motor.getFacade()->_couleur2)));
			motor.getJoueurInd(2) = (*new Joueur(3, (CasePort*) motor.getPlateau()->getCasePort(motor.getFacade()->_couleur3)));
			motor.getJoueurInd(3) = (*new Joueur(4, (CasePort*) motor.getPlateau()->getCasePort(motor.getFacade()->_couleur4)));
			motor.modifCourant(ATTENTEPREMLANCERDE);
	}else{
		cerr<<"ERREUR : AttenteNbJoueurs : Facade::nb_joueur n'a pas une valeur correcte"<<endl;
	}
}