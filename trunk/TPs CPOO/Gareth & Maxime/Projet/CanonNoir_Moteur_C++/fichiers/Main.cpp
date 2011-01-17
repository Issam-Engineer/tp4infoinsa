#include "MoteurJeu.h"
#include "AttenteNbJoueurs.h"
#include <stdio.h>

int main( int argc, const char* argv[] )
{
	printf( "\nHello World\n\n" );
	//Facade* fac = new Facade();
	//fac->getMoteur()->modifNbJoueurs(3);
	MoteurJeu* m=new MoteurJeu();
	m->initialiser();
}
