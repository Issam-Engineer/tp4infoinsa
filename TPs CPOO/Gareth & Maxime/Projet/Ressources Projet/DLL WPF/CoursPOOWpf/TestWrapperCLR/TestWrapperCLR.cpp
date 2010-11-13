// TestWrapperCLR.cpp : fichier projet principal.

#include "stdafx.h"
using namespace System;
using namespace mWrapper;

int main(array<System::String ^> ^args)
{
    WrapperTir^ mtir = gcnew WrapperTir();
    mtir->add(10, 10); 
    mtir->affiche();
    return 0;
}
