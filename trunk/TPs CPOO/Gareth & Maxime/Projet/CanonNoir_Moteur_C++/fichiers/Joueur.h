﻿/**
* \file  Joueur.h
* \brief file which contains the attributes and function declarations of the Joueur class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef JOUEUR_H
#define JOUEUR_H

#include <cstdlib>
#include <iostream>
#include "Bateau.h"

using namespace std;

class Joueur
{

	public :

		string _nom;
		int _numero;
		bool _gagnant;
		Bateau _bateau1;
		Bateau _bateau2; /*NULL if nb joueur !=2*/

	public :

		/**
		*\fn Joueur(string n, int coul, int num)
		*\brief constructor with 3 parameters
		*/
		Joueur(string n, int num);
		/**
		*\fn Joueur()
		*\brief default constructor
		*/
		Joueur();
		/**
		*\fn string nom() const
		*\brief acces function to the Joueur's name
		*/
		string nom() const;
		/**
		*\fn int numero() const
		*\brief acces function to the Joueur's number
		*/
		int numero() const;
		/**
		*\fn void modifierNumero(int i)
		*\brief function which permits to change the Joueur's number
		*\param[in] int i 
		*/
		void modifierNumero(int i);
		/**
		*\fn Bateau getBateau1() const
		*\brief acces function to the Joueur's boat 1
		*/
		Bateau getBateau1() const;
		/**
		*\fn Bateau getBateau2() const
		*\brief acces function to the Joueur's boat 1
		*/
		Bateau getBateau2() const;

}; 

inline Bateau Joueur::getBateau1() const{ return _bateau1 ;}
inline Bateau Joueur::getBateau2() const{ return _bateau2 ;}
inline int Joueur::numero() const{ return _numero ;}
inline string Joueur::nom() const{ return _nom ;}

#endif