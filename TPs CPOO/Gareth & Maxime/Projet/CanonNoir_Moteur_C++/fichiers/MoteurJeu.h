/**
*\file  MoteurJeu.h
*\brief File which contains the attributes and function declarations of the MoteurJeu class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef MOTEURJEU_H
#define MOTEURJEU_H

/// <remarks>{ context MoteurJeu::execute() return : courant.execute() }</remarks>

#include "Etat.h"
#include "Joueur.h"
#include "Facade.h"

class MoteurJeu
{
	private :

		int nbJoueurs;
		Etat * courant;
		int j_indJoueurCourant;
		Joueur * tabJoueurs;
		bool finPartie;


	public :

		/**
		*\fn void setEtat()
		*\brief Function which sets the initial state to the motor
		*/
		void setEtat();
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();
		/**
		*\fn MoteurJeu()
		*\brief default constructor of MoteurJeu
		*\return pointer on the instance
		*/
		MoteurJeu();
}; 

#endif