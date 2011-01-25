/**
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
		int _nbTresors;

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
		/**
		*\fn int getNbTresors()
		*\brief Access function
		*\return int the number of treasures of the harbour
		**/
		int getNbTresors() const;
		/**
		*\fn void setNbTresors()
		*\brief Modifies the attribute _nbTresors
		**/
		void setNbTresors(int n);


}; 

inline int CasePort::getCouleur(){ return _couleur; }
inline int CasePort::getEtat(){ return ETATDEPOT; }
inline char CasePort::getTypeCase() {return 'P';}
inline int CasePort::getNbTresors() const { return _nbTresors; }
inline void CasePort::setNbTresors(int n) { _nbTresors = n; }

#endif