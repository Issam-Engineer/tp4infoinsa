/**
*\file  Bateau.h
*\brief File which contains the attributes and function declarations of the Bateau class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class Bateau
{

	protected :

		bool peutPorterTresor;
		bool peutJouer2Des;
		bool peutTirer;
		bool peutEtreVise;
		pair<int,int> position;

	public :

		/**
		* \fn virtual string typeBateau()
		* \brief Pure virtual function which allows inherited classes to give their name
		* \return string the class name
		*/
		virtual string typeBateau();/*ON NE MET PAS VIRTUELLE PURE*/
		/**
		* \fn Virtual void init()
		* \brief function which allows inherited classes to initialize themselves
		*/
		virtual void init();/*ON NE MET PAS VIRTUELLE PURE*/

		/**
		* \fn pair<int,int> getPosition()
		* \brief Virtual function which return the boat position
		* \return pair<int,int> boat position
		*/
		virtual pair<int,int> getPosition();
		/**
		* \fn bool peutTirer()
		* \brief Virtual function which indicates if the boat can shoot
		* (for example a Radeau can't be shot)
		*
		* \return bool true if boat can shoot
		*/
		virtual bool peutTirer();
		/**
		*\fn bool peutEtreVise()
		*\brief Virtual function which indicates if the boat can be shot
		* (for example a Radeau can't be shot)
		*
		*\return bool true if the boat can be shot
		*/
		virtual bool peutEtreVise();
		/**
		*\fn bool peutJouer2Des()
		*\brief Virtual function which indicates if the boat is allowed to play two dices
		*
		*Only a Caravelle can roll the dice twice
		*
		*\return bool true if the boat can role the dice twice
		*/
		virtual bool peutJouer2Des();
		/**
		*\fn void positionner(pair<int,int> p)
		*\brief Virtual function which replaces the boat at a given position
		*\param[in] pair<int,int> a position
		*/
		virtual void positionner(pair<int,int> p);
}; 

inline pair<int,int> Bateau::getPosition(){
	return position;
}
inline bool Bateau::peutTirer(){
	return peutTirer;
}
inline bool Bateau::peutEtreVise(){
	return peutEtreVise;
}
inline bool Bateau::peutJouer2Des(){
	return peutJouer2Des;
}