﻿/**
* \file  EtatCanonFin.h
* \brief file which contains function declarations and attributes of the EtatCanonFin class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ETATCANONFIN_H
#define ETATCANONFIN_H

#include "EtatTir.h"

class EtatCanonFin : public Etat
{

	private:

		int puissance;
		int angle;

	public :
		
		/**
		*\fn EtatCanonFin(MoteurJeu * m)
		*\brief Constructor
		*/
		EtatCanonFin(MoteurJeu * m);

		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();

		/**
		*\fn virtual void init(int p, int a);
		*\brief Function which initiates the shoot
		*\param[in] int p : the power
		*\param[in] int a : the angle
		*/
		virtual void init(int p, int a);

}; 


inline void EtatCanonFin::init(int p,int a){puissance=p;angle=a;};

#endif
