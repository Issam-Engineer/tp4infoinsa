/**
*\file  Plateau.h
*\brief File which contains the attributes and function declarations of Plateau class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef PLATEAU_H
#define PLATEAU_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include "Case.h"
#include "enumCOULEUR.h"

using namespace std;

class Plateau
{
	private :

		int _longueur;
		int _largeur;
		vector<Case*> _tabCase;

	public :
		/**
		*\fn Plateau()
		*\brief constructor of Plateau class
		*/
		Plateau();
		/**
		*\fn int largeur()
		*\brief Function which returns the width of game board
		*\return int width of the game board
		*/
		int largeur();
		/**
		*\fn int longueur()
		*\brief Function which returns the length of game board
		*\return int length of the game board
		*/
		int longueur();
		/**
		*\fn Case* getCasePort(int c)
		*\brief Function which returns the harbour corresponding to the given colour
		*\param[in] c int couleur
		*\return Case* 
		*/
		Case* getCasePort(int couleur);

		/**
		*\fn Case* getCase(pair<int,int> p)
		*\brief Function which returns the associated Case
		*\return Case* 
		*/
		Case* getCase(pair<int,int> p);
		/**
		*\fn bool estAccessible(pair<int,int> p)
		*\brief Function which says if the case at position p is accessible
		*\return bool true is the case is accessible
		*/
		bool estAccessible(pair<int,int> p);
		/**
		*\fn void setAccessible(pair<int,int> p)
		*\brief Function which make the case at position p accessible
		*/
		void setAccessible(pair<int,int> p);
		/**
		*\fn void setInaccessible(pair<int,int> p)
		*\brief Function which make the case at position p inaccessible
		*/
		void setInaccessible(pair<int,int> p);


		/**
		*\fn void setAccessibleAll(bool b);
		*\brief Function which put all the case inaccessible
		*/
		void setAccessibleAll(bool b);


}; 

inline int Plateau::largeur(){
	return _largeur;
}

inline int Plateau::longueur(){
	return _longueur;
}

#endif