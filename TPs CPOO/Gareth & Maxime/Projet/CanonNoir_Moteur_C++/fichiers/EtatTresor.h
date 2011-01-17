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
#include "MoteurJeu.h"

class EtatTresor : public Etat
{
	public :

		/**
		*\fn EtatTresor(MoteurJeu * m)
		*\brief Constructor
		*/
		//EtatTresor(MoteurJeu * m);

		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();

}; 
inline void EtatTresor::execute(){};
#endif
