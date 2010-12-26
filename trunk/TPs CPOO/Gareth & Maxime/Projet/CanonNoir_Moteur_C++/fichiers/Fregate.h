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

class __declspec(dllexport)  Fregate : public Bateau
{

	public :
		/**
		*\fn virtual char type()
		*\brief Inherited function which gives the name of the class
		*\return char the name of the class
		*/
		char type();
		/**
		*\fn void init()
		*\brief Inherited function which initialises the Fregate
		
		virtual void init();*/
		/**
		*\fn Fregate()
		*\brief default constructor
		*/
		Fregate();
}; 

inline char Fregate::type() {return 'F';}

#endif
