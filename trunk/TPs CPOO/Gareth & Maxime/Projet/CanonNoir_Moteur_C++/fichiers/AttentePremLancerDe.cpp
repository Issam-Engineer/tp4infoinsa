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
	Joueur temp[4];
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
		temp[i] = (*motor->getJoueurInd(ind));
	}
	//delete motor->getTabJoueurs();
	motor->setTabJoueur(temp);
	int k = 0;

	for(k=0;k<motor->getNbJoueurs();k++){
		cout<<"Joueur : "<< k <<" a pour numéro :"<< motor->getJoueurInd(k)->getNumero()<<endl;
	}

	cout<<"NUMERO DU PREMIER JOUEUR QUI COMMENCE LA PARTIE : "<<motor->getJoueurInd(0)->getNumero()<<endl;
	motor->getFacade()->setInitialisationOK(true);

	
}



void AttentePremLancerDe::execute(){
	srand( time(NULL));
	cout<<"AttentePremLancerDe.execute()"<<endl;
	int k = 0;
	/*for(k=0;k<motor->getNbJoueurs();k++){
		cout<<"Joueur : "<< k <<" a pour numéro :"<< motor->getJoueurInd(k)->getNumero()<<" et pour port"<<endl;
	}*/
	//vérifier qu'on a bien cliqué sur le bouton lancer Dé sinon on ne doit rien faire !
	if(motor->getFacade()->getClicDe() == true){

		if(nbLance < motor->getNbJoueurs()){

			motor->getDe()->lancerDe();

			//afficher les 2 dés
			motor->getFacade()->setAfficherDe1(true);
			motor->getFacade()->setAfficherDe2(true);

			int res = motor->getDe()->getSommeDe();

			/*cout<<"nbLance = "<<nbLance<<endl;
			cout<<"motor->getDe().getSommeDe() = "<< res <<endl;*/
			
			resDe[nbLance]=res;
			nbLance++;
			
			//On change l'indice du joueur courant
			motor->setJCourant((motor->getJCourant() + 1)%(motor->getNbJoueurs()));

		}
		
			

		if(nbLance == motor->getNbJoueurs()){
			cout<<"AttentePremLancerDe.determinerOrdre"<<endl;
			determinerOrdre();

			//on passe à l'état suivant
			motor->modifCourant(ATTENTELANCERDE);
			cout<<"Etat suivant :ATTENTELANCERDE"<<endl;

			int k = 0;
			
		}

		motor->getFacade()->setClicDe(false); //remettre le booléen à false (pour prochain lancer)
		cout<<"on remet clicDe a false"<<endl;

	}else{
		cout<<"Erreur : AttentePremLancerDe, facade.clicDe n'est pas egal a true"<<endl;
	}
}