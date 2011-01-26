/**
*\file ProposeDeplacement.h
*\brief File containing the functionalities and the attributes of the ProposeDeplacement class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/


#ifndef PROPOSEDEPLACEMENT_H
#define PROPOSEDEPLACEMENT_H

#include "Case.h"

using namespace std;

class ProposeDeplacement : public Etat
{
		int _valeurDe;

	public :
		/**
		*\fn ProposeDeplacement(MoteurJeu * m)
		*\brief Constructor
		*/
		ProposeDeplacement(MoteurJeu * m);

		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();

		/**
		*\fn void traverseIle(pair<int,int>* tab, int i)
		*\brief Function which checks if there's no island on the path between the actuel square and the destination one
		*/
		void traverseIle(pair<int,int>* tab, int i);

}; 

#endif
