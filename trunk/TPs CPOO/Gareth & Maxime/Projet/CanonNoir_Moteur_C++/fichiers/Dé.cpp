/**
* \file D�.cpp
* \brief File which contains the functions and code of the D� class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "D�.h"


void D�::lancerDe() {
	srand(time(NULL));
	D�::valeurDe1 = 1 + (int)((double)rand() / ((double)RAND_MAX + 1) * 7); 
	D�::valeurDe2 = 1 + (int)((double)rand() / ((double)RAND_MAX + 1) * 7); 
}