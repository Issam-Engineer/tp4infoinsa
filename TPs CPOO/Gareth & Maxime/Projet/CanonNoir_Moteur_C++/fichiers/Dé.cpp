/**
* \file D�.cpp
* \brief File which contains the functions and code of the D� class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/
//#include "StdAfx.h"
#include "D�.h"


void De::lancerDe() {
	srand(time(NULL));
	De::_valeurDe1 = 1 + (int)((double)rand() / ((double)RAND_MAX + 1) * 7); 
	De::_valeurDe2 = 1 + (int)((double)rand() / ((double)RAND_MAX + 1) * 7); 
}