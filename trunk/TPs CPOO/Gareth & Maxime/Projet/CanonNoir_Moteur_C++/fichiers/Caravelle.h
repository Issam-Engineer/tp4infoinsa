/**
*\file  Caravelle.h
*\brief file which contains attributs and functions declarations of the Caravelle class
*\author Havez Maxime
*\author Thiveux Gareth
*\version 1.0
*/

#include "Bateau.h"

class Caravelle : public Bateau
{

	public :

		/**
		*\fn virtual string typeBateau() = 0
		*\brief inherited function which gives the name of the class
		*\return string the name of the class
		*/
		string typeBateau();
		/**
		*\fn void init()
		*\brief inherited function which initialized the Caravelle
		*/
		void init();
		/**
		*\fn Caravelle()
		*\brief default constructor
		*/
		Caravelle();

}; 

