/**
* \file  Radeau.h
* \brief file which contains attributs and function declarations of the Radeau class
* \author Thiveux Gareth
* \version 1.0
*/

#include "Bateau.h"

class Radeau : public Bateau
{

	public :
		/**
		* \fn virtual string typeBateau() = 0
		* \brief inherited function which gives the name of the class
		* \return string the name of the class
		*/
		string typeBateau();
		/**
		* \fn void init()
		* \brief inherited function which initialized the Radeau
		*/
		void init();
		/**
		* \fn Radeau()
		* \brief default constructor
		*/
		Radeau(); 
}; 

