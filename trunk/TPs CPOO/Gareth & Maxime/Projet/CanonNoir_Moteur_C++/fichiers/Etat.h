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
protected:
	MoteurJeu* motor;

public:
	/**
	*\fn void execute()
	*\brief function which execute the current state
	*/
	virtual void execute()=0;
	/**
	*\fn void modifMotor(MoteurJeu m)
	*\brief function which changes the current motor
	*\param[in] MoteurJeu m
	*/
	virtual void modifMotor(MoteurJeu *m);
	
};

/*inline void Etat::execute(){
	//NE FAIS RIEN (on est obligé de mettre la définir pour l'édition des liens)
}*/
#endif