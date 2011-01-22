/**
* \file  Duel.h
* \brief File containing the functionalities and the attributes of the Duel class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef DUEL_H
#define DUEL_H

#include "Etat.h"

class Duel : public Etat
{
	private :

		bool touche;

	public :
		/**
		*\fn void execute()
		*\brief function which execute the current state
		*/
		virtual void execute();
		/**
		*\fn Duel(MoteurJeu* m)
		*\brief Constructor
		*/
		Duel(MoteurJeu * m);

}; 

#endif