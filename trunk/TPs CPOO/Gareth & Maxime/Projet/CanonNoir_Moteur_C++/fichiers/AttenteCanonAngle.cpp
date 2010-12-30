/**
*\file AttenteCanonAngle.cpp
*\brief File which contains the functions and code of the AttenteCanonAngle class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "AttenteCanonAngle.h"

void AttenteCanonAngle::execute(){
	if(motor.getFacade()->_angle != 0){
		angle = motor.getFacade()->_angle;

		motor.modifCourant(ATTENTECANONPUISSANCE);
	}else{ 
		return;
}