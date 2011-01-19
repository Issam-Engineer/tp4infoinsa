/**
*\file  ProposeDeplacement.cpp
*\brief File containing the functionalities and the attributes of the ProposeDeplacement class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

//#include "StdAfx.h"
#include "ProposeDeplacement.h"
#include "Joueur.h"

ProposeDeplacement::ProposeDeplacement(MoteurJeu* m){
	motor=m;
	cout << "Constructeur : ProposeDeplacement" << endl;
}

void ProposeDeplacement::execute(){

	//Rendre les cases accessibles

	//Cas d'une caravelle
	if(motor->getNbJoueurs()==4 || motor->getNbJoueurs()==3){
		if(motor->getJoueurInd(motor->getJCourant())->getBateau1().type() == 'C'){

			int valde1 = motor->getDe()->getDe1();
			int valde2 = motor->getDe()->getDe2();
			int valdede = motor->getDe()->getSommeDe();

			pair<int,int> posit = motor->getJoueurInd(motor->getJCourant())->getBateau1().getPosition()->getPosition();

			int x_actuel = posit.first;
			int y_actuel = posit.second;

			int x1 = x_actuel + valde1;
			int y1 = y_actuel;

			int x2 = x_actuel;
			int y2= y_actuel + valde1;

			int x3 = x_actuel - valde1;
			int y3 = y_actuel;

			int x4 = x_actuel;
			int y4  = y_actuel - valde1;

			int x5;
			int y5;

			int x6;
			int y6;

			int x7;
			int y7;

			int x8;
			int y8;

			int x9;
			int y9;

			int x10;
			int y10;

			int x11;
			int y11;

			int x12;
			int y12;

			int x13;
			int y13;
		}


	motor->modifCourant(ATTENTEDEPLACEMENT);
}