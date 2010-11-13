/**

*

* \file Carte.cpp

* \brief file of Carte class (function description)

* \author Havez Maxime

* \author Thiveux Gareth

* \date 23/09/10

*

*/



#include "Carte.h"

#include <iostream>

#include <cstdlib>



// Cards constuctor

Carte::Carte(Couleur c, Valeur v, char p):_couleur(c),_valeur(v),_proprio(p){};



// Initialiser les statics !

Carte* Carte::teteN = 0;

Carte* Carte::teteS = 0;

Carte* Carte::queueN = 0;

Carte* Carte::queueS = 0;



Carte* Carte::getNTete() { return teteN;}

Carte* Carte::getNQueue() { return queueN;}

Carte* Carte::getSTete() { return teteS;}

Carte* Carte::getSQueue() { return queueS;}



bool Carte::egale(Carte c) { return _valeur==c.valeur();}



bool Carte::supAbs(Carte c) { return _valeur>c.valeur();}



void Carte::afficher() { std::cout << "Carte courante : \n "<<_valeur<<"de"<<_couleur<<std::endl; }



void Carte::afficherN () {

	Carte* ec = teteN;

	while (ec->_suc != queueN ) {

		ec->afficher();

		ec=ec->_suc;

	}

}



void Carte::afficherS () {

	Carte* ec = teteS;

	while (ec->_suc != queueS ) {

		ec->afficher();

		ec=ec->_suc;

	}

}



void Carte::changerProp() {

	if(_proprio=='N') {

		_proprio='S';

		queueS = this;

		_suc=0;

	}else{

		_proprio='N';

		queueN = this;

		_suc=0;

	}

}



void Carte::passerDerriere() {

	_proprio=='N' ? queueN=this : queueS=this ;

	_suc=0;

}
