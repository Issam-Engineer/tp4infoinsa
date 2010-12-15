/**
* \file  AttenteLancerDe.h
* \brief File containing the functionalities and the attributes of the AttenteLancerDe class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ATTENTELANCERDE_H
#define ATTENTELANCERDE_H

#include "Etat.h"

class AttenteLancerDe : public Etat
{

	public :
		/**
		*\fn void choisirDe()
		*\brief Function which chooses the dice to take in account
		*/
		void choisirDe();
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();

}; 

#endif
