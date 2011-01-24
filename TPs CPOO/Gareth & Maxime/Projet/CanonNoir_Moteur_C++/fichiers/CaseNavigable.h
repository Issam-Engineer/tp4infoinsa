/**
* \file  CaseNavigable.h
* \brief File containing the functionalities and the attributes of the CaseNavigable class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef CASENAVIGABLE_H
#define CASENAVIGABLE_H

#include "Case.h"

class CaseNavigable : public Case
{
	private :

		bool _bateau;

	public :

		/**
		*\fn virtual bool hasBateau()
		*\brief function which indicates if the case has a boat
		*\return bool yes if the naviguable case has a boat
		*/
		virtual bool hasBateau();
		/**
		*\fn virtual void setBateau(bool b)
		*\brief function which modify the current value of _bateau
		*\return bool b
		*/
		virtual void setBateau(bool b);
		/**
		*\fn CaseNavigable()
		*\brief Default constructor of CaseNavigable
		*\return pointer on the instance
		*/
		CaseNavigable();
		/**
		*\fn virtual char getTypeCase()
		*\brief Inherited function which gives the type of the square
		*\return char the type of the square
		*/
		char getTypeCase();


}; 

inline bool CaseNavigable::hasBateau(){return _bateau;}
inline void CaseNavigable::setBateau(bool b){_bateau=b;}
inline char CaseNavigable::getTypeCase() {return 'N';}

#endif
