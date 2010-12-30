#include "StdAfx.h"
#include "Facade.h"



void Facade::modifNbJoueur(int i){
	nb_joueur=i;
	cout<<"nb_joueur ="<<nb_joueur<<endl;	
}

Facade::Facade(){nb_joueur=0;_m = new Moteur();}

void Facade::execute(){
	_m->exec();
}

Facade::~Facade(){delete &nb_joueur;delete this->_m;}

extern "C" __declspec(dllexport) Facade* Facade_new(){return new Facade();}
extern "C" __declspec(dllexport) void Facade_delete(Facade * f){delete f;}