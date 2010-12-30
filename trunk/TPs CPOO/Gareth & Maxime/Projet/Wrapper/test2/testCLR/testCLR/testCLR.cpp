// testCLR.cpp : fichier projet principal.

#include "stdafx.h"


using namespace System;
using namespace mWrapper4;

int main(array<System::String ^> ^args)
{
	WrapperFacade^ facade = gcnew WrapperFacade();
	facade->modifNbJoueur(2);
	int i=0;
	while(i<10000){i++;}
    return 0;
}
