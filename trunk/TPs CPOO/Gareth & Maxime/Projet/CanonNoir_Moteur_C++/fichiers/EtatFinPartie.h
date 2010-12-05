/**
* \file  Etat.h
* \brief file which contains function declarations and attributes of the EtatFinPartie class
* \author Havez Maxime
* \author Thiveux Gareth
* \version 1.0
*/

#include "Etat.h"
#include "MoteurJeu.h"

class EtatFinPartie : public Etat
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

