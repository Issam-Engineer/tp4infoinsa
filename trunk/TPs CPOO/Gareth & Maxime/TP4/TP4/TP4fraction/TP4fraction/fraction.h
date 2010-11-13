#include <stdexcept>
#include <limits>

#ifndef FRACTION_H
#define FRACTION_H

int MIN = numeric_limits<int>::min();
int MAX = numeric_limits<int>::max();

class Fraction {
private: 
	int _num;
	int _denom;

public:
	Fraction(int n):_num(n),_denom(1){};
	Fraction(int n, int d);
	Fraction(const Fraction & f):_num(f._num),_denom(f._denom){};

	Fraction addition(const Fraction & f) const;
	Fraction soustraction(const Fraction & f) const;
	Fraction multiplication(const Fraction & f) const;
	Fraction division(const Fraction & f) const;
	double evaluation() const;

	int add(int x, int y);
	int neg(int x, int y);
	int mult(int x, int y);

	void afficher();

};

#endif