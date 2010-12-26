/**
* \file  AttenteCanonPuissance.h
* \brief File containing the functionalities and the attributes of the AttenteCanonPuissance class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ATTENTECANONPUISSANCE_H
#define ATTENTECANONPUISSANCE_H

#include "EtatTir.h"

class __declspec(dllexport) AttenteCanonPuissance : public EtatTir
{
	
	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();

}; 

#endif
