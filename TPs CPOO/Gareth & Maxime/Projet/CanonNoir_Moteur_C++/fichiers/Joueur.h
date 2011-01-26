/**
*\file Joueur.h
*\brief file which contains the attributes and function declarations of the Joueur class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef JOUEUR_H
#define JOUEUR_H

#include <cstdlib>
#include <iostream>

#include "Bateau.h"
#include "CasePort.h"

using namespace std;
class CasePort;

class Joueur
{

	public :

		CasePort* _cp1; 
		CasePort* _cp2;/*NULL if nb joueur !=2*/
		int _numero;
		bool _gagnant;
		Bateau* _bateau1;
		Bateau* _bateau2;/*NULL if nb joueur !=2*/
		Bateau* _bateauCourant;
		//int _nbTresors;

	public :


		/**
		*\fn Joueur(int num,CasePort* c)
		*\brief constructor with 2 parameters
		*/
		Joueur(int num, CasePort* c);
		/**
		*\fn Joueur(int num,CasePort* c, CasePort* c2)
		*\brief constructor with 3 parameters => only when there is 2 players
		*/
		Joueur(int num, CasePort* c1, CasePort* c2);
		/**
		*\fn Joueur()
		*\brief default constructor
		*/
		Joueur();
		/**
		*\fn int numero() const
		*\brief acces function to the Joueur's number
		*/
		int getNumero() const;
		/**
		*\fn void modifierNumero(int i)
		*\brief function which permits to change the Joueur's number
		*\param[in] int i 
		*/
		void setNumero(int i);
		/**
		*\fn int getPort1() const
		*\brief acces function to the Joueur's first harbour
		*/
		CasePort* getPort1() const;
		/**
		*\fn int getPort2() const
		*\brief acces function to the Joueur's second harbour
		*/
		CasePort* getPort2() const;
		/**
		*\fn Bateau getBateau1() const
		*\brief acces function to the Joueur's boat 1
		*/
		Bateau* getBateau1() const;
		/**
		*\fn Bateau getBateau2() const
		*\brief acces function to the Joueur's boat 1
		*/
		Bateau* getBateau2() const;
		/**
		*\fn bool bateauAtPos(pair<int,int> p)
		*\brief function which says if the player has a bateau at the given position
		*\return a boolean, true if there is a boat 
		*/
		bool bateauAtPos(pair<int,int> p);
		/**
		*\fn Bateau getBateauPos(pair<int,int> p)
		*\brief acces function to the boat at the given position
		*\return the boat
		*/
		Bateau* getBateauPos(pair<int,int> p);
		/**
		*\fn Bateau getBateauCourant()
		*\brief function which permits to obtain the current boat
		*\return Bateau the current boat
		*/
		Bateau* getBateauCourant();
		/**
		*\fn void GAGNANT()
		*\brief the Joueur is the winner
		*/
		void GAGNANT();

		/**
		*\fn void setCasePort1(CasePort* c)
		*\brief function which modifies the attribute CasePort1
		*/
		void setCasePort1(CasePort* c);
		/**
		*\fn void setCasePort2(CasePort* c)
		*\brief function which modifies the attribute CasePort1
		*/
		void setCasePort2(CasePort* c);
		/**
		*\fn void setBateauCourant(Bateau* b)
		*\brief function which modifies the current boat
		*/
		void setBateauCourant(Bateau* b);

		/**
		*\fn void setBateau1(Bateau * b)
		*\brief changes the Bateau1 of the player 
		*/
		void setBateau1(Bateau* b);

}; 

inline CasePort* Joueur::getPort1() const { return _cp1 ;}
inline CasePort* Joueur::getPort2() const { return _cp2 ;}
inline void Joueur::setCasePort1(CasePort* c) { _cp1=c ;}
inline void Joueur::setCasePort2(CasePort* c) { _cp2=c ;}

inline Bateau* Joueur::getBateau1() const { return _bateau1 ;}
inline Bateau* Joueur::getBateau2() const { return _bateau2 ;}

inline int Joueur::getNumero() const{ return _numero ;}
inline void Joueur::setNumero(int i){_numero=i;}

inline Bateau* Joueur::getBateauCourant() { return _bateauCourant; }
inline void Joueur::setBateauCourant(Bateau* b) { _bateauCourant = b; }

inline void Joueur::setBateau1(Bateau* b){ _bateau1=b;}

#endif