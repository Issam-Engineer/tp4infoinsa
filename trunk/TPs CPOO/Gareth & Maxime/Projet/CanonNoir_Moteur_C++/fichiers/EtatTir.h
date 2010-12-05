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

		virtual void tirCanon();
		virtual void init(int p, int a);
		virtual void execute();

}; 

