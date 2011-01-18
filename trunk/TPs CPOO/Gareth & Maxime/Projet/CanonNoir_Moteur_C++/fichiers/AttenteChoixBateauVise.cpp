/**
*\file  AttenteChoixBateauVise.h
*\brief File containing the functionalities and the attributes of the AttenteChoixBateauVise class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "AttenteChoixBateauVise.h"
#include "Joueur.h"

AttenteChoixBateauVise::AttenteChoixBateauVise(MoteurJeu* m){
	motor=m;
}

void AttenteChoixBateauVise::execute(){
	// construire à partir de la facade la position
	pair<int,int> posit; 
	int x= motor->getFacade()->getX();
	int y=  motor->getFacade()->getY();

	if( x!=-1 && y!=-1 ){
			posit = make_pair(x,y);
	}else{
		return; //C'est que les positions ne sont pas correctes
	}
		//on détermine le premier indice dans le tableau du joueur adverse en fonction de l'indice du joueur courant (sachant qu'on a que 2 joueurs)
		int indJAdv;
		if(motor->getJoueurInd(motor->getJCourant())->getNumero() == 0) indJAdv = 1;
		else indJAdv = 0;
		//si le joueur adverse a bien un bateau sur la case cliquée
		if(motor->getJoueurInd(indJAdv)->bateauAtPos(posit) || motor->getJoueurInd(indJAdv+2)->bateauAtPos(posit)){
			//on oriente le tir depuis le canon dans la direction du bateau visé (à coder)

		motor->modifCourant(ATTENTECANONANGLE);

	}else{
		return;
	}
	//afin de pouvoir renouveler le test sur la valeur de X et de Y
	motor->getFacade()->setX(-1);
	motor->getFacade()->setY(-1);
}