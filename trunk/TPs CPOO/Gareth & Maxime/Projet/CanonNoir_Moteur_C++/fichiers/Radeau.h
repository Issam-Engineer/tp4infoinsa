/**
* \file  Radeau.h
* \brief file which contains the attributes and function declarations of the Radeau class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef RADEAU_H
#define RADEAU_H

#include "Bateau.h"

class Radeau : public Bateau
{

	public :
		/**
		* \fn string typeBateau()
		* \brief Inherited function which gives the name of the class
		* \return string the name of the class
		
		char* typeBateau();*/
		/**
		* \fn void init()
		* \brief Inherited function which initialized the Radeau
		*/
		virtual void init();
		/**
		* \fn Radeau()
		* \brief Default constructor
		*/
		Radeau(); 
}; 

#endif
