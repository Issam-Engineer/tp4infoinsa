/**
* \file  AttenteInitialisation.h
* \brief File containing the functionalities and the attributes of the AttenteInitialisation class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ATTENTEINITIALISATION_H
#define ATTENTEINITIALISATION_H

#include "Etat.h"

class AttenteInitialisation : public Etat
{

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();

		/**
		*\fn AttenteInitialisation(MoteurJeu* m)
		*\brief Constructor with one parameter
		*/
		AttenteInitialisation(MoteurJeu* m);

}; 

#endif
