/**
*\file  Bateau.h
*\brief file which contains attributs and functions declarations of the Caravelle class
*\author Havez Maxime
*\author Thiveux Gareth
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

		/*vituelle pure*/

		/**
		* \fn virtual string typeBateau() = 0
		* \brief pure virtual function which allows to inherit classes to give their name
		* \return string the class name
		*/
		virtual string typeBateau() = 0;
		/**
		* \fn virtual void init() =0
		* \brief pure virtual function which allows to inherit classes to initialize themselves
		*/
		virtual void init() =0;



		/**
		* \fn pair<int,int> getPosition()
		* \brief virtual function which return the boat position
		* \return pair<int,int> boat position
		*/
		virtual pair<int,int> getPosition();
		/**
		* \fn bool peutTirer()
		* \brief virtual function which indicates if the boat can shoot
		* \return bool true if boat can shoot
		*/
		virtual bool peutTirer();
		/**
		*\fn bool peutEtreVise()
		*\brief virtual function which indicates if the boat can be shooted
		*
		*for example a Radeau can't be shooted
		*
		*\return bool true if the boat can be shooted
		*/
		virtual bool peutEtreVise();
		/**
		*\fn bool peutJouer2Des()
		*\brief virtual funcction which indicates if the boat is allowed to play two De
		*
		*Only a Caravelle can play twice
		*
		*\return bool true if the boat can play twice
		*/
		virtual bool peutJouer2Des();
		/**
		*\fn void positionner(pair<int,int> p)
		*\brief virtual function which replace the boat at a given position
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