/**
* \file  Fregate.h
* \brief file which contains the attributes and function declarations of the Fregate class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef FREGATE_H
#define FREGATE_H

#include "Bateau.h"

class Fregate : public Bateau
{

	public :
		/**
		*\fn string typeBateau()
		*\brief inherited function which gives the name of the class
		*\return string the name of the class
		
		char* typeBateau();*/
		/**
		*\fn void init()
		*\brief inherited function which initialized the Fregate
		*/
		virtual void init();
		/**
		*\fn Fregate()
		*\brief default constructor
		*/
		Fregate();
}; 

#endif
