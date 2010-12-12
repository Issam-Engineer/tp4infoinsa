/**
* \file  CaseCanonNoir.h
* \brief File containing the functionalities and the attributes of the CaseCanonNoir class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef CASECANONNOIR_H
#define CASECANONNOIR_H

#include "CaseContourIle.h"

class CaseCanonNoir : public CaseContourIle
{

	public :

		/**
		* \fn int getEtat() 
		* \brief Function which gives the state associated to the class
		* \return int the associated state
		*/
		int getEtat();
		/**
		*\fn CaseCanonNoir()
		*\brief Default constructor of CaseCanonNoir
		*\return pointer on the instance
		*/
		CaseCanonNoir();

}; 

inline int CaseCanonNoir::getEtat(){
	return 8;
}

#endif
