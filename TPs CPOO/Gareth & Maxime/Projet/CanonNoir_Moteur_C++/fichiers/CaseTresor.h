/**
* \file  CaseTresor.h
* \brief File containing the functionalities and the attributes of the CaseTresor class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef CASETRESOR_H
#define CASETRESOR_H

#include "CaseContourIle.h"

class CaseTresor : public CaseContourIle
{

	public :

		/**
		* \fn int getEtat() 
		* \brief Function which gives the state associated to the class
		* \return int the associated state
		*/
		int getEtat();
		/**
		*\fn CaseTresor()
		*\brief Default constructor of CaseTresor
		*\return pointer on the instance
		*/
		CaseTresor();

}; 

inline int CaseTresor::getEtat(){ return 9; }

#endif