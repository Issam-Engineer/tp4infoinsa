/**
* \file  Joueur.h
* \brief file which contains the attributes and function declarations of the Joueur class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef CASE_H
#define CASE_H

#include <cstdlib>
#include <iostream>
#include "Bateau.h"

#ifndef JOUEUR_H
#define JOUEUR_H

using namespace std;

class Joueur
{

	public :

		string nom;
		int numero;
		bool gagnant;
		Bateau bateau1;
		Bateau bateau2; /*NULL if nb joueur !=2*/

	public :

		virtual string nom();
		virtual int numero();
		virtual void modifierNumero(int i);
		Joueur(string n, int coul, int num);
		virtual Bateau getBateau(int i);

}; 

#endif
