/**
* \file  AttenteCanonAngle.h
* \brief File containing the functionalities and the attributes of the AttenteCanonAngle class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "EtatTir.h" 

class AttenteCanonAngle : public EtatTir
{

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();

}; 

