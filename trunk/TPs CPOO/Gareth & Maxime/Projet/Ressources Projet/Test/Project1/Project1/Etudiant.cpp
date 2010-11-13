#include "Etudiant.h"

int Etudiant::today = 2010;

Etudiant::Etudiant(): nom(""),prenom(""),annee_de_naissance(1981){
	today=2010;
}


Etudiant::Etudiant(string p, string n, int annee): nom(n),prenom(p),annee_de_naissance(annee){
	today=2010;
}

int Etudiant::Age(){
	int temp = Etudiant::today;
	return (temp-annee_de_naissance);
}