/**
*\file EtatTir.cpp
*\brief File which contains the functions and code of the EtatTir class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "EtatTir.h"
//#include "FenetreTir.h"


void EtatTir::execute(){
	//Si ce n'est pas un Duel (donc un tir via une case Canon Noir), on attend que le joueur choisisse le bateau adversaire à viser (dans le cas de 2 joueurs)
	if(!Duel && motor.getNbJoueurs() == 2){
			motor.modifCourant(ATTENTECHOIXBATVISE);
	}else{ 
		motor.modifCourant(ATTENTECANONANGLE);
		//new FenetreTir();
	}
}

void EtatTir::init(int p,int a){
	puissance=p;
	angle=a;
}