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
#include "CaseBordurePlateau.h"
#include "CaseCanonNoir.h"
#include "CaseContourIle.h"
#include "CaseIle.h"
#include "CaseNavigable.h"
#include "CasePort.h"
#include "CaseTresor.h"


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
		*\brief Virtual function which returns the width of game board
		*\return int width of the game board
		*/
		virtual int largeur();
		/**
		*\fn int longueur()
		*\brief Virtual function which returns the length of game board
		*\return int length of the game board
		*/
		virtual int longueur();

}; 

inline int Plateau::largeur(){
	return _largeur;
}

inline int Plateau::longueur(){
	return _longueur;
}

#endif