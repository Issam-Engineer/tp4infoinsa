#include <string>

using namespace std;

class Etudiant{
public :
	string nom;
	string prenom;
	int annee_de_naissance;
	static int today;
	
	Etudiant();
	Etudiant(string,string,int);
	int Age();

};




