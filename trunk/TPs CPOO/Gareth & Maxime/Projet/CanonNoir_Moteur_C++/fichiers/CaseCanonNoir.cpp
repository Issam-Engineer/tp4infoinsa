/**
*\file CaseCanonNoir.cpp
*\brief file which contains functions and code of the CaseCanonNoir class
*\author Havez Maxime
*\author Thiveux Gareth
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
