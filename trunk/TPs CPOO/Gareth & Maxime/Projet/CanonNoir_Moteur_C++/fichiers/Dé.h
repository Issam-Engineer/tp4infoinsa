/**
*\file  Dé.h
*\brief File which contains the attributes and function declarations of the Dé class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef DE_H
#define DE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Dé
{
	private :

		int valeurDe1;
		int valeurDe2;


	public :

		/**
		* \fn void lancerDe()
		* \brief Function which rolls the dice
		*/
		void lancerDe();

}; 

#endif
