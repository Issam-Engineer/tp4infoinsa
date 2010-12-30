#include <cstdlib>
#include <iostream>
#include "Moteur.h"

using namespace std;

class Moteur;

class __declspec(dllexport) Facade{

	int nb_joueur;
	Moteur * _m;

public :

	Facade();
	~Facade();

	int getNbJoueur();
	void modifNbJoueur(int i);
	void execute();
};

inline int Facade::getNbJoueur(){return nb_joueur;}

extern "C" __declspec(dllexport) Facade* Facade_new();
extern "C" __declspec(dllexport) void Facade_delete(Facade* f);