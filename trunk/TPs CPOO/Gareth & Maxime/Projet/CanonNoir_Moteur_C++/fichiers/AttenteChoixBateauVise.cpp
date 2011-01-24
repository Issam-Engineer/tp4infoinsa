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
	// construire � partir de la facade la position
	pair<int,int> posit;
	int x = motor->getFacade()->getX();
	int y = motor->getFacade()->getX();

	if( x!=-1 && y!=-1 ){
			posit = make_pair(x,y);
	}else{
		cout<<"position case vis�e incorrecte"<<endl;
		return; //C'est que les positions ne sont pas correctes
	}
		
	
	//si le joueur adverse a bien un bateau sur la case cliqu�e
	if(motor->getJoueurCourant()->bateauAtPos(posit))
		motor->modifCourant(ETATTIR);
	else 
		cout<<"Erreur : AttenteChoixBateauVise"<<endl;

}