/**
* \file  Etat.h
*\brief File which contains the function declarations of the Etat interface
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include <cstdlib>
#include <iostream>

using namespace std;

class Etat 
{
	/**
	* \fn void execute()
	* \brief function which execute the current state
	*/
	virtual void execute(); /*on ne la met pas virtuelle pure ... sinon on ne peut pas instancier un état !*/

};