// angeHumain.cpp

#include "angeHumain.h"
#include "partie.h"


AngeHumain::AngeHumain(Partie * pa, int pui) : 
Ange(pa, pui) {
}

void AngeHumain::afficherPrompt() {
  cout << "Ange > ";
}


/*void AngeHumain::jouer(){
	cout << "Joueur::jouer(): debut:" << endl;
	Case * c = choisirUneCase();
	effectuerCoupSurCase(c);
	cout << "Joueur::jouer(): fin." << endl;
}*/



Case * AngeHumain::choisirUneCase() {
  int x, y;
	bool ok;
	Case * c;
	// l’utilisateur choisit un coup
	do {
		// l’utilisateur tape un coup
		cout << "Ange > x ? ";
		cin >> x;
		cout << "Ange > y ? ";
		cin >> y;
		// le programme verifie le coup
		if(ok=verifier(x,y)){
			c = maPartie->monDamier->mesCases[x-1][y-1];
			ok=!(Ange::caseInaccessible(c));
		}
	} while (!ok);
	return c;

}

/*void AngeHumain::effectuerCoupSurCase(Case * c) {
  maCase->setAnge(NULL);
  maCase = maPartie->monDamier->mesCases[c->getX()][c->getY()];
  maPartie->monDamier->mesCases[c->getX()][c->getY()]->setAnge(this);
}*/

bool AngeHumain::verifier(int x,int y){
	bool ok=true;
	Case * c;
	if ((x>0) && (y>0) &&
		(x<=maPartie->monDamier->taille)&&
		(y<=maPartie->monDamier->taille)) {
			ok = true;
			c = maPartie->monDamier->mesCases[x-1][y-1];
			if (c->estBouchee()) {
				cout << "Erreur: case bouchee." << endl; ok = false;
			}
			if (c->estAnge()) {
				cout << "Erreur: case occupee par l'ange." << endl; ok = false;
			}
		}
		else ok = false;
	return ok;
}