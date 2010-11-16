#include "hashtable.h"
#include <iostream>
#include <string>

using namespace std;

int main() {


	//Tester l'affichage des éléments
	Elem<string,int> e1("maxime",1205);
	Elem<string,int> e2("margaux",3105);
	Elem<string,int> e3("sonia",1410);
	Elem<string,int> e4("loic",1408);

	std::cout<<e1<<std::endl;

	//Tester la Hashtable
	Hashtable<string,int,Hash_func,Comparator> HashT;



	return 0;
}