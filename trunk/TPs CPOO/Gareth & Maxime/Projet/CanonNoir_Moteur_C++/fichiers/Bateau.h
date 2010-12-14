﻿/**
*\file  Bateau.h
*\brief File which contains the attributes and function declarations of the Bateau class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef BATEAU_H
#define BATEAU_H

#include <cstdlib>
#include <string>
#include <iostream>
#include "Case.h"

using namespace std;

class Bateau
{

	protected :

		bool pPTresor;
		bool pJ2Des;
		bool pTirer;
		bool pEVise;
		Case pos;

	public :

		/**
		*\fn virtual char type()
		*\brief Pure virtual function which allows inherited classes to give their name
		*\return char the class name
		*/
		virtual char type();

		/**
		*\fn Virtual void init()
		*\brief function which allows inherited classes to initialize themselves
		*/
		virtual void init();

		/**
		*\fn Case getPosition()
		*\brief Virtual function which return the boat position
		*\return Case the boat position
		*/
		virtual Case getPosition();
		/**
		*\fn bool peutTirer()
		*\brief Virtual function which indicates if the boat can shoot
		*(for example a Radeau can't be shot)
		*
		*\return bool true if boat can shoot
		*/
		virtual bool peutTirer();
		/**
		*\fn bool peutEtreVise()
		*\brief Virtual function which indicates if the boat can be shot
		*(for example a Radeau can't be shot)
		*
		*\return bool true if the boat can be shot
		*/
		virtual bool peutEtreVise();
		/**
		*\fn bool peutJouer2Des()
		*\brief Virtual function which indicates if the boat is allowed to play two dices
		*
		*Only a Caravelle can roll the dice twice
		*
		*\return bool true if the boat can role the dice twice
		*/
		virtual bool peutJouer2Des();
		/**
		*\fn void positionner(Case p)
		*\brief Virtual function which replaces the boat at a given position
		*\param[in] Case a position
		*/
		virtual void positionner(Case p);
}; 

inline Case Bateau::getPosition(){
	return pos;
}
inline bool Bateau::peutTirer(){
	return pTirer;
}
inline bool Bateau::peutEtreVise(){
	return pEVise;
}
inline bool Bateau::peutJouer2Des(){
	return pJ2Des;
}
inline char Bateau::type(){
	return 'E';
}

#endif