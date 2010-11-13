#ifndef HASHTABLE
#define HASHTABLE


#include <iostream>
#include <vector>
#include <iterator>
#include <list>
using namespace std;


template <class T, class U> class Elem {
private :
	T _cle;
	U _valeur;

public : 
	const T& cle(){return _cle;}
	const U& valeur(){return _valeur;}

	Elem(const Elem&):_cle(Elem._cle),_valeur(Elem._valeur){} // constructeur par recopie
	Elem(){} // constructeur par defaut
};




template <class T,class U, template<class T> class V=Comparator, template<class T>class W=Hash_func> class Hastable{

private :
	vector<list<Elem<T,U> > > _table; 

public :
	
	//Constructeur
	Hashtable(){
		_table = vector<list<Elem<T,U> > >;
		_table.resize(valmax());
	}
	
	
	const U& find(const T& cle) {
		U res;
		int ind = W<T>.fhachage(cle); // . plutot que :: 
		list<Elem<T,U> >::iterator it1 = _table[ind].begin();
		for(;it1!=_table[indice].end();++it1){
			if(V<T>.egal(t1->get().cle(),cle)) res=it1->get().valeur();
		}
		return res;
	}

	void add(const Elem<T,U> el){
		if(V<T>.egal(find(el.cle()),el.valeur()) {}
		else{ 
			int ind = W<T>.fhachage(el.cle());
		

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
	//int valmax(){return _valeurmax;}
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