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
	motor->modifCourant(ATTENTEDEPLACEMENT);
}