/**
* \file  Joueur.h
* \brief file which contains attributs and functions declarations of the Joueur class
* \author Havez Maxime
* \author Thiveux Gareth
* \version 1.0
*/
#include <cstdlib>
#include <iostream>
#include "Bateau.h"

using namespace std;

class Joueur
{

	public :

		string nom;
		int numero;
		bool gagnant;
		Bateau[2] Bateau;

	public :

		virtual string nom();
		virtual int numero();
		virtual void modifierNumero(int i);
		Joueur(string n, int coul, int num);
		virtual Bateau getBateau(int i);

}; 

