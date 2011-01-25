/**
*\file EtatCanonFin.cpp
*\brief File which contains the functions and code of the EtatCanonFin class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
#include "EtatCanonFin.h"


EtatCanonFin::EtatCanonFin(MoteurJeu * m){
	motor=m;
	init(0,0);
}

void EtatCanonFin::execute(){
	cout<<"EtatTCanonFin.execute()"<<endl;

	motor->modifCourant(ATTENTELANCERDE);
}