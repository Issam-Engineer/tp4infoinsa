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


class __declspec(dllexport) AttenteChoixBateauVise : public Etat
{

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();

}; 


#endif