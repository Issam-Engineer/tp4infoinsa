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

			int x2 = x_actuel - valde1;
			int y2 = y_actuel;

			int x3 = x_actuel;
			int y3 = y_actuel + valde1;

			int x4 = x_actuel;
			int y4 = y_actuel - valde1;

			int x5 = x_actuel + valde1;
			int y5 = y_actuel + valde1;

			int x6 = x_actuel - valde1;
			int y6 = y_actuel + valde1;

			int x7 = x_actuel + valde1;
			int y7 = y_actuel - valde1;

			int x8 = x_actuel - valde1;
			int y8 = y_actuel - valde1;

			int x9 = x_actuel + valde2;
			int y9 = y_actuel;

			int x10 = x_actuel - valde2;
			int y10 = y_actuel;

			int x11 = x_actuel;
			int y11 = y_actuel + valde2;

			int x12 = x_actuel;
			int y12 = y_actuel - valde2;

			int x13 = x_actuel + valde2;
			int y13 = y_actuel + valde2;

			int x14 = x_actuel - valde2;
			int y14 = y_actuel + valde2;

			int x15 = x_actuel + valde2;
			int y15 = y_actuel - valde2;

			int x16 = x_actuel - valde2;
			int y16 = y_actuel - valde2;

			int x17 = x_actuel + valdede;
			int y17 = y_actuel;

			int x18 = x_actuel - valdede;
			int y18 = y_actuel;

			int x19 = x_actuel;
			int y19 = y_actuel + valdede;

			int x20 = x_actuel;
			int y20 = y_actuel - valdede;

			int x21 = x_actuel + valdede;
			int y21 = y_actuel + valdede;

			int x22 = x_actuel - valdede;
			int y22 = y_actuel + valdede;

			int x23 = x_actuel + valdede;
			int y23 = y_actuel - valdede;

			int x24 = x_actuel - valdede;
			int y24 = y_actuel - valdede;
		}


	motor->modifCourant(ATTENTEDEPLACEMENT);
}