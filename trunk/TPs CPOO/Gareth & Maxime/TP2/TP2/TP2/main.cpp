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

std::ostream& operator<< (std::ostream& os, const Chaine& c) {
	int i=0;
	for (i=0;i<c.taille();i++){
		os <<c.charInd(i);
	}
	return os;
}

int main() {

Chaine * ch1 = new Chaine("c");

Chaine * ch2 = new Chaine("o");

*ch1 += "putain ça marche";

*ch1 += * ch2;

Chaine * ch3;

Chaine * test = new Chaine("encule");

//std::cin >> *ch3;

std::cout << *test ;

std::cout << (*ch2 == *ch3) << std::endl;

}