/**
* \file  EtatTir.h
* \brief file which contains function declarations and attributes of the EtatTir class
* \author Havez Maxime
* \author Thiveux Gareth
* \version 1.0
*/

#include "Etat.h"
#include "MoteurJeu.h"

class EtatTir : public Etat
{
	private :


	protected :

		MoteurJeu motor;
		int puissance;
		int angle;
		bool Duel;
		 
	public :
		/**
		*\fn virtual void tirCanon()
		*\brief function which execute the shoot
		*/
		virtual void tirCanon();
		/**
		*\fn virtual void init(int p, int a);
		*\brief function which initiates the shoot
		*\param[in] int p : the puissance
		*\param[in] int p : the angle
		*/
		virtual void init(int p, int a);
		/**
		*\fn void execute()
		*\brief function which execute the current state
		*/
		virtual void execute();

}; 

