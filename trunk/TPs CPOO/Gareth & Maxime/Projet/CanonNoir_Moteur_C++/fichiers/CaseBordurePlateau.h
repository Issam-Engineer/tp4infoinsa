/**
* \file  CaseBordurePlateau.h
* \brief File containing the functionalities and the attributes of the CaseBordurePlateau class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef CASEBORDUREPLATEAU_H
#define CASEBORDUREPLATEAU_H

#include "CaseNavigable.h"

class CaseBordurePlateau : public CaseNavigable
{

	public :

		/**
		* \fn CaseBordurePlateau CaseOpposee()
		* \brief function which gives the opposite case
		* \return CaseBordurePlateau the associated case
		*/
		CaseBordurePlateau CaseOpposee();
		/**
		* \fn bool DuelPossible()
		* \brief function which says if it's possible to have a Duel
		* \return bool ture if it's possible
		*/
		bool DuelPossible();
		/**
		* \fn virtual int getEtat()
		* \brief function which gives the associated state
		* \return int the associated state
		*/
		int getEtat();

}; 

#endif
