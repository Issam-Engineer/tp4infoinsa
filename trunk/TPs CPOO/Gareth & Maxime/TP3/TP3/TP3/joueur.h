// joueur.h



#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>
using namespace std;

class Partie;
class Case;

class Joueur { 
protected :
	Partie * maPartie;
public:
    Joueur(Partie *);
    virtual void jouer();
	virtual void effectuerCoupSurCase(Case * c)=0 ; 
	//classe virtual pure ! -> on ne peut pas l'instancier
	virtual Case * choisirUneCase()=0;
    void afficher();
};

#endif
