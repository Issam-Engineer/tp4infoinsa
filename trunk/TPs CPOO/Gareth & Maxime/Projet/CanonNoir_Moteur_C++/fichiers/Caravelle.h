/**
*\file  Caravelle.h
*\brief File which contains the attributes and function declarations of the Caravelle class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef CARAVELLE_H
#define CARAVELLE_H

#include "Bateau.h"

class __declspec(dllexport) Caravelle : public Bateau
{

	public :

		/**
		*\fn virtual char type()
		*\brief Inherited function which gives the name of the class
		*\return char the name of the class
		*/
		char type();

		/**
		*\fn Caravelle()
		*\brief Default constructor
		*/
		Caravelle();

}; 

inline char Caravelle::type() {	return 'C';}

#endif
