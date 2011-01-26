/**
*\file Main.cpp
*\brief File which contains the tests of the Main class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "MoteurJeu.h"
#include "AttenteNbJoueurs.h"
#include "Plateau.h"
#include "Joueur.h"
#include <stdio.h>



int main( int argc, const char* argv[] )
{
	/* 
	*
	*		GESTION DES TESTS 
	*
	*/

	//Initialisation de la facade (comme dans le wrapper)
	Facade* fac = new Facade();

	// initialisation du nombre de joueurs

	/*4*/
	/*fac->initNbJoueurs(4);
	fac->execute();*/

	/*3*/
	/*fac->initNbJoueurs(3);
	fac->execute();*/
	
	/*2*/
	fac->initNbJoueurs(2);
	fac->execute();

	//simulation de la prise en charge des données entrées par l'utilisateur (Couleurs des ports)

	fac->setCoul1(4);
	fac->setCoul2(3);
	fac->setCoul3(1);
	fac->setCoul4(2);

	fac->execute();

	//simulation d'un clic utilisateur sur le bouton lancerDé
	/*fac->setClicDe(true);
	fac->execute();*/

	//ex : sans clic -> message erreur
	//fac->execute();

	fac->setClicDe(true);
	fac->execute();

	fac->setClicDe(true);
	fac->execute();

	//On doit commencer à jouer le 1er joueur commence

	//ex: clic sur un autre élément déclanchant un execute() autre que le bouton
	//fac->execute();

	fac->setClicDe(true);
	fac->execute();

			//NbJoueur=2 => On doit donc choisir le bateau fac->GetX...

			//ex: clic sur le bouton LancerDe plutot que sur le canvas
			//fac->setClicDe(true);
			//fac->execute();
			// ERREUR : Si il y a déjà des positions dans la facade le moteur va prendre ces valeurs et peut planter

			// c'est au joueur 1 de commencer (il a choisit le port 1,1)
			fac->setX(1);
			fac->setY(1);
			fac->execute(); //OK

			//ex : clic sur une case qui ne correspond pas
			/*fac->setX(8);
			fac->setY(5);
			fac->execute();*/

	//On choisit un déplacement parmi les case proposées

			fac->execute(); // pour proposer les cases ! (gérer dans l'affichage selon les cas)

	//ex : clic sur une case au hasard
	/*fac->setX(10);
	fac->setY(6);
	fac->execute();*/
	
	//acces à l'histogramme du moteur
	/*fac->getMoteur()->histogramme.push_back(make_pair(1,3));
	fac->getMoteur()->histogramme.push_back(make_pair(1,2));
	fac->getMoteur()->histogramme.push_back(make_pair(1.41,0));
	fac->getMoteur()->histogramme.push_back(make_pair(1.41,0));

	fac->getLongueurHisto(0);
	fac->getLongueurHisto(1);
	fac->getLongueurHisto(2);
	fac->getLongueurHisto(3);

	fac->getHauteurHisto(0);
	fac->getHauteurHisto(1);
	fac->getHauteurHisto(2);
	fac->getHauteurHisto(3);*/

			//acces en dehors de la taille du tableau de joueur : Message d'erreur
			fac->getMoteur()->getJoueurInd(2); 

			//Si nbJoueur = 3 ou 4 on accède à une variable non initialisée
			fac->getMoteur()->getJoueurInd(1)->bateauAtPos(make_pair(1,2)); 

	while(1);


}
