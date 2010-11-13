//=======================================================================
// Nom      : 	ensemble.h
//
//=======================================================================

#ifndef ENSEMBLE_H
#define ENSEMBLE_H

#include "list.h"
#include <fstream>
#include <iostream>
using namespace std;

// =====================================================================
// Classe: Ensemble
// =====================================================================
template <class T> 
class Ensemble
{

private:
	List<T> _liste;

public:

	// constructeur
	Ensemble() {}
	Ensemble(const Ensemble<T>& ens) : _liste(ens._liste){}
	// destructeur
	~Ensemble() {};
	// accesseur de l'attribut ens
	List<T>& getList() { return _liste; }



	// union:
	//-------------------------------
	template <class T>
	Ensemble<T> operator+(const Ensemble<T>& ens) {
		
		Ensemble<T>* ensUnion =new Ensemble(ens);
		ListIterator<T> iter = (this->getList()).beg();
		while(!iter.finished()){

			if(	!(ensUnion->getList()==iter.get())	)	{	(ensUnion->getList()).addElement(iter.get()); }
			iter++;
		}

		return *ensUnion;
	}
	

	// inter:
	//-------------------------------
	template <class T>
	Ensemble<T> operator*(const Ensemble<T>& ens2) {
		
		
		Ensemble<T>* temp =new Ensemble(ens2);
		
		ListIterator<T> iter = (this->getList()).beg();
		Ensemble<T>* ensInter =new Ensemble();

		while(!iter.finished()){

			if((temp->getList()==iter.get())){
				(ensInter->getList()).addElement(iter.get());
			}
			iter++;
			
		}
		return *ensInter;
	}

	
	// soustraction :
	//-------------------------------
	template <class T>
		Ensemble<T> operator-(const Ensemble<T>& ens) {
		Ensemble<T> ensSous =*this;
		ListIterator<T> iter = (ens._liste).beg();
		while(!iter.finished()){
		
			if(	(ensSous.getList()==iter.get())	)	{	(ensSous.getList()).delElement(iter.get()); }
			iter++;
		}
		
		return ensSous;
	}

	
	// difference :
	//-------------------------------
	template <class T>
	Ensemble<T> operator/( Ensemble<T>& ens) {
		
		return ( ((*this)+(ens)) - ((*this)*(ens)) );

	
	}
	

	// surcharge de >> et << à l'extérieur de la class	
	//-------------------------------
	template <class T> 
	friend istream& operator>>(istream& is, const Ensemble<T>& ens);
	template <class T> 
	friend istream& operator>>(istream& is, Ensemble<T>& ens);

};

#endif //ENSEMBLE_H



// =====================================================================
// Methode surchargé amies
// =====================================================================
template <class T> 
istream& operator>>(istream& is, Ensemble<T>& ens) 
{
	is >> ens.getList();

	return is;
}

template <class T> 
ostream& operator<<(ostream& os, Ensemble<T>& ens)
{
	os << ens.getList();

	return os;
}
