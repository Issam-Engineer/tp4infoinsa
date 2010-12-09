/**
* \file  CaseNavigable.h
* \brief File containing the functionalities and the attributes of the CaseNavigable class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef CASENAVIGABLE_H
#define CASENAVIGABLE_H

#include "Case.h"

class CaseNavigable : public Case
{
	private :

		bool bateau;

	public :

		/**
		* \fn virtual bool hasBateau()
		* \brief function which indicates if the case has a boat
		* \return bool yes if the naviguable case has a boat
		*/
		virtual bool hasBateau();
		/**
		* \fn virtual int getEtat()
		* \brief pure virtual function which allows inherited classes to give their state
		* \return int the associated state
		*/
		virtual int getEtat();

}; 

#endif
