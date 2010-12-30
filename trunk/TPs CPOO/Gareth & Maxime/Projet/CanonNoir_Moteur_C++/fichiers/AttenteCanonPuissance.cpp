/**
*\file AttenteCanonPuissance.cpp
*\brief File which contains the functions and code of the AttenteCanonPuissance class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "AttenteCanonPuissance.h"

void AttenteCanonPuissance::execute(){
	if(motor.getFacade()->_puissance != 0){
		puissance = motor.getFacade()->_puissance;

		motor.modifCourant(ETATCANONFIN));
	}else{ 
		return;
}