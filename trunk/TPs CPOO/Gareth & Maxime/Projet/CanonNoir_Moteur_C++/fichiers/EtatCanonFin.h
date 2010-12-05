/**
* \file  Etat.h
* \brief file which contains function declarations and attributes of the EtatCanonFin class
* \author Havez Maxime
* \author Thiveux Gareth
* \version 1.0
*/

#include "EtatTir.h"

class EtatCanonFin : public EtatTir
{

	public :
		/**
		*\fn void execute()
		*\brief function which execute the current state
		*/
		void execute();

}; 

