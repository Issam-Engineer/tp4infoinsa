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

		//MoteurJeu* getMoteur() { return f->getMoteur(); }

		int getCoul1() { return f->getCouleur1(); }
		int getCoul2() { return f->getCouleur2(); }
		int getCoul3() { return f->getCouleur3(); }
		int getCoul4() { return f->getCouleur4(); }

		bool getClicDe() { return f->getClicDe(); }
		void setClicDe(bool t) { f->setClicDe(t); }

		int getde1(){ return f->getDe1(); }
		int getde2(){ return f->getDe2(); }

		bool getAfficherDe1() { return f->getAfficherDe1(); }
		bool getAfficherDe2() { return f->getAfficherDe2(); }

		int getNumJCourant() { return f->getNumJCourant(); }

		int getMotorNbJoueur() { return f->getMotorNbJoueur(); }

		bool getInitialisationOK() { return f->getInitialisationOK(); }

		void setInitialisationOK(bool b) { f->setInitialisationOK(b); }

		int getCoulPortJCourant() { return f->getCoulPortJCourant(); }

		bool getAccessible(int x, int y) { return f->getAccessible(x,y); }

		bool getProposerDeplacement() { return f->getProposerDeplacement(); }
		void setProposerDeplacement(bool b) { f->setProposerDeplacement(b); }

		bool getEnableClicDe() { return f->getEnableClicDe(); }
		void setEnableClicDe(bool b) { f->setEnableClicDe(b); }

		void setAccessibleAll(bool b) { f->setAccessibleAll(b); }

		bool getChoixBateau() { return f->getChoixBateau(); }
		void setChoixBateau(bool b) { f->setChoixBateau(b); } 

		int getCoulBateauCourant() { return f->getCoulBateauCourant(); }

		bool getATresor() { return f->getATresor(); }

		void setATresor(bool b) { return f->setATresor(b); }

		bool getPartieTerminee() { return f->getPartieTerminee(); }

		bool getTresorRecup() { return f->getTresorRecup(); }

		void setTresorRecup(bool b) { return f->setTresorRecup(b); }

		bool getBonPort() { return f->getBonPort(); }

		void setBonPort(bool b) { return f->setBonPort(b); }

		int getEtatCourant() { return f->getEtatCourant(); }

		int getTypeBateauCourant() { return f->getTypeBateauCourant(); }

		void SaveXAttaquant() { f->SaveXAttaquant(); }
		void SaveYAttaquant() { f->SaveYAttaquant(); }

		int getSizeHistogramme() { return f->getSizeHistogramme(); }

		double getLongueurHisto(int ind) { 
			cout<<"Longueur : Indice ="<<ind<<endl;
			double j = f->getLongueurHisto(ind) ; 
			return j;
		}
		double getHauteurHisto(int ind) { 
			cout<<"Hauteur : Indice ="<<ind<<endl;
			double j = f->getHauteurHisto(ind) ; 
			return j;
		}

		void setAngle(int a){ f->setAngle(a); }
		void setPuissance(int p){ f->setPuissance(p); }

	};
}
