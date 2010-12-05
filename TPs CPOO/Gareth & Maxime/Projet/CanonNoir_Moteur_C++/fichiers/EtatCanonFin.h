/**
* \file  Etat.h
* \brief file which contains function declarations and attributes of the EtatCanonFin class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "EtatTir.h"

class EtatCanonFin : public EtatTir
{

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();

}; 

