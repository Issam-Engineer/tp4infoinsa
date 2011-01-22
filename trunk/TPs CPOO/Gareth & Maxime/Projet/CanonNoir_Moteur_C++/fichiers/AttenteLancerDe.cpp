/**
* \file  AttenteLancerDe.cpp
* \brief File which contains the functions and code of the AttenteLancerDe class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/
//#include "StdAfx.h"
#include "AttenteLancerDe.h"
#include "Joueur.h"

AttenteLancerDe::AttenteLancerDe(MoteurJeu* m){
	motor=m;
}

void AttenteLancerDe::execute(){

	
	cout<<"AttenteLancerDe.execute()"<<endl;
	cout<<"indice joueur courant :"<<motor->getJCourant()<<" qui correspond au joueur numéro: "<<
		motor->getJoueurInd(0)->getNumero()<<endl;

	if(motor->getFacade()->getClicDe() == true){

		motor->getDe()->lancerDe();//Le de contient les deux nouvelle valeurs
		//si le joueur possède une caravelle on affiche les deux dé (il peut ensuite choisir)
		if(	motor->getJoueurInd(motor->getJCourant())->getBateau1()->type() == 'C' ||
			motor->getJoueurInd(motor->getJCourant())->getBateau2()->type() == 'C' ){
				motor->getFacade()->setAfficherDe1(true);
				motor->getFacade()->setAfficherDe2(true);

		}else{
			motor->getFacade()->setAfficherDe1(true);
			motor->getFacade()->setAfficherDe2(false);
		}

		/*if(motor->getNbJoueurs() == 2){
				motor->getFacade()->setEnableClicDe(false);
				cout<<"Valeur de enableClicDe de facade :"<<motor->getFacade()->getEnableClicDe()<<endl;
				motor->modifCourant(ATTENTECHOIXBATEAU);
				motor->getFacade()->setProposerDeplacement(true);// IL Faudrait plutot un booleen pour le attenteChoixBateau
		}else{*/
				motor->getFacade()->setEnableClicDe(false);
				cout<<"Valeur de enableClicDe de facade :"<<motor->getFacade()->getEnableClicDe()<<endl;
				motor->modifCourant(PROPOSEDEPLACEMENT);
				motor->getFacade()->setProposerDeplacement(true);
		//}
	}
}
