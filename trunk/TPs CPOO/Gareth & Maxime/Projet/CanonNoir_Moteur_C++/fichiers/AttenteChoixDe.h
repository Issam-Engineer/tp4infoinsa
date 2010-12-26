/**
* \file  AttenteChoixDe.h
* \brief File containing the functionalities and the attributes of the AttenteChoixDe class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ATTENTECHOIXDE
#define ATTENTECHOIXDE

#include "Etat.h"


class __declspec(dllexport) AttenteChoixDe : public Etat
{

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();

}; 


#endif