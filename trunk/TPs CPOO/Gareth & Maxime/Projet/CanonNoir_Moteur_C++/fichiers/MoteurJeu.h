/**
*\file  MoteurJeu.h
*\brief File which contains the attributes and function declarations of the MoteurJeu class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef MOTEURJEU_H
#define MOTEURJEU_H

#include "Facade.h"
#include "enum.h"
#include "Plateau.h"
class Etat;
class Joueur;

class MoteurJeu
{
	private :

		Facade * facade; // association bi-directionnelle
		Etat** _etats; 
		int courant;
		Joueur * tabJoueurs;
		int nbJoueurs;
		int j_indJoueurCourant;
		bool finPartie;
		Plateau _plateau;

	public :

		/**
		*\fn void setEtat(int i)
		*\brief Function which define the motor state
		*/
		void setEtat(int i);
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
		*\fn Facade* getPlateau() const
		*\brief acces function for the Plateau
		*\return the plateau
		*/
		Plateau getPlateau() const;  
		/**
		*\fn void modifNbJoueurs(int n);
		*\brief function which changes the current nbJoueurs
		*\parma[in] int n 
		*/
		void modifNbJoueurs(int n);  
		/**
		*\fn void modifCourant(int e);
		*\brief function which changes the current int courant
		*\parma[in] int e
		*/
		void modifCourant(int e);  

}; 


inline Facade* MoteurJeu::getFacade() const { return facade;}
inline int MoteurJeu::getNbJoueurs() const {return nbJoueurs;} 
inline Plateau MoteuJeu::getPlateau() const {return _plateau;}
#endif