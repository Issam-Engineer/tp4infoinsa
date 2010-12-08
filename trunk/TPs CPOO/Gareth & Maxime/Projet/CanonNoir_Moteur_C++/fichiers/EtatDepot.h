/**
* \file  EtatDepot.h
* \brief file which contains function declarations and attributes of the EtatDepot class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ETATDEPOT_H
#define ETATDEPOT_H

#include "Etat.h"
#include "MoteurJeu.h"

class EtatDepot : public Etat
{
	private :

		MoteurJeu motor;

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();
		/** 
		*\fn EtatDepos()
		*\brief default constructor
		*/
		EtatDepot();
}; 

#endif
