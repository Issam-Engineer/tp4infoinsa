#include "Tir.h"

void Tir::add(int x,int y) {
	tabDeCoord.push_back(Coordonnee(x,y));
}

/*
void Tir::add(vector<Coordonnee>& tabc) {
	vector<Coordonnee>::iterator i;
	for(i=tabc.begin(); i!=tabc.end(); i++) {
		tabDeCoord.push_back((*i));
	}
}
*/

void Tir::affiche() {
	vector<Coordonnee>::iterator i;
	for(i=tabDeCoord.begin(); i!=tabDeCoord.end(); i++) {
		((*i).affiche());
		cout << "|";
	}
	cout << endl;
}

extern "C" __declspec(dllexport) Tir*  Tir_New(){
	return new Tir();
}

extern "C" __declspec(dllexport) void  Tir_Delete( Tir* tdC){
	delete tdC;
}
