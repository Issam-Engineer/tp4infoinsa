// ange.cpp

#include "ange.h"
#include "partie.h"



Ange::Ange(Partie * pa, int pui) : Joueur(pa) {
  puissance = pui;
}

bool Ange::jeSuisBloque() {
  bool uneCaseLibre = false;
  int t = maPartie->monDamier->taille;
  int i, j;
  for (i=0; i<t; i++) {
    for (j=0; j<t; j++) {
      Case * c = maPartie->monDamier->mesCases[i][j];
      if ( maCase->distance(c) <= puissance )
	if (!(c->estBouchee()) && (!c->estAnge())) uneCaseLibre = true;
    }
  }
  return !uneCaseLibre;
}

bool Ange::jeSuisLibre() {
  if ((maCase->getX()==0) || (maCase->getY()==0)) return true;
  int t = maPartie->monDamier->taille;
  if ((maCase->getX()==t-1) || (maCase->getY()==t-1)) return true;
  return false;
}

void Ange::afficher() {
  Joueur::afficher();
  cout << " puissance = " << puissance << endl;
  cout << " ma Case = ";
  if (maCase) cout << maCase << endl;
  else cout << " null..." << endl;
}

void Ange::effectuerCoupSurCase(Case * c) {
  maCase->setAnge(NULL);
  maCase = maPartie->monDamier->mesCases[c->getX()][c->getY()];
  maPartie->monDamier->mesCases[c->getX()][c->getY()]->setAnge(this);
}

bool Ange::caseInaccessible(Case * c) {
	bool ok=false;
	if (c->distance(maCase) > puissance){
		cout << "Erreur: case inaccessible." << endl;
		ok= true;
	}
	return ok;
}