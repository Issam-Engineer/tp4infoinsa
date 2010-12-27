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



	motor.modifCourant(ATTENTECANONPUISSANCE);
}