/**
*\file  ProposeDeplacement.h
*\brief File containing the functionalities and the attributes of the ProposeDeplacement class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "ProposeDeplacement.h"

void ProposeDeplacement::execute(){

	//On regarde la valeur du ou des dés
	if( motor.getFacade()->getChoixDe1() ){
		_valeurDe = motor.getDe().getDe1();
	}else if( motor.getFacade()->getChoixDe2() ){
		_valeurDe = motor.getDe().getDe2();
	}else if( motor.getFacade()->getChoix2De() ){
		_valeurDe = motor.getDe().getSommeDe();
	}else{
		cout<<"ERREUR : Choix de dé mal géré"<<endl;
	}

	//On récupère la position du BATEAU COURANT !
	pair<int,int> temp = motor.getJoueurInd(motor.getJCourant()).getBateauCourant().getPosition()->getPosition();
	int x = temp.first; 
	int y = temp.second;


	//POUR le moment on vérifie juste que ça ne sort pas des limites du plateau !!!

	//Proposition 1 : déplacement vers la gauche
	int x1;
	if( (x1=x-_valeurDe) > 0 ){
		motor.getFacade()->setx1(x1);
		motor.getFacade()->sety1(y);
	}else{
		motor.getFacade()->setx1(0);
		motor.getFacade()->sety1(0);
	}
	//Proposition 2 : déplacement vers la droite
	int x2;
	if( (x2=x+_valeurDe) < 11 ){
		motor.getFacade()->setx2(x2);
		motor.getFacade()->sety2(y);
	}else{
		motor.getFacade()->setx2(0);
		motor.getFacade()->sety2(0);
	}
	//Proposition 3 : déplacement vers le haut
	int y3;
	if( (y3=y-_valeurDe) > 0 ){
		motor.getFacade()->setx3(x);
		motor.getFacade()->sety3(y3);
	}else{
		motor.getFacade()->setx3(0);
		motor.getFacade()->sety3(0);
	}
	//Proposition 4 : déplacement vers le bas
	int y4;
	if( (y4=y+_valeurDe) < 8 ){
		motor.getFacade()->setx4(x);
		motor.getFacade()->sety4(y4);
	}else{
		motor.getFacade()->setx4(0);
		motor.getFacade()->sety4(0);
	}
	//Proposition 5 : déplacement diagonale haute-gauche
	int x5;
	int y5;
	//Proposition 6 : déplacement diagonale haute-droite
	int x6;
	int y6;
	//Proposition 7 : déplacement diagonale bas-droite
	int x7;
	int y7;
	//Proposition 8 : déplacement diagonale bas-gauche
	int x8;
	int y8;


}