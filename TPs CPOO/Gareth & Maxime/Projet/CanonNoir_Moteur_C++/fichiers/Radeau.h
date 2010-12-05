/**
* \file  Radeau.h
* \brief file which contains the attributes and function declarations of the Radeau class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "Bateau.h"

class Radeau : public Bateau
{

	public :
		/**
		* \fn virtual string typeBateau() = 0
		* \brief Inherited function which gives the name of the class
		* \return string the name of the class
		*/
		string typeBateau();
		/**
		* \fn void init()
		* \brief Inherited function which initialized the Radeau
		*/
		void init();
		/**
		* \fn Radeau()
		* \brief Default constructor
		*/
		Radeau(); 
}; 

