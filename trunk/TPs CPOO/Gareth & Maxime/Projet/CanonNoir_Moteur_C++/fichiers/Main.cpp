#include "MoteurJeu.h"
#include "AttenteNbJoueurs.h"
#include "Plateau.h"
#include <stdio.h>



int main( int argc, const char* argv[] )
{
	Facade* fac = new Facade();

	fac->initNbJoueurs(2);

	fac->execute();

	fac->setCoul1(1);
	fac->setCoul2(2);
	fac->setCoul3(3);
	fac->setCoul4(4);

	fac->execute();

	fac->setClicDe(true);
	//clic De
	srand( time(NULL));
	fac->execute();

	fac->setClicDe(true);
	fac->execute();

	while(1);


}
