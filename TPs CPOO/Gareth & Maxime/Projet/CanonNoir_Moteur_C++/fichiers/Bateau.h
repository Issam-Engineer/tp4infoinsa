/**
*\file  Bateau.h
*\brief File containing the attributes and function declarations of the Bateau class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef BATEAU_H
#define BATEAU_H

#include <cstdlib>
#include <string>
#include <iostream>
#include "Case.h"
#include "CasePort.h"

using namespace std;

class Bateau
{

	protected :

		bool pPTresor;
		bool pJ2Des;
		bool pTirer;
		bool pEVise;
		Case* pos;
		//bool _courant; // vrai si c'est le bateau courant
		int _couleurb;
		bool aTresor;
		bool bonPort;
		CasePort* _cp;

	public :

		/**
		*\fn Bateau()
		*\brief Constructor
		*/
		Bateau();

		/**
		*\fn virtual char type()
		*\brief Pure virtual function which allows inherited classes to give their name
		*\return char the class name
		*/
		virtual char type() = 0;

		/**
		*\fn bool getCourant()
		*\brief acces function
		*\return true if the boat is the current boat of the player
		*/
		bool getCourant();
		/**
		*\fn void setCourant(bool t)
		*\brief function which changes the value of _courant
		*/
		void setCourant(bool t);

		/**
		*\fn Case getPosition()
		*\brief Virtual function which return the boat position
		*\return Case the boat position
		*/
		virtual Case* getPosition();
		/**
		*\fn bool peutTirer()
		*\brief Virtual function which indicates if the boat can shoot
		*(for example a Radeau can't be shot)
		*
		*\return bool true if boat can shoot
		*/
		virtual bool peutTirer();
		/**
		*\fn bool peutEtreVise()
		*\brief Virtual function which indicates if the boat can be shot
		*(for example a Radeau can't be shot)
		*
		*\return bool true if the boat can be shot
		*/
		virtual bool peutEtreVise();
		/**
		*\fn bool peutJouer2Des()
		*\brief Virtual function which indicates if the boat is allowed to play two dices
		*
		*	Only a Caravelle can roll the dice twice
		*
		*\return bool true if the boat can role the dice twice
		*/
		virtual bool peutJouer2Des();
		/**
		*\fn void positionner(Case* c)
		*\brief Virtual function which replaces the boat at a given position
		*\param[in] Case a position
		*/
		virtual void positionner(Case* c);
		/**
		*\fn bool getCouleur()
		*\brief access function
		*\return the color of the boat
		*/
		int getCouleur();
		/**
		*\fn void setCouleur(int c)
		*\brief function which changes the value of _couleurb
		*/
		void setCouleur(int c);
		/**
		*\fn bool getATresor()
		*\brief access function
		*\return bool true if the current boat carries a treasure
		*/
		bool getATresor();
		/**
		*\fn virtual void setATresor(bool b)
		*\brief function which changes the value of aTresor
		*/
		virtual void setATresor(bool b);

		void setPort(CasePort* c);

		Case* getPort();

		/**
		*\fn bool getBonPort()
		*\brief access function
		*\return bool true if the current boat is in his own harbour
		*/
		bool getBonPort();

		/**
		*\fn virtual void setBonPort(bool b)
		*\brief function which changes the value of bonPort
		*/
		virtual void setBonPort(bool b);


}; 

inline Case* Bateau::getPosition(){
	return pos;
}
inline bool Bateau::peutTirer(){
	return pTirer;
}
inline bool Bateau::peutEtreVise(){
	return pEVise;
}
inline bool Bateau::peutJouer2Des(){
	return pJ2Des;
}
/*inline char Bateau::type(){
	return 'E';
}*/
/*inline bool Bateau::getCourant(){
	return _courant;
}
inline void Bateau::setCourant(bool t){
	_courant=t;
}*/
inline int Bateau::getCouleur(){
	return _couleurb;
}
inline void Bateau::setCouleur(int c){
	_couleurb=c;
}
inline bool Bateau::getATresor(){
	return aTresor;
}
inline void Bateau::setATresor(bool b){
	aTresor = b;
}
inline void Bateau::setPort(CasePort* c){
	_cp = c;
}
inline Case* Bateau::getPort(){
	return _cp;
}
inline bool Bateau::getBonPort(){
	return bonPort;
}
inline void Bateau::setBonPort(bool b){
	bonPort = b;
}

#endif