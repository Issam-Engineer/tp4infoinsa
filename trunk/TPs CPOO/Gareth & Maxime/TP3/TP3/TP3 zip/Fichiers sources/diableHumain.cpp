// diableHumain.cpp

#include "diableHumain.h"
#include "partie.h"



DiableHumain::DiableHumain(Partie * p) : 
Diable(p)
{}

void DiableHumain::afficherPrompt() {
  cout << "Diable > ";
}

/*void DiableHumain::jouer(){
	cout << "Joueur::jouer(): debut:" << endl;
	Case * c = choisirUneCase();
	effectuerCoupSurCase(c);
	cout << "Joueur::jouer(): fin." << endl;
}*/

Case * DiableHumain::choisirUneCase() {
	int x, y;
	bool ok;
	Case * c;
	// l�utilisateur choisit un coup
	do {
	// l�utilisateur tape un coup
		cout << "Diable > x ? ";
		cin >> x;
		cout << "Diable > y ? ";
		cin >> y;
		// le programme verifie le coup
		if (ok=verifier(x,y)) c = maPartie->monDamier->mesCases[x-1][y-1];
	} while (!ok);
	return c;
}

/*void DiableHumain::effectuerCoupSurCase(Case * c) {
  maPartie->monDamier->mesCases[c->getX()][c->getY()]->setBouchee(true);
}*/

bool DiableHumain::verifier(int x,int y){
	bool ok=true;
	Case * c;
	if ((x>0) && (y>0) &&
		(x<=maPartie->monDamier->taille)&&
		(y<=maPartie->monDamier->taille)) {
			ok = true;
			c = maPartie->monDamier->mesCases[x-1][y-1];
			if (c->estBouchee()){
				cout << "Erreur: case bouchee." << endl; ok = false;
			}
			if (c->estAnge()) {
				cout << "Erreur: case occupee par l'ange." << endl; ok = false;
			}
		}
		else ok = false;
	return ok;
}