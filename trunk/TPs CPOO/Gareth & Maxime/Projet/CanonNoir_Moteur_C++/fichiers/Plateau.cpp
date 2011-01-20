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
	_tabCase.push_back(new CasePort(1/*ROUGE*/));
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CasePort(3/*JAUNE*/));
	//LIGNE 2
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseCanonNoir());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseBordurePlateau());
	//LIGNE 3
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseTresor());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseBordurePlateau());
	//LIGNE 4
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseTresor());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseBordurePlateau());
	//LIGNE 5
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseCanonNoir());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseCanonNoir());
	_tabCase.push_back(new CaseBordurePlateau());
	//LIGNE 6
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseTresor());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseIle());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseBordurePlateau());
	//LIGNE 7
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseCanonNoir());
	_tabCase.push_back(new CaseContourIle());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseTresor());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseNavigable());
	_tabCase.push_back(new CaseBordurePlateau());
	//LIGNE 8
	_tabCase.push_back(new CasePort(2/*VERT*/));
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CaseBordurePlateau());
	_tabCase.push_back(new CasePort(3/*JAUNE*/));


	for(int i=0;i<88;i++){
		if(i<11) //on est dans la première ligne
			_tabCase[i]->setPosition(make_pair(i + 1,1));
		else if(i>=11 && i<22)
			_tabCase[i]->setPosition(make_pair(i - 11 +1,2));
		else if(i>=22 && i<33)
			_tabCase[i]->setPosition(make_pair(i - 22 +1,3));
		else if(i>=33 && i<44)
			_tabCase[i]->setPosition(make_pair(i - 33 +1,4));
		else if(i>=44 && i<55)
			_tabCase[i]->setPosition(make_pair(i - 44 +1,5));
		else if(i>=55 && i<66)
			_tabCase[i]->setPosition(make_pair(i - 55 +1,6));
		else if(i>=66 && i<77)
			_tabCase[i]->setPosition(make_pair(i - 66 +1,7));
		else if(i>=77 && i<88)
			_tabCase[i]->setPosition(make_pair(i - 77 +1,8));
	}
}

Case* Plateau::getCasePort(int couleur) {
	Case* cp=0;
	for(int i=0; i<((_longueur*_largeur)-1); i++){
			if(_tabCase[i]->getCouleur() == couleur){ // il faut définir une fonction getCouleur pour les Case et utiliser l'héritage
				cp = _tabCase[i]; // /!\ au cast
			}
		}
		return cp;
}

Case* Plateau::getCase(pair<int,int> p){
	Case* cp=0;
	for(int i=0; i<((_longueur*_largeur)-1); i++){
		if(_tabCase[i]->getPosition() == p) {
			cp=_tabCase[i];
		}
	}
	return cp;
}


bool Plateau::estAccessible(pair<int,int> p){
	return getCase(p)->estAccessible();
}

void Plateau::setAccessible(pair<int,int> p){
	getCase(p)->setAccessible();
}


