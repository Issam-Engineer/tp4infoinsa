#include "fraction.h"
#include <iostream>

using namespace std;


	Fraction::Fraction(int n, int d) {
		if (d==0) throw logic_error("Le denominateur est egal a zero !");
		_num = n;
		_denom = d;
	}

	Fraction Fraction::addition(const Fraction & f) const {
		Fraction fres(*this);
		fres._num = add((mult(fres._num, f._denom)), (mult(f._num, fres._denom))); 
		fres._denom = mult(fres._denom, f._denom);
		return fres;
	}


	Fraction Fraction::soustraction(const Fraction & f) const{
		Fraction fres(*this);
		fres._num = fres._num * f._denom - f._num * fres._denom; 
		fres._denom = mult(fres._denom,f._denom);
		return fres;
	}


	Fraction Fraction::multiplication(const Fraction & f) const{
		Fraction fres(*this);
		fres._num = mult(fres._num, f._num);
		fres._denom = mult(fres._denom, f._denom);
		return fres;
	}


	Fraction Fraction::division(const Fraction & f) const{
		if (f._num == 0) throw logic_error("Division par zero !");
		Fraction fres(*this);
		fres._num = mult(fres._num, f._denom); 
		fres._denom = mult(fres._denom, f._num);
		return fres;
	}


	double Fraction::evaluation() const{
		if (_denom == 0) throw logic_error("le denominateur est egal a zero !");
		return _num / _denom;
	}


	void Fraction::afficher(){
		std::cout << _num << "/" << _denom << "\n";
	}

	
	int Fraction::add(int x, int y){
		if(x>0 && y>0 && x>MAX-y) throw overflow_error("Problème d'overflow !");
		else if(x<0 && y<0 && x<MIN-y) throw underflow_error("Problème d'underflow !");
		else return x + y;
	}


	int Fraction::neg(int x, int y){
		if(x<-MAX) throw overflow_error("Problème d'overflow !");
		else return x-y;
	}


	int Fraction::mult(int x, int y){
		if(((x>0 && y>0) || (x<0 && y<0)) && x>(MAX/y)) throw overflow_error("Problème d'overflow !");
		else if((x<0 && y>0 && x<(MIN/y)) || (x>0 && y<0 && x>(MIN/y))) throw underflow_error("Problème d'underflow !");
		else return x * y;
	}