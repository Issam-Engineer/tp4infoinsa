// joueur.cpp

#include "joueur.h"



Joueur::Joueur(Partie * p) {
  maPartie = p;
}



void Joueur::jouer() {

}


void Joueur::afficher() {

  cout << " ma Partie = ";
  if (maPartie) cout << maPartie << endl;
  else cout << " null..." << endl;
}

