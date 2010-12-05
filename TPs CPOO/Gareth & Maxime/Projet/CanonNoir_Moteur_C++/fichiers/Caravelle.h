/**
*\file  Caravelle.h
*\brief File which contains the attributes and function declarations of the Caravelle class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "Bateau.h"

class Caravelle : public Bateau
{

	public :

		/**
		*\fn virtual string typeBateau() = 0
		*\brief Inherited function which gives the name of the class
		*\return string the name of the class
		*/
		string typeBateau();
		/**
		*\fn void init()
		*\brief Inherited function which initialized the Caravelle
		*/
		void init();
		/**
		*\fn Caravelle()
		*\brief Default constructor
		*/
		Caravelle();

}; 

