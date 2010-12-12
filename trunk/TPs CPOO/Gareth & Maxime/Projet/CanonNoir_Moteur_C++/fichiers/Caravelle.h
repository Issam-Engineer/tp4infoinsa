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

class Caravelle : public Bateau
{

	public :

		/**
		*\fn virtual string typeBateau()
		*\brief Inherited function which gives the name of the class
		*\return string the name of the class
		
		char* typeBateau();*/
		/**
		*\fn void init()
		*\brief Inherited function which initialises the Caravelle
		*/
		virtual void init();
		/**
		*\fn Caravelle()
		*\brief Default constructor
		*/
		Caravelle();

}; 

#endif
