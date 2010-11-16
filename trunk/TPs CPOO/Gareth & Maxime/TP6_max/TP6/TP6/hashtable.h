#ifndef HASHTABLE
#define HASHTABLE


#include <iostream>
#include <vector>
#include <iterator>
#include <list>
#include <string>
using namespace std;


template <class T, class U> class Elem {
private :
	T _cle;
	U _valeur;

public : 
	const T& cle(){return _cle;}
	const U& valeur(){return _valeur;}

	/*
	Constructeurs
	*/
	Elem(const Elem&):_cle(Elem._cle),_valeur(Elem._valeur){} // constructeur par recopie
	Elem(const T c,const U v):_cle(c),_valeur(v){}
	Elem(){} // constructeur par defaut

	/*
	Affichage
	*/
	template <class X,class Z> friend std::ostream& operator<<(std::ostream& out,const Elem<X,Z>& lref);
};

template <class T,class U> std::ostream& operator<<(std::ostream& out,const Elem<T,U>& lref){
	out<<"cle :"<< lref._cle <<" valeur :"<< lref._valeur;
	return out;
}



template <class T,class U, template<class T> class V=Comparator, template<class T>class W=Hash_func > class Hashtable{

private :
	vector<list<Elem<T,U> > > _table; 

public :
	
	//Constructeur
	Hashtable() {
		vector< list<Elem<T,U>> > _table;
		_table.resize(valmax());
	}
	
	//ajouter un élément à la Hashtable
	void add(const Elem<T,U> el){
		if(V<T>.egal(find(el.cle()),el.valeur())) {}
		else{ 
			int ind = W<T>.fhachage(el.cle());
			list<Elem<T,U> >::iterator i = vector[ind].begin();
			for(;!vector[ind].end();++i){
				if(V<T>.egal(i.get().valeur(),e1.valeur())){}
				else{
					vector[ind].push(e1);
				}
			}
		}
	}


	//fonction de recherche d'une cle
	const U& find(const T& cle) {
		U res;
		int ind = W<T>.fhachage(cle); // . plutot que :: 
		list<Elem<T,U> >::iterator it1 = _table[ind].begin();
		for(;it1!=_table[indice].end();++it1){
			if(V<T>.egal(t1->get().cle(),cle)) res=it1->get().valeur();
		}
		return res;
	}

	
};



template <class T> class Hash_func {
protected :
	int _valeurmax; // taille max de la table de hachage
public :
	int valmax(){return _valeurmax;}
	virtual int fhachage(const T& cle) = 0;

};

template <class T=int> class Hash_funct_int:public Hash_func<T> {
	int fhachage(const T& cle) {
		return cle%_valeurmax;
	}
	Hash_funct_int(){valeurmax=20;}
	Hash_funct_int(int v){valeurmax=v;}
};

template <class T=string> class Hash_funct_string:public Hash_func<T> {
	int fhachage(const T& cle) {
		int tmp;
		tmp = (int) cle[0];
		return tmp%_valeurmax;
	}
	Hash_funct_string(){valeurmax=26;}
	Hash_funct_string(int v){valeurmax=v;}
};


template <class T> class Comparator {
protected :
	int _valeurmax; // taille max de la table de hachage
public :
	int valmax(){return _valeurmax;}
	virtual bool egal(const T& v1, const T& v2) = 0;

};

template <class T=int> class Comparator_int:public Comparator<T> {
	bool egal(const T& v1, const T& v2) {
		return (v1 == v2);
	}
};

template <class T=string> class Comparator_string:public Comparator<T>{
	bool egal(const T& v1, const T& v2) {
		return (v1.compare(v2) == -1);
	}
};

#endif