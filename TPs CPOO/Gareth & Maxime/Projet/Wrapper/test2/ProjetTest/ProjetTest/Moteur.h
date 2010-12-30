#include <cstdlib>
#include <iostream>

using namespace std;
class Moteur{

public :

	int courant;
	
	Moteur(){courant=0;}

	void exec(){
		courant = courant + 3;
		cout<<"courant vaut : "<<courant<<endl;
	}

};
