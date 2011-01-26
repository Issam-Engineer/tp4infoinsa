/**
*\file  CaseContourIle.h
*\brief File containing the functionalities and the attributes of the CaseContourIle class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef CASECONTOURILE_H
#define CASECONTOURILE_H

#include "CaseNavigable.h"

class CaseContourIle : public CaseNavigable
{
	public :

		/**
		*\fn CaseContourIle()
		*\brief Default constructor of CaseContourIle
		*\return pointer on the instance
		*/
		CaseContourIle();
		/**
		*\fn virtual char getTypeCase()
		*\brief Inherited function which gives the type of the square
		*\return char the type of the square
		*/
		char getTypeCase();
}; 

inline char CaseContourIle::getTypeCase() {return 'A';}

#endif
