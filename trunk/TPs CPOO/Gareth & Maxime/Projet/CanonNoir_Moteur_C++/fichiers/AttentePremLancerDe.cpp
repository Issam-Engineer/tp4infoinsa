/**
* \file  AttentePremLancerDe.cpp
* \brief File which contains the functions and code of the AttentePremLancerDe class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/
//#include "StdAfx.h"
#include "AttentePremLancerDe.h"
#include "Joueur.h"

void AttentePremLancerDe::setNbLance(int i){
	nbLance = i;	
}
void AttentePremLancerDe::setResDe(int i){
	resDe[nbLance]=i;	
}


void AttentePremLancerDe::determinerOrdre(){
	//TRIER ORDRE DES JOUEURS
	Joueur temp[4];
	for(int i=0;i<motor.getNbJoueurs();i++){
		int max=0;
		int ind;
		for(int j=0;i<motor.getNbJoueurs();j++){
			if(resDe[j]>max){ max=resDe[j];ind=j;}
		}
		resDe[ind]=0;
		motor.getJoueurInd(i).setNumero(i);//On modifie le num�ro du joueur !
		temp[i] = motor.getJoueurInd(i);
	}
	motor.setTabJoueur(temp);
}

void AttentePremLancerDe::execute(){
	//v�rifier qu'on a bien cliqu� sur le bouton lancer D� sinon on ne doit rien faire !
	if(motor.getFacade()->getClicDe() ==true){

		if(nbLance < motor.getNbJoueurs()){
			motor.getDe().lancerDe();
			//afficher les 2 d�s
			motor.getFacade()->setAfficherDe1(true);
			motor.getFacade()->setAfficherDe2(true);
			int res = motor.getDe().getSommeDe();
			resDe[nbLance]=res;
			nbLance++;
			//griser les 2 d�s
			motor.getFacade()->setAfficherDe1(false);
			motor.getFacade()->setAfficherDe2(false);
		}
		if(nbLance == motor.getNbJoueurs()){
			determinerOrdre();
			//on passe � l'�tat suivant
			motor.modifCourant(ATTENTELANCERDE);
		}

		motor.getFacade()->setClicDe(false); //remettre le boul�en � false (pour prochain lanc�)

	}else{//remettre le bool�en qui vient de changer � false ???
	}
}