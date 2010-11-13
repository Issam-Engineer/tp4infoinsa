// diable.cpp

#include "diable.h"
#include "partie.h"

Diable::Diable(Partie * p) : Joueur(p) {
}


void Diable::afficher() {
  Joueur::afficher();
}


