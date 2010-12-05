/**
* \file  Etat.h
* \brief file which contains function declarations and attributes of the EtatDepot class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "Etat.h"
#include "MoteurJeu.h"

class EtatDepot : public Etat
{
	private :

		MoteurJeu motor;

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();

}; 

