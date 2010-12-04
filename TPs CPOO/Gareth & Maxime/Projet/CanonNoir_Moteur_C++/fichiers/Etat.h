/**
* \file  Etat.h
* \brief file which contains function of the Etat interface
* \author Havez Maxime
* \author Thiveux Gareth
* \version 1.0
*/

#include <cstdlib>
#include <iostream>

using namespace std;

class Etat 
{
	/**
	* \fn virtual void getEtat() = 0
	* \brief pure virtual function which execute the current state
	*/
	virtual void execute() = 0;

};

