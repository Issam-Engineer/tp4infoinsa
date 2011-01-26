/**
*\file CaseCanonNoir.cpp
*\brief File which contains functions and code of the CaseCanonNoir class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
#include "CaseCanonNoir.h"

CaseCanonNoir::CaseCanonNoir(){
	_hauteur = 1;
	_accessible = false;
}

int CaseCanonNoir::getEtat(){
	
	return ATTENTECHOIXBATVISE;	

}
