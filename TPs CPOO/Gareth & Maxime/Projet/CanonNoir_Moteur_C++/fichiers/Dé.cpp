/**
* \file Dé.cpp
* \brief File which contains the functions and code of the Dé class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "Dé.h"


void Dé::lancerDe() {
	srand(time(NULL));
	Dé::valeurDe1 = 1 + (int)((double)rand() / ((double)RAND_MAX + 1) * 7); 
	Dé::valeurDe2 = 1 + (int)((double)rand() / ((double)RAND_MAX + 1) * 7); 
}