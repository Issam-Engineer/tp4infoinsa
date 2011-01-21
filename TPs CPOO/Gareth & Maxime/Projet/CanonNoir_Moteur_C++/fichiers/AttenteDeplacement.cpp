/**
*\file  AttenteDeplacement.cpp
*\brief File containing the functionalities and the attributes of the AttenteDeplacement class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#include "AttenteDeplacement.h"

AttenteDeplacement::AttenteDeplacement(MoteurJeu * m){
	motor=m;
	cout << "Constructeur : AttenteDeplacement" << endl;
}

void AttenteDeplacement::execute(){

	cout<<"AttenteDeplacement.execute()"<<endl;
	int x = motor->getFacade()->getX();
	int y = motor->getFacade()->getY();

	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
}