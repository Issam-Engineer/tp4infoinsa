﻿/**
*\file  CasePort.h
*\brief File which contains the attributes and function declarations of the CasePort class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef CASEPORT_H
#define CASEPORT_H

#include "Case.h"

class CasePort : public Case
{
	private :

		int _couleur;

	public :

		/**
		* \fn int getCouleur()
		* \brief Virtual function which returns the color of the harbour
		* \return int color of the harbour
		*/
		int getCouleur();
		/**
		* \fn void getEtat() 
		* \brief Function which gives the state associated to the class
		* \return Etat the associated state
		*/
		int getEtat();
		/**
		*\fn CasePort(int Couleur)
		*\brief Default constructor of CasePort
		*\return pointer on the instance
		*/
		CasePort(int Couleur);
		/**
		*\fn virtual char getTypeCase()
		*\brief Inherited function which gives the type of the square
		*\return char the type of the square
		*/
		char getTypeCase();



}; 

inline int CasePort::getCouleur(){ return _couleur; }
inline int CasePort::getEtat(){ return ETATDEPOT; }
inline char CasePort::getTypeCase() {return 'P';}

#endif