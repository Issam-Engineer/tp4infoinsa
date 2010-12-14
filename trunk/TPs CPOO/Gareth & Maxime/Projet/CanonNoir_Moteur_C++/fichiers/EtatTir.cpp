/**
*\file EtatTir.cpp
*\brief File which contains the functions and code of the EtatTir class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "EtatTir.h"
#include "FenetreTir.h"


void EtatTir::execute(){
	if(!Duel) motor.modifCourant(ATTENTECHOIXBATEAU);
	else{ 
		motor.modifCourant(ATTENTECANONANGLE);
		new FenetreTir();
	}
}