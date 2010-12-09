/**
* \file Plateau.cpp
* \brief File which contains the functions and code of the Plateau class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "Plateau.h"


Plateau::Plateau(){
	_longueur=11;
	_largeur=8;
	_tabCase[0] = new CasePort();
}