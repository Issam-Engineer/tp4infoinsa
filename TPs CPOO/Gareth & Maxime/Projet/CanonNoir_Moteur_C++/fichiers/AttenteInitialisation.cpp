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
	if(){//vérif sur les couleurs
		//créer le tableau de joueur
		Joueur j1 = Joueur(0,motor.getFacade()->getCouleur1());
		Joueur j2 = Joueur(1,motor.getFacade()->getCouleur2());
		Joueur j3 = Joueur(2,motor.getFacade()->getCouleur3());
		Joueur j4 = Joueur(3,motor.getFacade()->getCouleur4());
		
		motor.modifCourant(new AttentePremLancerDe());
}