﻿/**
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

using namespace std;

class __declspec(dllexport) Plateau
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
		*\return Case* on sait d'après le traitement qu'il s'agit d'une case de type CasePort
		*/
		Case* getCasePort(int couleur);

}; 

inline int Plateau::largeur(){
	return _largeur;
}

inline int Plateau::longueur(){
	return _longueur;
}

#endif