/**
*
* \file chaine.h
* \brief Header file which describes the "chaine" class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \date 30/09/10
*
*/
#include <iostream>
#include <fstream>

#ifndef CHAINE_H
#define CHAINE_H

#define TAILLE_MAX 26

class Chaine {

private:
	//Class Attributes
	int _taille;
	char* _tabchar;

public:

	/**
	* \fn inline Chaine Chaine::tabchar() const {return _tabchar;}
	* \brief gives an access to the current string
	*
	* \return current string
	*/
	inline Chaine Chaine::tabchar() const {return _tabchar;}

	/**
	* \fn inline Chaine Chaine::taille() const {return _taille;}
	* \brief gives an access to the length of the current  string
	*
	* \return integer refering to the length of the current string
	*/
	inline int Chaine::taille() const {return _taille;}

	/**
	* \fn Chaine();
	* \brief String constructor with no paremeter
	*
	*/
	Chaine();

	/**
	* \fn Chaine();
	* \brief String constructor with one paremeter (char* type)
	*
	* \param[in] c Pointer on a constant char
	*/
	Chaine(const char * c);

	/**
	* \fn Chaine();
	* \brief String constructor with one paremeter (string type)
	*
	* \param[in] c Reference on a constant string
	*/
	Chaine(const Chaine & c);

	/**
	* \fn chaine sous_chaine(char deb, char fin);
	* \brief extracts the substring of the current string beginning by the "deb" char and finishing by the "fin" char
	*
	* \param[in] deb first char of the substring
	* \param[in] fin last char of the substring
	* \return the substring in between "deb" char and "fin" char
	*/
	Chaine sous_chaine(char deb, char fin);

	/**
	* \fn chaine sous_chaine(int ind1, int ind2);
	* \brief extracts the substring of the current string beginning at position "ind1" and finishing at position "ind2"
	*
	* \param[in] ind1 integer refering to the position of first char of the substring
	* \param[in] ind2 integer refering to the position of last char of the substring
	* \return the substring in between position ind1 and position ind2
	*/
	Chaine sous_chaine(int ind1, int ind2);

	/**
	* \fn bool operator= (const Chaine& c) const;
	* \brief affects the given string to the current one
	*
	* \param[in] c reference on a constant string
	*/
	Chaine& Chaine::operator= (const Chaine& c);

	/**
	* \fn bool operator== (const Chaine& c) const;
	* \brief tests the equality of two strings
	*
	* \param[in] c reference on a constant string
	* \return true if the two strings are equals, if not, false
	*/
	bool operator== (const Chaine& c) const;

	/**
	* \fn bool operator> (const Chaine& c) const;
	* \brief tests if the current string is superior to the given one
	*
	* \param[in] c reference on a constant string
	* \return true if the current string is superior to the given one, if not, false
	*/
	bool operator> (const Chaine& c) const;

	/**
	* \fn bool operator< (const Chaine& c) const;
	* \brief tests if the current string is inferior to the given one
	*
	* \param[in] c reference on a constant string
	* \return true if the current string is inferior to the given one, if not, false
	*/
	bool operator< (const Chaine& c) const;

	/**
	* \fn bool operator>= (const Chaine& c) const;
	* \brief tests if the current string is superior or equal to the given one
	*
	* \param[in] c reference on a constant string
	* \return true if the current string is superior or equal to the given one, if not, false
	*/
	bool operator>= (const Chaine& c) const;

	/**
	* \fn bool operator<= (const Chaine& c) const;
	* \brief tests if the current string is inferior or equal to the given one
	*
	* \param[in] c reference on a constant string
	* \return true if the current string is inferior or equal to the given one, if not, false
	*/
	bool operator<= (const Chaine& c) const;

	/**
	* \fn Chaine operator+ (const Chaine& c) const;
	* \brief concatenates the given string to the current one
	*
	* \param[in] c reference on a constant string
	* \return the concatenated string
	*/
	Chaine operator+ (const Chaine& c) const;

	/**
	* \fn Chaine charInd (int i);
	* \brief gives the char of the current string situated at position i
	*
	* \param[in] i integer refering to a position in the current string
	* \return the char situated at position i
	*/
	char charInd (int i) const;

	/**
	* \fn chaine operator+= (const Chaine& c) const;
	* \brief concatenates the given string to the current one
	*
	* \param[in] c reference on a constant string
	*/
	Chaine& operator+= (const Chaine& c);

	~Chaine();
};



#endif