#include <iostream>
#include "Etudiant.h"

using namespace std;

int main(){
	char e;
	cout<< "Essai pour le test"<<endl;
	Etudiant E1 = Etudiant("Philippe","Gaspard",1982);
	cout << "L'étudiant " << E1.prenom << " " << E1.nom << " a " << E1.Age() << " ans." <<endl;
	cin >> e;
}