﻿/**
* \file  Fregate.h
* \brief file which contains the attributes and function declarations of the Fregate class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "Bateau.h"

class Fregate : public Bateau
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
		*\brief inherited function which initialized the Fregate
		*/
		void init();
		/**
		*\fn Fregate()
		*\brief default constructor
		*/
		Fregate();
}; 

