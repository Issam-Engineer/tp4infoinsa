/**
*
* \file main.cpp
* \brief Main class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \date 30/09/10
*
*/


#include "chaine.h"
#include <iostream>
#include <cstdlib>

using namespace std;

ostream& operator<< (ostream& os, const Chaine& c) {
	int i=0;
	for (i=0;i<c.taille();i++){
		os <<c.charInd(i);
	}
	return os;
}

int main() {

Chaine * test = new Chaine("fonctionne");
cout << *test ;
Chaine * ch1 = new Chaine("c");
Chaine * ch2 = new Chaine("o");

std::cout << (*ch2 == *ch1) << std::endl;

//*ch1 += "on me voit !";

//*ch1 += * ch2;

//Chaine * ch3;

//std::cin >> *ch3;

}

/*
Résultats du main :
CONSTRUCTEUR : Chaine constituee d'un tableau de char !
fonctionne

Le message "L'application TP2.exe a cessé de fonctionner" apparait. Impossible d'aller plus loin dans l'execution de notre main ...
Notre constructeur à partir d'un tableau de char semble fonctionner.
Nous n'avons autrement pas réussi à surcharger l'opérateur >>
*/
