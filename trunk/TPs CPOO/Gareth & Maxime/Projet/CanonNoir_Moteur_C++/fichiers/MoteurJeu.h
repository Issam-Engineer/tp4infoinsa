﻿/**
*\file  MoteurJeu.h
*\brief File which contains the attributes and function declarations of the MoteurJeu class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef MOTEURJEU_H
#define MOTEURJEU_H

#include "Facade.h"
class Etat;
class Joueur;

class MoteurJeu
{
	private :

		Facade * facade; // association bi-directionnelle
		Etat * courant;
		// SI ON VEUT FAIRE UN TABLEAU D ETATS : Etat etat[13]; =>setEtat(int i)
		Joueur * tabJoueurs;
		int nbJoueurs;
		int j_indJoueurCourant;
		bool finPartie;

	public :

		/**
		*\fn void setEtat()
		*\brief Function which sets the initial state to the motor
		*/
		void setEtat();
		/**
		*\fn void execute()
		*
		*this function is used when someone clic (is called by Facade::execute())
		*
		*\brief Function which executes the current state
		*/
		void execute();
		/**
		*\fn MoteurJeu()
		*\brief default constructor of MoteurJeu
		*\return pointer on the instance
		*/
		MoteurJeu();
		/**
		*\fn Facade* getFacade() const
		*\brief acces function for the facade
		*\return pointer on the facade
		*/
		Facade* getFacade() const;  
		/**
		*\fn int getNbJoueurs();
		*\brief function which give nbjoueurs
		*\rerturn int nbjoueurs 
		*/
		int getNbJoueurs() const;  
		/**
		*\fn void modifNbJoueurs(int n);
		*\brief function which changes the current nbJoueurs
		*\parma[in] int n 
		*/
		void modifNbJoueurs(int n);  
		/**
		*\fn void modifCourant(Etat* e);
		*\brief function which changes the current Etat courant
		*\parma[in] Etat* e
		*/
		void modifCourant(Etat* e);  

}; 


inline Facade* MoteurJeu::getFacade() const { return facade;}
inline int MoteurJeu::getNbJoueurs() const {return nbJoueurs;} 
#endif