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

class __declspec(dllexport) De
{
	private :

		int _valeurDe1;
		int _valeurDe2;


	public :

		/**
		*\fn void lancerDe()
		*\brief Function which rolls the dice
		*/
		void lancerDe();
		/**
		*\fn int getDe1()
		*\brief acces function
		*/
		int getDe1();
		/**
		*\fn int getDe2()
		*\brief acces function
		*/
		int getDe2();
		/**
		*\fn int getSommeDe()
		*\brief acces function
		*/
		int getSommeDe();
}; 

inline int De::getDe1(){
	return _valeurDe1;
}
inline int De::getDe2(){
	return _valeurDe2;
}
inline int De::getSommeDe(){
	return _valeurDe1 + _valeurDe2;
}

#endif
