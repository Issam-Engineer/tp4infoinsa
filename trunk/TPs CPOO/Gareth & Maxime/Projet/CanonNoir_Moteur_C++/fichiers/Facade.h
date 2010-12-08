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

class Facade
{

	public :
		//utilisés
		MoteurJeu* _moteur;
		int _nb_Joueurs;

		//à traiter
		pair<int,int> _caseClic;
		bool _afficherDe1;
		bool _afficherDe2;
		int* _couleurs; // ATTENTION CE N'EST PAS UN TYPE PRIMITIF
		pair<int,int> _posBateau; // ATTENTION CE N'EST PAS UN TYPE PRIMITIF
		bool _getNewPos;
		bool _clicDepart;
		bool _clicInit;
		string* _noms; // ATTENTION CE N'EST PAS UN TYPE PRIMITIF
		bool _partieEnCours;
		bool _clicNbJoueurs;
		bool _lancerDe;
		bool _tabPremierLance;
		bool _afficherJoueur1;
		bool _initialiserOK;
		Joueur* _tempJoueurs; // ATTENTION CE N'EST PAS UN TYPE PRIMITIF
		int _angle;
		int _puissance;
		bool _clicRefuserDuel;
		bool _afficherAttaqué;
		bool _afficherAttanquant;
		bool _bateauSelect;
		pair<int,int>* _casesProposees; // ATTENTION CE N'EST PAS UN TYPE PRIMITIF
		Bateau* _tabBateau; // ATTENTION CE N'EST PAS UN TYPE PRIMITIF
		bool _fenetreInit;
		bool _fenetreTir;


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
		void clicCase(pair<int,int>); 
		void afficherCasesProposees(pair<int,int>[]);
		pair<int,int> afficherCasesProposees();
		void ouvrirFenetreInit();
		void fermerFenetreInit();
		void ouvrirFenetreTir();
		void fermerFenetreTir();

}; 

#endif
