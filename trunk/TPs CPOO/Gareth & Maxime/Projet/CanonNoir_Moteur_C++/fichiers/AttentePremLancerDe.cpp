/**
* \file  AttentePremLancerDe.cpp
* \brief File which contains the functions and code of the AttentePremLancerDe class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "AttentePremLancerDe.h"

void AttentePremLancerDe::setNbLance(int i){
	nbLance = i;	
}
void AttentePremLancerDe::setResDe(int i){
	resDe[nbLance]=i;	
}


void AttentePremLancerDe::determinerOrdre(){
	//TRIER ORDRE DES JOUEURS
	Joueur* temp;
	for(int i=0;i<motor.getNbJoueurs();i++){
		int max=0;
		int ind;
		for(int j=0;i<motor.getNbJoueurs();j++){
			if(resDe[j]>max){ max=resDe[j];ind=j;}
		}
		temp[i]=motor.getJoueurInd(j);
	}
	motor.setTabJoueur(temp);
}

void AttentePremLancerDe::execute(){
	if(nbLance < motor.getNbJoueurs()){
		motor.getDe().lancerDe();
		int res = motor.getDe().getSommeDe();
		resDe[nbLance]=res;
		nbLance++;
	}else{
		determinerOrdre();
		motor.modifCourant(ATTENTELANCERDE);
	}
}