/**
* \file Case.cpp
* \brief File which contains the functions and code of the Case class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/
//#include "StdAfx.h"
#include "Case.h"


Case::Case(){
	_position= make_pair(0,0);
	_accessible = false;
	_hauteur = 0;
}

int Case::getCouleur(){
	return 0;
}

int Case::getNbTresors(){
	return 0;
}

void Case::setNbTresors(int n){
}

void Case::setPosition(pair<int,int> p){
	_position=p;
}