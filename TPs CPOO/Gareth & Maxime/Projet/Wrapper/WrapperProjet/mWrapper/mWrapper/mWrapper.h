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

		void setCoul1(int i) { f->setCoul1(i); }
		void setCoul2(int i) { f->setCoul2(i); }
		void setCoul3(int i) { f->setCoul3(i); }
		void setCoul4(int i) { f->setCoul4(i); }

		MoteurJeu* getMoteur() { return f->getMoteur(); }

		int getCoul1() { return f->getCouleur1(); }
		int getCoul2() { return f->getCouleur2(); }
		int getCoul3() { return f->getCouleur3(); }
		int getCoul4() { return f->getCouleur4(); }

	};
}
