/**
* \file  AttenteLancerDe.cpp
* \brief File which contains the functions and code of the AttenteLancerDe class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/
#include "StdAfx.h"
#include "AttenteLancerDe.h"
#include "Joueur.h"
//#include "enum.h"

void AttenteLancerDe::execute(){

	if(motor.getFacade()->getClicDe() == true){

		motor.getDe().lancerDe();//Le de contient les deux nouvelle valeurs
		//si le joueur poss�de une caravelle on affiche les deux d� (il peut ensuite choisir)
		if(	motor.getJoueurInd(motor.getJCourant()).getBateau1().type() == 'C' ||
			motor.getJoueurInd(motor.getJCourant()).getBateau2().type() == 'C' ){
				motor.getFacade()->setAfficherDe1(true);
				motor.getFacade()->setAfficherDe2(true);

		}else{
			motor.getFacade()->setAfficherDe1(true);
			motor.getFacade()->setAfficherDe2(false);
		
		}

		motor.modifCourant(ATTENTECHOIXBATEAU);

	}else{//remettre le bool�en qui a chang� � false
	}

}
