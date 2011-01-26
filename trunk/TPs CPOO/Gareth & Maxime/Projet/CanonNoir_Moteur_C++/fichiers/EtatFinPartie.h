/**
*\file  EtatFinPartie.h
*\brief file which contains function declarations and attributes of the EtatFinPartie class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef ETATFINPARTIE_H
#define ETATFINPARTIE_H

#include "Etat.h"
#include "MoteurJeu.h"

class EtatFinPartie : public Etat
{

	public :

		/**
		*\fn EtatFinPartie(MoteurJeu * m)
		*\brief Constructor
		*/
		EtatFinPartie(MoteurJeu * m);

		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();

}; 

#endif
