/**
* \file  EtatTir.h
* \brief file which contains function declarations and attributes of the EtatTir class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ETATTIR_H
#define ETATTIR_H

#include "Etat.h"

class EtatTir : public Etat
{

	protected :

		int puissance;
		int angle;
		bool Duel;
		 
	public :
		/**
		*\fn virtual void tirCanon()
		*\brief Function which executes the shot
		*/
		/*virtual void tirCanon();*/

		/**
		*\fn virtual void init(int p, int a);
		*\brief Function which initiates the shoot
		*\param[in] int p : the power
		*\param[in] int a : the angle
		*/
		virtual void init(int p, int a);
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();
		/**
		*\fn EtatTir(MoteurJeu* m)
		*\brief Constructor
		*/
		EtatTir(MoteurJeu * m);


}; 

#endif
