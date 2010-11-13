/**
*
* \file chaine.cpp
* \brief file of "chaine" class (function description)
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \date 30/09/10
*
*/

#include "chaine.h"
#include <cstdlib>



// String constuctors
Chaine::Chaine(){
	_taille = TAILLE_MAX;
	_tabchar[_taille];
	std::cout << "CONSTRUCTEUR : Chaine par défaut !\n";
}

Chaine::Chaine(const char * c){
	int i=0;
	while(c[i]!='\0'){
		_tabchar[i]=c[i];
		i++;
	}
	_taille = i;
	std::cout << "CONSTRUCTEUR : Chaine constituée d'un tableau de char !\n";
}

Chaine::Chaine(const Chaine & c){
	int i=0;
	for(i=0; i<c._taille; i++){
		_tabchar[i]=c._tabchar[i];
	}
	std::cout << "CONSTRUCTEUR : Chaine constituée d'une chaine !\n";
}

Chaine Chaine::sous_chaine(char deb, char fin){
	Chaine resul;
	int i=0;
	int j=1;
	while(_tabchar[i]!=deb){
		if(i>=_taille){
			std::cerr << deb << "n'a pas été trouvé dans la chaîne" << std::endl;
			return(0);
		}
		i++;
	}
	resul._tabchar[0]=deb;
	while(_tabchar[i]!=fin && i<_taille){
		if(i>_taille){
			std::cerr << fin << "n'a pas été trouvé dans la chaîne" << std::endl;
			return(0);
		}
		resul._tabchar[j]=_tabchar[i];
		i++; j++;
	}
	resul._tabchar[j] = fin;
	resul._taille = j+1;
	return resul;
}

Chaine Chaine::sous_chaine(int ind1, int ind2){
	Chaine resul;
	if(((ind1 || ind2) > _taille) || (ind1 > ind2)){
		std::cerr << ind1 << "ou" << ind2 << "n'a pas une valeur correcte" << std::endl;
		return(0);
	}
	int i=0;
	int j=0;
	for(i=ind1; i<=ind2; i++){
		resul._tabchar[j]=_tabchar[i];
		j++;
	}
	resul._taille = j;
	return resul;
}

bool Chaine::operator== (const Chaine& c) const{
	bool res=true;
	if (_taille != c._taille) {res=false;}
	else {
		int i;
		for(i=0;i<_taille;i++){
			if (_tabchar[i] != c._tabchar[i]){res=false;}
		}
	}
	return res;
}

Chaine& Chaine::operator= (const Chaine& c){
	int i=0;
	Chaine* tmp;
	if(_taille>=c._taille){
		for(i=0;i<c._taille;i++){	
			_tabchar[i] = c._tabchar[i];
		}
	}else{
		tmp = new Chaine(c);
		delete (this);
	}
	return *tmp;
}

bool Chaine::operator> (const Chaine& c) const{return _taille>c._taille;}

bool Chaine::operator< (const Chaine& c) const{return _taille<c._taille;}

bool Chaine::operator>= (const Chaine& c) const{return _taille>=c._taille;}

bool Chaine::operator<= (const Chaine& c) const{return _taille<=c._taille;}

Chaine Chaine::operator+ (const Chaine& c) const{
	Chaine concat;
	int i=0;
	int j=0;
	concat._taille = _taille + c._taille;
	for(i=0;i<_taille;i++){
		concat._tabchar[j]=_tabchar[i];
		j++;
	}
	for(i=0;i<c._taille;i++){
		concat._tabchar[j]=c._tabchar[i];
		j++;
	}
	if(j != concat._taille){
		std::cerr << "La chaine n'a pas une taille cohérente ! " << concat._taille << "different de" << j <<std::endl;
	}
	return concat;
}

char Chaine::charInd (int i) const {
	if(i>=_taille){
			std::cerr << "Indice supérieur à la taille de la chaîne !" << std::endl;
			return(0);
		} 
	return _tabchar[i];
}


Chaine& Chaine::operator+= (const Chaine& c){
	return *this = *this + c;
}

Chaine::~Chaine() {
		delete _tabchar;
}