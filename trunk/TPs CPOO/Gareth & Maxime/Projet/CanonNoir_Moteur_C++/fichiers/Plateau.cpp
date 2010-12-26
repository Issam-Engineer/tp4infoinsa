/**
* \file Plateau.cpp
* \brief File which contains the functions and code of the Plateau class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/
#include "StdAfx.h"
#include "Plateau.h"
#include "CaseBordurePlateau.h"
#include "CaseCanonNoir.h"
#include "CaseContourIle.h"
#include "CaseIle.h"
#include "CaseNavigable.h"
#include "CasePort.h"
#include "CaseTresor.h"


Plateau::Plateau(){
	_longueur=11;
	_largeur=8;
	//LIGNE 1
	_tabCase[0] = new CasePort();//constructeur de case avec pair<int,int>
	_tabCase[1] = new CaseBordurePlateau();
	_tabCase[2] = new CaseBordurePlateau();
	_tabCase[3] = new CaseBordurePlateau();
	_tabCase[4] = new CaseBordurePlateau();
	_tabCase[5] = new CaseBordurePlateau();
	_tabCase[6] = new CaseBordurePlateau();
	_tabCase[7] = new CaseBordurePlateau();
	_tabCase[8] = new CaseBordurePlateau();
	_tabCase[9] = new CaseBordurePlateau();
	_tabCase[10] = new CasePort();
	//LIGNE 2
	_tabCase[11] = new CaseBordurePlateau();
	_tabCase[12] = new CaseNavigable();
	_tabCase[13] = new CaseContourIle();
	_tabCase[14] = new CaseContourIle();
	_tabCase[15] = new CaseNavigable();
	_tabCase[16] = new CaseNavigable();
	_tabCase[17] = new CaseNavigable();
	_tabCase[18] = new CaseCanonNoir();
	_tabCase[19] = new CaseContourIle();
	_tabCase[20] = new CaseNavigable();
	_tabCase[21] = new CaseBordurePlateau();
	//LIGNE 3
	_tabCase[22] = new CaseBordurePlateau();
	_tabCase[23] = new CaseContourIle();
	_tabCase[24] = new CaseIle();
	_tabCase[25] = new CaseIle();
	_tabCase[26] = new CaseTresor();
	_tabCase[27] = new CaseNavigable();
	_tabCase[28] = new CaseContourIle();
	_tabCase[29] = new CaseIle();
	_tabCase[30] = new CaseIle();
	_tabCase[31] = new CaseContourIle();
	_tabCase[32] = new CaseBordurePlateau();
	//LIGNE 4
	_tabCase[33] = new CaseBordurePlateau();
	_tabCase[34] = new CaseContourIle();
	_tabCase[35] = new CaseIle();
	_tabCase[36] = new CaseIle();
	_tabCase[37] = new CaseNavigable();
	_tabCase[38] = new CaseNavigable();
	_tabCase[39] = new CaseTresor();
	_tabCase[40] = new CaseIle();
	_tabCase[41] = new CaseIle();
	_tabCase[42] = new CaseContourIle();
	_tabCase[43] = new CaseBordurePlateau();
	//LIGNE 5
	_tabCase[44] = new CaseBordurePlateau();
	_tabCase[45] = new CaseCanonNoir();
	_tabCase[46] = new CaseIle();
	_tabCase[47] = new CaseIle();
	_tabCase[48] = new CaseNavigable();
	_tabCase[49] = new CaseNavigable();
	_tabCase[50] = new CaseContourIle();
	_tabCase[51] = new CaseIle();
	_tabCase[52] = new CaseIle();
	_tabCase[53] = new CaseCanonNoir();
	_tabCase[54] = new CaseBordurePlateau();
	//LIGNE 6
	_tabCase[55] = new CaseBordurePlateau();
	_tabCase[56] = new CaseNavigable();
	_tabCase[57] = new CaseIle();
	_tabCase[58] = new CaseIle();
	_tabCase[59] = new CaseTresor();
	_tabCase[60] = new CaseNavigable();
	_tabCase[61] = new CaseContourIle();
	_tabCase[62] = new CaseIle();
	_tabCase[63] = new CaseIle();
	_tabCase[64] = new CaseContourIle();
	_tabCase[65] = new CaseBordurePlateau();
	//LIGNE 7
	_tabCase[66] = new CaseBordurePlateau();
	_tabCase[67] = new CaseContourIle();
	_tabCase[68] = new CaseContourIle();
	_tabCase[69] = new CaseCanonNoir();
	_tabCase[70] = new CaseContourIle();
	_tabCase[71] = new CaseNavigable();
	_tabCase[72] = new CaseTresor();
	_tabCase[73] = new CaseNavigable();
	_tabCase[74] = new CaseNavigable();
	_tabCase[75] = new CaseNavigable();
	_tabCase[76] = new CaseBordurePlateau();
	//LIGNE 8
	_tabCase[77] = new CasePort();
	_tabCase[78] = new CaseBordurePlateau();
	_tabCase[79] = new CaseBordurePlateau();
	_tabCase[80] = new CaseBordurePlateau();
	_tabCase[81] = new CaseBordurePlateau();
	_tabCase[82] = new CaseBordurePlateau();
	_tabCase[83] = new CaseBordurePlateau();
	_tabCase[84] = new CaseBordurePlateau();
	_tabCase[85] = new CaseBordurePlateau();
	_tabCase[86] = new CaseBordurePlateau();
	_tabCase[87] = new CasePort();
}

Case* Plateau::getCasePort(int couleur) {
	Case* cp;
	for(int i=0; i<((_longueur*_largeur)-1); i++){
			if(_tabCase[i]->getCouleur() == couleur){ // il faut définir une fonction getCouleur pour les Case et utiliser l'héritage
				cp = _tabCase[i]; // /!\ au cast
			}
		}
		return cp;
}