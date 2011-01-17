#include "MoteurJeu.h"
#include "AttenteNbJoueurs.h"
#include <stdio.h>

int main( int argc, const char* argv[] )
{
	printf( "\nHello World\n\n" );
	Facade* fac = new Facade();

	fac->initNbJoueurs(3);

	fac->execute();

	fac->setCoul1(1);
}
