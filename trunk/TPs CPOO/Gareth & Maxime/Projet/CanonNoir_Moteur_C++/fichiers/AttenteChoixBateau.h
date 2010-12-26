/**
* \file  AttenteChoixBateau.h
* \brief File containing the functionalities and the attributes of the AttenteChoixBateau class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ATTENTECHOIXBATEAU_H
#define ATTENTECHOIXBATEAU_H

#include "Etat.h"

class __declspec(dllexport) AttenteChoixBateau : public Etat
{

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();

}; 

#endif
