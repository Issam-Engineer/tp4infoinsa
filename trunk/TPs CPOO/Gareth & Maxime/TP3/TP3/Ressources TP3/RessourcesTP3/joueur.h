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
    void afficher();
};

#endif
