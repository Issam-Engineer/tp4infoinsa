#include "Moteur.h"

class Etat{

public : 
	Moteur motor;

	Etat(Moteur m){
		motor=m;
	}

	virtual void execute();

}