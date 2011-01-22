/**
* \file  EtatTresor.h
* \brief file which contains function declarations and attributes of the EtatTresor class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ETATTRESOR_H
#define ETATTRESOR_H

#include "Etat.h"

class EtatTresor : public Etat
{
	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();
		/**
		*\fn EtatTresor(MoteurJeu* m)
		*\brief Constructor
		*/
		EtatTresor(MoteurJeu * m);

}; 
#endif
