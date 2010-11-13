#include <stdexcept>
#include <iostream>
#include "fraction.h"

void main() {
	try{
	Fraction fr1 = Fraction(2);
	Fraction fr2 = Fraction(8,7);
	Fraction fr3 = Fraction(0);
	Fraction fr4 = Fraction(5,0);
	Fraction fr5 = Fraction(0,6);

	fr1.afficher();
	fr2.afficher();
	fr1.addition(fr2).afficher();
	fr1.soustraction(fr2).afficher();
	fr1.multiplication(fr2).afficher();
	fr1.division(fr2).afficher();

	fr1.division(fr5);
	} 
	catch(std::logic_error le1){std::cout << le1.what() << std::endl;}
	catch(...){std::cout << "erreur de type inconnu" << std::endl ;}
}