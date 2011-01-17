/**
* \file  AttenteChoixDe.h
* \brief File containing the functionalities and the attributes of the AttenteChoixDe class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ATTENTECHDE
#define ATTENTECHDE

#include "Etat.h"


class AttenteChoixDe : public Etat
{

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();
		/**
		*\fn AttenteChoixDe(MoteurJeu* m)
		*\brief Constructor
		*/
		AttenteChoixDe(MoteurJeu * m);
}; 


#endif