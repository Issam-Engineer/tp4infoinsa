//=======================================================================
// Fichier	  :  ensemble.h
// Description:  Classe template Ensemble
// Auteurs	  :  Maxime HAVEZ ;	Gareth THIVEUX
// Date		  :  04/11/10
//=======================================================================

#ifndef ENSEMBLE_H
#define ENSEMBLE_H

#include "list.h"
#include <iostream>


// =====================================================================
// Classe: definition de la classe Ensemble<T> decrivant des ensembles
// =====================================================================
template <class T> class Ensemble {
	/*	On choisit une relation d'agregation entre List et Ensemble.
	On cree un ensemble qui ne possede pas les memes proprietes que les listes.
	On n'offre pas a l'ensemble les methodes que possede la liste.

	Par contre comme la liste est le conteneur, on va utiliser les methodes de la classe List
	pour definir les methodes que l'on offre a la classe Ensemble.	*/

private : 
	// La liste
	List<T> liste;
	
public :
// =====================================================================
// But: constructeur par recopie
// =====================================================================
	Ensemble(const Ensemble<T>& E):liste(E.liste){}

	/*	On retourne l'ensemble qui est construit dans la fonction !
	On ne doit pas rendre de reference dans ce cas la ! */

// =====================================================================
// But: constructeur par defaut
// =====================================================================
	Ensemble(){}

// =====================================================================
// But: destructeur
// =====================================================================
	~Ensemble(){}


//=======================================================================
// Methode	 :  bool appartient(const T elem) const
// But       : 	Teste l'appartence d'un element a l'ensemble courant
// Paramètres: 	elem	: reference constante vers un element
// Retour    : 	booleen
//=======================================================================
	bool appartient(const T& elem) const {
		/*	
			bool res=false;
			ListIterator<T> it = liste.beg();//it?rateur sur la liste courante
			for(;!it.finished();++it){
				if (it.get() == elem) res=true;
			}
			return res;
		*/

		//En utilisant la fonction == de liste
		return ((liste==elem) != 0 );
	}

//=======================================================================
// Methode   : 	Ensemble<T> operator+(const T& elem) const
// But       : 	Ajout d'un element a l'ensemble
// Paramètres: 	elem	: reference constante vers un element
// Retour    : 	Ensemble<T>
//=======================================================================
	Ensemble<T> operator+(const T& elem) const { 
		Ensemble<T> tmp(*this);
		tmp.liste = tmp.liste + elem;
		return tmp;
	}

//=======================================================================
// Methode   : 	Ensemble<T> operator+(Ensemble<T>& E) const
// But       : 	Union de deux ensembles
// Paramètres: 	E	: reference vers un ensemble
// Retour    : 	Ensemble<T>
//=======================================================================
	Ensemble<T> operator+(Ensemble<T>& E) const {
		Ensemble<T> tmp(*this); // Necessite d'avoir le constructeur par recopie
		ListIterator<T> it = E.liste.beg(); //iterateur sur la liste de E
		for(;!it.finished();++it){
			if(!(tmp.appartient(it.get()))) {tmp.liste = tmp.liste + it.get() ;} 
		}
		return tmp;
	}

//=======================================================================
// Methode   : 	Ensemble<T> operator/(Ensemble<T>& E) const
// But       : 	Difference ensembliste de deux ensembles
// Paramètres: 	E	: reference vers un ensemble
// Retour    : 	Ensemble<T>
//=======================================================================
	Ensemble<T> operator/(Ensemble<T>& E) const {
		Ensemble<T> tmp(*this);
		ListIterator<T> it=E.liste.beg();
		for(;!it.finished();++it){
			if((tmp.appartient(it.get()))){tmp.liste = tmp.liste - it.get() ;}
			else{tmp.liste = tmp.liste + it.get() ;}
		}
		return tmp;
	}

//=======================================================================
// Methode   : 	Ensemble<T> operator*(Ensemble<T>& E) const
// But       : 	Intersection de deux ensembles
// Paramètres: 	E	: reference vers un ensemble
// Retour    : 	Ensemble<T>
//=======================================================================
	Ensemble<T> operator*(Ensemble<T>& E) const {
		Ensemble<T> tmp;
		ListIterator<T> it=E.liste.beg();
		for(;!it.finished();++it){
			if((this->appartient(it.get()))){tmp.liste = tmp.liste + it.get() ;}
		}
		return tmp;
	}

//=======================================================================
// Methode   : 	Ensemble<T> operator-(Ensemble<T>& E) const
// But       : 	Soustraction d'un ensemble par un autre
// Paramètres: 	E	: reference vers un ensemble
// Retour    : 	Ensemble<T>
//=======================================================================
	Ensemble<T> operator-(Ensemble<T>& E) const {
		Ensemble<T> tmp(*this);
		ListIterator<T> it=E.liste.beg();
		for(;!it.finished();++it){
			if((tmp.appartient(it.get()))){tmp.liste = tmp.liste - it.get();}
		}
		return tmp;
	}

// =====================================================================
// Pre-declaration : operateur d'affichage d'une liste dans un flux
// =====================================================================
	template <class S>/*pas forcement celui de la classe*/ friend std::ostream& operator<<(std::ostream& out,const Ensemble<S>& lref);

// =====================================================================
// Pre-declaration : operateur de lecture d'une liste dans un flux
// =====================================================================
	template <class S> friend std::istream& operator>>(std::istream& in,Ensemble<S>& lref);

};


//=======================================================================
// Methode   : 	std::ostream& operator<<(std::ostream& out,const Ensemble<T>& lref)
// But       : 	operateur d'affichage d'une liste dans un flux
// Paramètres: 	out	: flux ;	lref : reference vers un ensemble
// Retour    : 	std::ostream&
//=======================================================================
	template <class T>
	std::ostream& operator<<(std::ostream& out,const Ensemble<T>& lref) {
		out << lref.liste ;// affichage du cardinal est deja gere dans la liste
		return out;
	}

//=======================================================================
// Methode   : 	std::istream& operator>>(std::istream& in,Ensemble<T>& lref)
// But       : 	operateur de lecture d'une liste dans un flux
// Paramètres: 	in	: flux ;	lref : reference vers un ensemble
// Retour    : 	std::istream&
//=======================================================================
	template <class T>
	std::istream& operator>>(std::istream& in,Ensemble<T>& lref){
		in >> lref.liste ;
		return in;
	}

#endif