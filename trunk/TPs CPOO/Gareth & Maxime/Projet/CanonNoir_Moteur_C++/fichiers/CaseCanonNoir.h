/**
*\file  CaseCanonNoir.h
*\brief File containing the functionalities and the attributes of the CaseCanonNoir class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef CASECANONNOIR_H
#define CASECANONNOIR_H

#include "CaseContourIle.h"
#include "Etat.h"

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
		/**
		*\fn virtual char getTypeCase()
		*\brief Inherited function which gives the type of the square
		*\return char the type of the square
		*/
		char getTypeCase();

}; 

inline char CaseCanonNoir::getTypeCase() {return 'C';}

#endif
