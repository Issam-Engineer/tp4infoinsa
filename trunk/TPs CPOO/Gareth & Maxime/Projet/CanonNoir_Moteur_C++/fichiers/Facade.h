/**
* \file  Facade.h
* \brief fichier qui regroupe les fonctionnalité et les attributs de la facade du moteur
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef FACADE_H
#define FACADE_H

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class Facade
{

	public :

		int nbJoueurs;
		pair<int,int> caseClic;
		bool afficherDe1;
		bool afficherDe2;
		int [] couleurs;
		pair<int,int> posBateau;
		bool getNewPos;
		bool clicDepart;
		bool clicInit;
		string[] noms;
		bool partieEnCours;
		bool clicNbJoueurs;
		bool lancerDe;
		bool tabPremierLance;
		bool afficherJoueur1;
		bool initialiserOK;
		Joueurs[] tempJoueurs;
		int angle;
		int puissance;
		bool clicRefuserDuel;
		bool afficherAttaqué;
		bool afficherAttanquant;
		bool bateauSelect;
		pair<int,int>[] casesProposees;
		Bateau[] tabBateau;
		bool fenetreInit;
		bool fenetreTir;

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();
		virtual void activeClicDepart();
		virtual void initialiser();
		virtual void desactiveClicDepart();
		virtual void acitveClicInit();
		virtual void desactiveClicInit();
		virtual void initCouleurs();
		virtual void initNoms();
		virtual void lancerPartie();
		virtual void initNbJoueurs();
		virtual void activeClicNbJoueurs();
		virtual void desactiveClicNbJoueurs();
		virtual void premierLancerDe();
		virtual void afficherTabDe();
		virtual void afficher2De();
		virtual void afficher1De();
		virtual void afficherJoueur1();
		virtual void JeuInitialise();
		virtual int getAngle();
		virtual int getPuissance();
		virtual void activerClicRefuserDuel();
		virtual void desactiverClicRefuserDuel();
		virtual void afficherAttaquant();
		virtual void afficherAttaqué();
		virtual void clicCase(pair<int c, object int>);
		virtual void afficherCasesProposees(pair<int c, object int>[]);
		virtual pair<int,int> afficherCasesProposees();
		virtual void ouvrirFenetreInit();
		virtual void fermerFenetreInit();
		virtual void ouvrirFenetreTir();
		virtual void fermerFenetreTir();

}; 

#endif
