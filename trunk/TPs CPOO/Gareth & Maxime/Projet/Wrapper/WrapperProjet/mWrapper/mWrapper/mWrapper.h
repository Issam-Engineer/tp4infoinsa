// mWrapper.h
#include "Facade.h"

using namespace System;

namespace mWrapper {

	public ref class WrapperFacade
	{
	private:

		Facade* f;

	public:
		WrapperFacade(){ f=Facade_new();}
		~WrapperFacade(){ Facade_delete(f);}

		void initNbJoueurs(int n){ f->initNbJoueurs(n);}
		System::Void execute(){ f->execute(); }
		void setX(int x){ f->setX(x);}
		void setY(int y){ f->setY(y);}
		int getX(){ return f->getX();}
		int getY(){ return f->getY();}
	};
}
