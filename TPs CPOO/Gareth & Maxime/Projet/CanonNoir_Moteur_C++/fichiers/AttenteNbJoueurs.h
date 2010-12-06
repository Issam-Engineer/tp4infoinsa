﻿/**
*\file  AttenteNbJoueurs.h
*\brief File containing the functionalities and the attributes of the AttenteNbJoueurs class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef ATTENTENBJOUEURS_H
#define ATTENTENBJOUEURS_H


class AttenteNbJoueurs : public Etat
{

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();
}; 

#endif
