/**
* \file  AttenteLancerDe.cpp
* \brief File which contains the functions and code of the AttenteLancerDe class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/
#include "AttenteLancerDe.h"

void AttenteLancerDe::execute(){

	if(motor.getFacade()->getClicDe() == true){

		motor.getDe().lancerDe();
		//si le joueur poss�de une caravelle on affiche les deux d� (il peut ensuite choisir)
		if(	motor.getJoueurInd(motor.getJCourant()).getBateau1().type() == 'C' ||
			motor.getJoueurInd(motor.getJCourant()).getBateau2().type() == 'C' ){

		}

	}else{//remettre le bool�en qui a chang� � false
	}

}