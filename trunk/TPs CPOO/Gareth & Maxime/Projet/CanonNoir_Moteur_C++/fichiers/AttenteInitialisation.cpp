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

/*void AttenteInitialisation::execute(){
	if(){//vérif sur les couleurs
		
		
		//créer le tableau de joueur
		chercher la CasePort dans le plateau ayant la couleur 
		int c1=motor.getFacade()->getCouleur1();
		int c2=motor.getFacade()->getCouleur2();
		if(motor.getNbJoueurs()>2){
			int c3=motor.getFacade()->getCouleur3();
				if(motor.getNbJoueurs()>3){
					int c4=motor.getFacade()->getCouleur4();
				}
		}


		Joueur j1 = Joueur(0,);
		Joueur j2 = Joueur(1,);
		Joueur j3 = Joueur(2,);
		Joueur j4 = Joueur(3,);
		
		motor.modifCourant(new AttentePremLancerDe());
	}
}*/

void AttenteInitialisation::execute(){
	if(((motor.getFacade())->_couleur1!=0 && (motor.getFacade())->_couleur2!=0) &&
		((motor.getNbJoueurs()==3) ||
		(motor.getNbJoueurs()==3 && (motor.getFacade())->_couleur2!=0) ||
		(motor.getNbJoueurs()==4 && (motor.getFacade())->_couleur2!=0 && (motor.getFacade())->_couleur2!=0))) {
			motor.tabJoueurs[0] = new Joueur(1, Plateau::getCasePort(_couleur1))
			motor.tabJoueurs[1] = new Joueur(2, Plateau::getCasePort(_couleur2))
			motor.tabJoueurs[2] = new Joueur(3, Plateau::getCasePort(_couleur3))
			motor.tabJoueurs[3] = new Joueur(4, Plateau::getCasePort(_couleur4))
			motor.modifCourant(ATTENTEPREMLANCERDE);
	}else{
		cerr<<"ERREUR : AttenteNbJoueurs : Facade::nb_joueur n'a pas une valeur correcte"<<endl;
	}
}