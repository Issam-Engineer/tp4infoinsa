/**
*\file  AttenteNbJoueurs.h
*\brief File which contains the functions and code of the AttenteNbJoueurs class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "AttenteNbJoueurs.h"

AttenteNbJoueurs::AttenteNbJoueurs(MoteurJeu* m){
	motor = m;
	cout << "Constructeur : AttenteNbJoueurs" << endl;
}

void AttenteNbJoueurs::execute(){
	if((motor->getFacade())->_nb_Joueurs==2 || motor->getFacade()->_nb_Joueurs==3 || motor->getFacade()->_nb_Joueurs==4){
		motor->modifNbJoueurs(motor->getFacade()->_nb_Joueurs);
		motor->modifCourant(ATTENTEINITIALISATION);
		cout<<"Moteur nbJoueurs ="<<motor->getNbJoueurs()<<endl;
		cout<<"Etat suivant : ATTENTEINITIALISATION"<<endl;
	}else{
		cerr<<"ERREUR : AttenteNbJoueurs : Facade::nb_joueur n'a pas une valeur correcte"<<endl;
	}
}