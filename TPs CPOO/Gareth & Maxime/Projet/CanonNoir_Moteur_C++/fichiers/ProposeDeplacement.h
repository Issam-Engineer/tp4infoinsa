/**
* \file  ProposeDeplacement.h
* \brief File containing the functionalities and the attributes of the ProposeDeplacement class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/


#ifndef PROPOSEDEPLACEMENT_H
#define PROPOSEDEPLACEMENT_H

#include "Case.h"

using namespace std;

class ProposeDeplacement : public Etat
{
	public :

		Case * tabCase;
		int _valeurDe;

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();

}; 

#endif
