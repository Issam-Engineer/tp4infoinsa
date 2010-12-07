/**
*\file  Facade.h
*\brief fichier qui regroupe les fonctionnalité et les attributs de la facade du moteur
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef FACADE_H
#define FACADE_H

#include <cstdlib>
#include <string>
#include <iostream>
#include "MoteurJeu.h"

using namespace std;

class Facade
{

	public :
		//utilisés
		MoteurJeu* moteur;// association bi-directionnelle
		int nb_Joueurs;

		//à traiter
		pair<int,int> caseClic;
		bool afficherDe1;
		bool afficherDe2;
		int* couleurs;
		pair<int,int> posBateau;
		bool getNewPos;
		bool clicDepart;
		bool clicInit;
		string* noms;
		bool partieEnCours;
		bool clicNbJoueurs;
		bool lancerDe;
		bool tabPremierLance;
		bool afficherJoueur1;
		bool initialiserOK;
		Joueur* tempJoueurs;
		int angle;
		int puissance;
		bool clicRefuserDuel;
		bool afficherAttaqué;
		bool afficherAttanquant;
		bool bateauSelect;
		pair<int,int>* casesProposees;
		Bateau* tabBateau;
		bool fenetreInit;
		bool fenetreTir;


	public :
		
		//utilisées
		/**
		*\fn void initNbJoueurs(int n)
		*\brief Function which initiates the nb_Joueurs value 
		*/
		void initNbJoueurs(int n);

		/**
		*\fn void execute()
		*\brief Function which is called after an action and which call MoteurJeu::execute() 
		*/
		//permet de ne pas faire de l'attente active
		void execute();
		
		/**
		*\fn int getAngle()
		*\brief Function which gives the angle of the current shot 
		*\param[out] int, the angle
		*/
		int getAngle();

		/**
		*\fn int getPuissance()
		*\brief Function which gives the power of the current shot
		*\param[out] int, the power
		*/
		int getPuissance();

		
		//à traiter
		void activeClicDepart();
		void initialiser();
		void desactiveClicDepart();
		void acitveClicInit();
		void desactiveClicInit();
		void initCouleurs();
		void initNoms();
		void lancerPartie();
		void activeClicNbJoueurs();
		void desactiveClicNbJoueurs();
		void premierLancerDe();
		void afficherTabDe();
		void afficher2De();
		void afficher1De();
		void afficherJoueur1();
		void JeuInitialise();
		void activerClicRefuserDuel();
		void desactiverClicRefuserDuel();
		void afficherAttaquant();
		void afficherAttaqué();
		void clicCase(pair<int c, object int>);
		void afficherCasesProposees(pair<int c, object int>[]);
		pair<int,int> afficherCasesProposees();
		void ouvrirFenetreInit();
		void fermerFenetreInit();
		void ouvrirFenetreTir();
		void fermerFenetreTir();

}; 

#endif
