/**
* \file  EtatCanonFin.h
* \brief file which contains function declarations and attributes of the EtatCanonFin class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ETATCANONFIN_H
#define ETATCANONFIN_H

#include "EtatTir.h"

class EtatCanonFin : public EtatTir
{

	public :
		
		/**
		*\fn EtatCanonFin(MoteurJeu * m)
		*\brief Constructor
		*/
		//EtatCanonFin(MoteurJeu * m);

		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();

}; 

#endif
