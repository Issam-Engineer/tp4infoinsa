/**
* \file  Case.h
* \brief File containing the functionalities and the attributes of the Case class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef CASE_H
#define CASE_H

#include <cstdlib>
#include <iostream>
#include "Etat.h"

using namespace std;

class Case
{
	public :

		static int nbTotTresor;

	protected :

		pair<int,int> _position;
		bool _accessible;
		int _hauteur;

	public :

		/**
		*\fn virtual Case()
		*\brief default constructor
		*/
		Case();
		/**
		*\fn virtual int getEtat()
		*\brief virtual function which allows inherited classes to give their state
		*\return int the associated state
		*/
		virtual int getEtat();
		/**
		*\fn int getHauteur()
		*\brief Function which gives the height
		*\return int the height of the square
		*/
		virtual int getHauteur();
		/**
		*\fn bool estAccessible()
		*\brief Function which indicates if it's an accessible square
		*\return bool true if the square is accessible
 		*/
		virtual bool estAccessible();
			/**
		*\fn bool setAccessible()
		*\brief Function which make the case accessible
 		*/
		virtual	void setAccessible();
		/**
		*\fn pair<int,int> getPosition()
		*\brief function which gives the square position 
		*\return pair<int,int> the square position
		*/
		virtual pair<int,int> getPosition();

		/**
		*\fn int getCouleur()
		*\brief use for CasePort 
		*\return 0 by default
		*/
		virtual int getCouleur();
		
		/**
		*\fn void setPosition(pair<int,int> p)
		*\brief change the value of the attribute _position
		**/
		void setPosition(pair<int,int> p);
}; 

inline bool Case::estAccessible(){
	return _accessible;
}
inline void Case::setAccessible(){
	_accessible=true;
}
inline int Case::getHauteur(){
	return _hauteur;
}
inline pair<int,int> Case::getPosition(){
	return _position;
}
inline int Case::getEtat(){
	return -1;
}

#endif
