/**
* \file Plateau.cpp
* \brief File which contains the functions and code of the Plateau class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

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
	_tabCase[1] = new CaseNavigable();
	_tabCase[2] = new CasePort();
	_tabCase[3] = new CasePort();
	_tabCase[4] = new CasePort();
	_tabCase[5] = new CasePort();
	_tabCase[6] = new CasePort();
	_tabCase[7] = new CasePort();
	_tabCase[8] = new CasePort();
	_tabCase[9] = new CasePort();
	_tabCase[10] = new CasePort();
	//LIGNE 2
	_tabCase[11] = new CasePort();
	_tabCase[12] = new CasePort();
	_tabCase[13] = new CasePort();
	_tabCase[14] = new CasePort();
	_tabCase[15] = new CasePort();
	_tabCase[16] = new CasePort();
	_tabCase[17] = new CasePort();
	_tabCase[18] = new CasePort();
	_tabCase[19] = new CasePort();
	_tabCase[20] = new CasePort();
	_tabCase[21] = new CasePort();
	//LIGNE 3
	_tabCase[22] = new CasePort();
	_tabCase[23] = new CasePort();
	_tabCase[24] = new CasePort();
	_tabCase[25] = new CasePort();
	_tabCase[26] = new CasePort();
	_tabCase[27] = new CasePort();
	_tabCase[28] = new CasePort();
	_tabCase[29] = new CasePort();
	_tabCase[30] = new CasePort();
	_tabCase[31] = new CasePort();
	_tabCase[32] = new CasePort();
	//LIGNE 4
	_tabCase[33] = new CasePort();
	_tabCase[34] = new CasePort();
	_tabCase[35] = new CasePort();
	_tabCase[36] = new CasePort();
	_tabCase[37] = new CasePort();
	_tabCase[38] = new CasePort();
	_tabCase[39] = new CasePort();
	_tabCase[40] = new CasePort();
	_tabCase[41] = new CasePort();
	_tabCase[42] = new CasePort();
	_tabCase[43] = new CasePort();
	//LIGNE 5
	_tabCase[44] = new CasePort();
	_tabCase[45] = new CasePort();
	_tabCase[46] = new CasePort();
	_tabCase[47] = new CasePort();
	_tabCase[48] = new CasePort();
	_tabCase[49] = new CasePort();
	_tabCase[50] = new CasePort();
	_tabCase[51] = new CasePort();
	_tabCase[52] = new CasePort();
	_tabCase[53] = new CasePort();
	_tabCase[54] = new CasePort();
	//LIGNE 6
	_tabCase[55] = new CasePort();
	_tabCase[56] = new CasePort();
	_tabCase[57] = new CasePort();
	_tabCase[58] = new CasePort();
	_tabCase[59] = new CasePort();
	_tabCase[60] = new CasePort();
	_tabCase[61] = new CasePort();
	_tabCase[62] = new CasePort();
	_tabCase[63] = new CasePort();
	_tabCase[64] = new CasePort();
	_tabCase[65] = new CasePort();
	//LIGNE 7
	_tabCase[66] = new CasePort();
	_tabCase[67] = new CasePort();
	_tabCase[68] = new CasePort();
	_tabCase[69] = new CasePort();
	_tabCase[70] = new CasePort();
	_tabCase[71] = new CasePort();
	_tabCase[72] = new CasePort();
	_tabCase[73] = new CasePort();
	_tabCase[74] = new CasePort();
	_tabCase[75] = new CasePort();
	_tabCase[76] = new CasePort();
	//LIGNE 8
	_tabCase[77] = new CasePort();
	_tabCase[78] = new CasePort();
	_tabCase[79] = new CasePort();
	_tabCase[80] = new CasePort();
	_tabCase[81] = new CasePort();
	_tabCase[82] = new CasePort();
	_tabCase[83] = new CasePort();
	_tabCase[84] = new CasePort();
	_tabCase[85] = new CasePort();
	_tabCase[86] = new CasePort();
	_tabCase[87] = new CasePort();
}