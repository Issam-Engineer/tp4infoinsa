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


	cout<<"le x de la facade ="<<x<<" et le y="<<y<<endl;
	if( x!=-1 && y!=-1 ){
			posit = make_pair(x,y);
	}else{
		cout<<"Position x=-1 et y=-1"<<endl; //C'est que les positions ne sont pas correctes
	}

		
	//si le joueur a bien un bateau sur la case cliquée
	if( motor->getJoueurInd(motor->getJCourant())->bateauAtPos(posit)){

		//On indique quel bateau est le courant grâce au booléen courant de bateau
		motor->getJoueurInd(motor->getJCourant())->getBateauPos(posit)->setCourant(true);
		motor->modifCourant(PROPOSEDEPLACEMENT);
		motor->getFacade()->setChoixBateau(false);
		cout<<"Etape de seléction du bateau courant OK"<<endl;
		//motor->getFacade()->execute();
	}else{
			
		cout<<"ERREUR : AttenteChoixBateau il faut cliquer sur un des bateaux"<<endl;

	}
}


