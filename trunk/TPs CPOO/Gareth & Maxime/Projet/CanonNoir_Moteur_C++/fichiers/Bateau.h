/**
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

using namespace std;

class Bateau
{

	protected :

		bool pPTresor;
		bool pJ2Des;
		bool pTirer;
		bool pEVise;
		pair<int,int> pos;

	public :

		/**
		*\fn virtual string typeBateau()
		*\brief Pure virtual function which allows inherited classes to give their name
		*\return string the class name
		
		virtual char* typeBateau();*/

		/**
		*\fn Virtual void init()
		*\brief function which allows inherited classes to initialize themselves
		*/
		virtual void init();

		/**
		*\fn pair<int,int> getPosition()
		*\brief Virtual function which return the boat position
		*\return pair<int,int> boat position
		*/
		virtual pair<int,int> getPosition();
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
		*\fn void positionner(pair<int,int> p)
		*\brief Virtual function which replaces the boat at a given position
		*\param[in] pair<int,int> a position
		*/
		virtual void positionner(pair<int,int> p);
}; 

inline pair<int,int> Bateau::getPosition(){
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

#endif