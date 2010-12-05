/**
*\file  MoteurJeu.h
*\brief File which contains the attributes and function declarations of the MoteurJeu class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

/// <remarks>{ context MoteurJeu::execute() return : courant.execute() }</remarks>

#include "Etat.h"
#include "Joueur.h"

class MoteurJeu
{
	private :

		int nbJoueurs;
		Etat courant;
		int j_indJoueurCourant;
		Joueur[] tabJoueurs;
		bool finPartie;


	public :

		virtual void setEtat(Etat e);
		virtual void execute();

}; 

