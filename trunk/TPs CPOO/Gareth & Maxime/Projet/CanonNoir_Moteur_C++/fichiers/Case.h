﻿/**
* \file  Case.h
* \brief fichier qui regroupe les fonctionnalités et les attributs de la classe Case
* \author Havez Maxime
* \author Thiveux Gareth
* \version 1.0
*/

//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include <cstdlib>
#include <iostream>
#include "Etat.h"

using namespace std;

class Case
{
	public :

		static int nbTotTresor;

	protected :

		pair<int,int>  position;
		bool accessible;
		int hauteur;

	public :

		//virtuelle pure
		/**
		* \fn virtual void getEtat() = 0
		* \brief pure virtual function which allows to inherit classes to give their states
		* \return state the associated state
		*/
		virtual Etat getEtat() = 0;


		/**
		* \fn int getHauteur()
		* \brief function which gives the height
		* \return int the height of the case
		*/
		virtual int getHauteur();
		/**
		* \fn bool accessible()
		* \brief function which indicates if it's an accessible case
		* \return bool true if the case is accessible
 		*/
		virtual bool accessible();
		/**
		* \fn pair<int,int> getPosition()
		* \brief function which gives the case position 
		* \return pair<int,int> the case position
		*/
		virtual pair<int,int> getPosition();
		
}; 

inline bool Case::accessible(){
	return accessible;
}
inline int Case::getHauteur(){
	return hauteur;
}
inline pair<int,int> Case::getPosition(){
	return position;
}

