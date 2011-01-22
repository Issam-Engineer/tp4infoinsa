/**
*\file  AttenteChoixBateau.h
*\brief File containing the functionalities and the attributes of the AttenteChoixBateau class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "AttenteChoixBateau.h"
#include "Joueur.h"

AttenteChoixBateau::AttenteChoixBateau(MoteurJeu * m){
	motor=m;
	cout << "Constructeur : AttenteChoixBateau" << endl;
}

void AttenteChoixBateau::execute(){

	cout<<"AttenteChoixBateau.execute()"<<endl;
	pair<int,int> posit; 
	int x= motor->getFacade()->getX();
	int y=  motor->getFacade()->getY();

	if( x!=-1 && y!=-1 ){
			posit = make_pair(x,y);
	}else{
		cout<<"Position x et y =-1"<<endl; //C'est que les positions ne sont pas correctes
	}

	//2 Joueurs
	if(motor->getNbJoueurs() == 2){

		//si le joueur a bien un bateau sur la case cliquée
		if( motor->getJoueurInd(motor->getJCourant())->bateauAtPos(posit)){

			//On indique quel bateau est le courant grâce au booléen courant de bateau, qui est à false lors de l'initialisation (quand il y a 2 joueurs)
			motor->getJoueurInd(motor->getJCourant())->getBateauPos(posit)->setCourant(true);
			motor->modifCourant(PROPOSEDEPLACEMENT);
	
		}else{
			
			cout<<"ERREUR : AttenteChoixBateau il faut cliquer sur un des bateaux"<<endl;

		}
	}

}
