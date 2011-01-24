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

	cout<<"AttenteChoixBateauVise.execute()"<<endl;

	// construire à partir de la facade la position
	pair<int,int> posit;
	int x = motor->getFacade()->getX();
	int y = motor->getFacade()->getX();

	cout<<" x courant de la facade : "<<x<<endl;
	cout<<" y courant de la facade : "<<y<<endl;

	if( x!=-1 && y!=-1 ){
			posit = make_pair(x,y);
	}else{
		cout<<"position case visée incorrecte"<<endl;
		return; //C'est que les positions ne sont pas correctes
	}
		
	
	//si le joueur adverse a bien un bateau sur la case cliquée
	int i = motor->getJCourant();
	bool b = false;
	for (int j=0;j<4;j++){
		if(j==i){}
		else{
			if(motor->getJoueurInd(i)->bateauAtPos(posit)) b=true;
		}
	}

	if(b=true){
		motor->modifCourant(ETATTIR);
		motor->execute();
	}else{
		cout<<"Erreur : AttenteChoixBateauVise"<<endl;
	}

}