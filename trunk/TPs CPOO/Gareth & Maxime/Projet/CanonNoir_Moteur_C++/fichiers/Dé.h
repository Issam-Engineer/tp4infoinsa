/**
*\file  Dé.h
*\brief File which contains the attributes and function declarations of the Dé class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef DE_H
#define DE_H

class Dé
{
	private :

		int valeurDe1;
		int valeurDe2;


	public :

		/**
		* \fn void lancerDe()
		* \brief Virtual function which rolls the dice
		*/
		virtual void lancerDe();

}; 

#endif
