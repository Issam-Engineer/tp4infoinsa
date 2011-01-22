/**
*\file EtatCanonFin.cpp
*\brief File which contains the functions and code of the EtatCanonFin class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "EtatCanonFin.h"


void EtatCanonFin::execute(){
	motor->modifCourant(ATTENTELANCERDE);
}