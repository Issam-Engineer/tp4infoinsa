/**
* \file  AttentePremLancerDe.h
* \brief File containing the functionalities and the attributes of the AttentePremLancerDe class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ATTENTEPREMLANCERDE_H
#define ATTENTEPREMLANCERDE_H

#include "MoteurJeu.h"
#include "Etat.h"

class AttentePremLancerDe : public Etat
{
	private :

		static int* resDe;
		MoteurJeu motor;
		static int nbLance;

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();
		virtual void determinerOrdre();

}; 

#endif
