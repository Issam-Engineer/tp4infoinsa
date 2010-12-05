/**
* \file  Etat.h
* \brief file which contains function declarations and attributes of the EtatDepos class
* \author Havez Maxime
* \author Thiveux Gareth
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
		*\brief function which execute the current state
		*/
		virtual void execute();

}; 

