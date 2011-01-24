#include "MoteurJeu.h"
#include "AttenteNbJoueurs.h"
#include "Plateau.h"
#include <stdio.h>



int main( int argc, const char* argv[] )
{
	Facade* fac = new Facade();

	fac->initNbJoueurs(4);
	
	
	/*fac->execute();

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
	
	fac->setClicDe(true);
	fac->execute();
	
	fac->setClicDe(true);
	fac->execute();

	fac->setClicDe(true);
	fac->execute();

	fac->setClicDe(true);
	fac->execute();

	cout<<"La case (4,2) est elle accessible ? "<<fac->getAccessible(1,2)<<endl;*/



	fac->getMoteur()->modifCourant(ETATTIR);

	fac->execute();

	while(1);


}
