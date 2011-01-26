/**
*\file EtatCanonFin.h
*\brief file which contains function declarations and attributes of the EtatCanonFin class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef ETATCANONFIN_H
#define ETATCANONFIN_H

#include "EtatTir.h"
#include <math.h>
#define PI 3.141592653589793238

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


		/**
		*\fn bool tir()
		*\brief function which calculates the tir
		*\return a bool true if the bateau is touched
		*/
		bool tir();

		/**
		*\fn double z(double x)
		*\brief return the result of a parabolic function
		*\return y a double result of z function
		*/
		double z(double x);
}; 


inline void EtatCanonFin::init(int p,int a){puissance=p;angle=a;};

#endif
