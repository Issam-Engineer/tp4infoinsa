/**
*\file Dé.cpp
*\brief File which contains the functions and code of the Dé class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "Dé.h"
#include <iostream>

using namespace std;

De::De(){
	_valeurDe1=0;
	_valeurDe2=0;
}

int Random (int _iMin, int _iMax)
{
	return (_iMin + (rand () % (_iMax-_iMin+1)));
} 

void De::lancerDe() {

	_valeurDe1 = Random(1,6)/*Random(1,6)1 + (int)((double)rand() / ((double)RAND_MAX + 1) * 6)*/; 
	_valeurDe2 = Random(1,6)/*1 + (int)((double)rand() / ((double)RAND_MAX + 1) * 6)*/; 

	cout<<"La valeur des 2 des : _valeurDe1 = "<<_valeurDe1<<" \ _valeurDe2 ="<<_valeurDe2<<endl;
}