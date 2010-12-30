#include <cstdlib>
#include <iostream>

using namespace std;

class __declspec(dllexport) Facade{

	int nb_joueur;

public :

	Facade();
	~Facade();

	int getNbJoueur();
	void modifNbJoueur(int i);
};

inline int Facade::getNbJoueur(){return nb_joueur;}

extern "C" __declspec(dllexport) Facade* Facade_new();
extern "C" __declspec(dllexport) void Facade_delete(Facade* f);