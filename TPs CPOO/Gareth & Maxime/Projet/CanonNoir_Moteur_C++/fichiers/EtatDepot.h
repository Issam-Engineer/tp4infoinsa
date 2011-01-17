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

class EtatDepot : public Etat
{

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();
		/** 
		*\fn EtatDepos(MoteurJeu * m)
		*\brief default constructor
		*/
		//EtatDepot(MoteurJeu * m);
}; 
inline void EtatDepot::execute(){};
#endif
