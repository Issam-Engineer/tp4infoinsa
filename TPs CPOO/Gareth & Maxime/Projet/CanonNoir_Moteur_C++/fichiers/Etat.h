/**
* \file  Etat.h
*\brief File which contains the function declarations of the Etat interface
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ETAT_H
#define ETAT_H

#include <cstdlib>
#include <iostream>
#include "MoteurJeu.h"

using namespace std;

class Etat 
{
public:
	MoteurJeu motor;

public:
	/**
	*\fn void execute()
	*\brief function which execute the current state
	*/
	virtual void execute(); /*on ne la met pas virtuelle pure ... sinon on ne peut pas instancier un état !*/
	/**
	*\fn void modifMotor(MoteurJeu m)
	*\brief function which changes the current motor
	*\param[in] MoteurJeu m
	*/
	virtual void modifMotor(MoteurJeu m);
	
};

#endif