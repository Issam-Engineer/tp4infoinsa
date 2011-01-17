/**
* \file  AttenteChoixBateauVise.h
* \brief File containing the functionalities and the attributes of the AttenteChoixBateauVise class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ATTENTECHOIXBATEAUVISE
#define ATTENTECHOIXBATEAUVISE

#include "Etat.h"


class AttenteChoixBateauVise : public Etat
{

	public :

		/**
		*\fn AttenteChoixBateauVise(MoteurJeu* m);
		*\brief Constructor
		*/
		AttenteChoixBateauVise(MoteurJeu * m);

		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();

}; 


#endif