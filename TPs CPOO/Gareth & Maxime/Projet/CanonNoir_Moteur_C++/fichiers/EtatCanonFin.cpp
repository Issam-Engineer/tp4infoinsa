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

	angle = motor->getFacade()->getAngle();
	puissance = motor->getFacade()->getPuissance();

	bool touche = tir();

	if(touche){

		cout<<"TOUCHE"<<endl;
		
	}else{

		cout<<"RATE"<<endl;

	}

	motor->setJCourant(motor->getJCourant()+1);
	motor->modifCourant(ATTENTELANCERDE);
}



// SIMULE LE TIR !
int Random2 (int _iMin, int _iMax)
{
	return (_iMin + (rand () % (_iMax-_iMin+1)));
} 

bool EtatCanonFin::tir(){
	int tir = Random2(0,1);
	if(tir=0)
		return true;
	else 
		return false;
}
