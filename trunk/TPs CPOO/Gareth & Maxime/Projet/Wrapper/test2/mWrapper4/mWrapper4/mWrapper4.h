// mWrapper4.h
#include "Facade.h"

using namespace System;

namespace mWrapper4 {

	public ref class WrapperFacade
	{
	private:

		Facade* f;

	public:
		WrapperFacade(){ f=Facade_new();}
		~WrapperFacade(){ Facade_delete(f);}

		int getNbJoueur(){ return f->getNbJoueur();}
		System::Void modifNbJoueur(int i){f->modifNbJoueur(i);} 
		System::Void execute(){ f->execute(); }
	};


}
