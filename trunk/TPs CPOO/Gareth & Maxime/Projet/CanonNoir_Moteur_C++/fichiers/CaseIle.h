/**
*\file  CaseIle.h
*\brief File containing the functionalities and the attributes of the CaseIle class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef CASEILE_H
#define CASEILE_H

#include "Case.h"

using namespace std;

class CaseIle : public Case
{
	public :

		/**
		*\fn CaseIle()
		*\brief Default constructor of CaseIle
		*\return pointer on the instance
		*/
		CaseIle();
		/**
		*\fn void setAccessible()
		*\brief redefine the heritated function
		*/
		void setAccessible(bool b);
		/**
		*\fn virtual char getTypeCase()
		*\brief Inherited function which gives the type of the square
		*\return char the type of the square
		*/
		char getTypeCase();


}; 

inline void CaseIle::setAccessible(bool b){
	_accessible=false;
}

inline char CaseIle::getTypeCase() {return 'I';}


#endif