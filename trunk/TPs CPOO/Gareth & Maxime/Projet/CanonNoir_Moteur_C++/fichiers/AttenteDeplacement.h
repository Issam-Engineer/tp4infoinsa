﻿/**
* \file  AttenteDeplacement.h
* \brief File containing the functionalities and the attributes of the AttenteDeplacement class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ATTENTEDEPLACEMENT_H
#define ATTENTEDEPLACEMENT_H

#include "Etat.h"

class __declspec(dllexport) AttenteDeplacement : public Etat
{

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();

}; 

#endif