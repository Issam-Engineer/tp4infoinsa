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

int AttentePremLancerDe::resDe[4]={0,0,0,0};
int AttentePremLancerDe::nbLance = 0;

AttentePremLancerDe::AttentePremLancerDe(MoteurJeu* m){
	motor=m;
	cout << "Constructeur : AttentePremLancerDe" << endl;
}

void AttentePremLancerDe::setNbLance(int i){
	nbLance = i;	
}

void AttentePremLancerDe::setResDe(int i){
	resDe[nbLance]=i;	
}



void AttentePremLancerDe::determinerOrdre(){
	//TRIER ORDRE DES JOUEURS
	int i;
	for(i=0;i < motor->getNbJoueurs();i++){
		int max=0;
		int ind;
		int j;
		for(j=0;j < motor->getNbJoueurs();j++){

			if( resDe[j] > max){ 
				max = resDe[j];
				ind = j;
			}
		}
		resDe[ind]=0;
		motor->getJoueurInd(ind)->setNumero(i+1);//On modifie le numéro du joueur !
	}



	for(i=0;i<motor->getNbJoueurs();i++){

		cout<<"Numéro du Joueur a l'indice "<<i<<"="<<motor->getJoueurInd(i)->getNumero()<<endl;

	}
}



void AttentePremLancerDe::execute(){
	cout<<"AttentePremLancerDe.execute()"<<endl;
	//vérifier qu'on a bien cliqué sur le bouton lancer Dé sinon on ne doit rien faire !
	if(motor->getFacade()->getClicDe() == true){

		if(nbLance < motor->getNbJoueurs()){

			motor->getDe()->lancerDe();

			//motor->getFacade()->setValDe1(motor->getDe()->getDe1());
			//motor->getFacade()->setValDe2(motor->getDe()->getDe2());
			//afficher les 2 dés
			motor->getFacade()->setAfficherDe1(true);
			motor->getFacade()->setAfficherDe2(true);

			int res = motor->getDe()->getSommeDe();

			cout<<"nbLance = "<<nbLance<<endl;
			cout<<"motor->getDe().getSommeDe() = "<< res <<endl;
			
			resDe[nbLance]=res;
			nbLance++;
			
			int j;
			for(j=0;j<4;j++){
				cout<<resDe[j]<<endl;
			}

		}
		
		if(nbLance == motor->getNbJoueurs()){
			cout<<"AttentePremLancerDe.determinerOrdre"<<endl;
			determinerOrdre();
			//on passe à l'état suivant
			motor->modifCourant(ATTENTELANCERDE);
			cout<<"Etat suivant :ATTENTELANCERDE"<<endl;
		}

		motor->getFacade()->setClicDe(false); //remettre le booléen à false (pour prochain lancer)
		cout<<"on remet clicDe a false"<<endl;

	}else{
		cout<<"Erreur : AttentePremLancerDe, facade.clicDe n'est pas egal a true"<<endl;
	}
}