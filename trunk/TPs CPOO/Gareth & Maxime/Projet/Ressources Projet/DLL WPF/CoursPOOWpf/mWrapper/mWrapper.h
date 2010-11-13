// mWrapper.h

#pragma once


#include "Tir.h"
#pragma comment (lib,"ModeleCpp.lib")

using namespace System;

namespace mWrapper {

public ref class WrapperTir
{
private:
	Tir* tDCw;
public:
	WrapperTir(){
		tDCw=Tir_New();
	}
	~WrapperTir(){
		Tir_Delete(tDCw);
	}
	System::Void add(int x,int y){
		tDCw->add(x,y);
	}
	System::Void affiche(){
		tDCw->affiche();
	}
protected:
	!WrapperTir(){
		Tir_Delete(tDCw);
	}
		
};
}
