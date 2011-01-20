/**
*\file CaseCanonNoir.cpp
*\brief file which contains functions and code of the CaseCanonNoir class
*\author Havez Maxime
*\author Thiveux Gareth
*\version 1.0
*/
//#include "StdAfx.h"
#include "CaseCanonNoir.h"

CaseCanonNoir::CaseCanonNoir(){
	_hauteur = 2;
	_accessible = false;
}

int CaseCanonNoir::getEtat(){
	/*int et;
	if(motor.getNbJoueurs()==2){
	 	et = 4;
	 }else{ et = 8; }
		return et;*/
	return 4;
}
