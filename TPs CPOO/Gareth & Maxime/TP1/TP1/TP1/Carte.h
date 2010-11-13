/**
*
* \file Carte.h
* \brief Header file which describes the "Carte" class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \date 23/09/10
*
*/


#ifndef CARTE_H
#define CARTE_H

/**
* \enum Couleur
* \brief Gives the possibilities for Card colors
*/
enum Couleur {pique,trefle,coeur,carreau};
/**
* \enum Valeur
* \brief Gives the possibilities for Card values
*/
enum Valeur {as,deux,trois,quartre,cinq,six,sept,huit,neuf,dix,valet,dame,roi};


class Carte {

private:

	//Class Attributes
	Couleur _couleur;
	Valeur _valeur;
	char _proprio;
	Carte* _suc;

	//Static Class Attributes which are used for the list
	static Carte* teteN;
	static Carte* teteS;
	static Carte* queueN;
	static Carte* queueS;


public:

	/**
	* \fn Carte(Couleur c, Valeur v, char p);
	* \brief Constructor with 3 parameters
	*
	* \param[in] c Card color
	* \param[in] v Card value
	* \param[in] p Card owner, represented by a char ('N' ou 'S')
	*/
	Carte(Couleur c, Valeur v, char p);

	/**
	* \fn static Carte* getNTete();
	* \brief allows an access to the top element of N-packet
	*
	* \return the pointer on the first card of N-packet
	*/
	static Carte* getNTete();

	/**
	* \fn static Carte* getSTete();
	* \brief allows an access to the top element of S-packet
	*
	* \return the pointer on the first card of S-packet
	*/
	static Carte* getSTete();

	/**
	* \fn static Carte* getNQueue();
	* \brief allows an access to the last element of N-packet
	*
	* \return the pointer on the last card of N-packet
	*/
	static Carte* getNQueue();

	/**
	* \fn static Carte* getSQueue();
	* \brief allows an access to the last element of S-packet
	*
	* \return a pointer on the last card of S-packet
	*/
	static Carte* getSQueue();

	/**
	* \fn inline Couleur Carte::couleur() const {return _couleur;}
	* \brief gives an access to the current card color
	*
	* \return color of the current card
	*/
	inline Couleur couleur() const {return _couleur;}

	/**
	* \fn inline Valeur Carte::valeur() const {return _valeur;}
	* \brief gives an access to the current card value
	*
	* \return value of the current card
	*/
	inline Valeur valeur() const {return _valeur;}

	/**
	* \fn inline char Carte::proprio() const {return _proprio;}
	* \brief gives an access to the current card owner
	*
	* \return a char which represents the current card owner
	*/
	inline char proprio() const {return _proprio;}

	/**
	* \fn inline Carte* Carte::suc() const {return _suc;}
	* \brief gives an access to the current card successor
	*
	* \return a pointer on the successor
	*/
	inline Carte* suc() const {return _suc;}

	/**
	* \fn bool supAbs(Carte c);
	* \brief return true if the current element is stronger than called element
	*
	* \return a boolean, true if the current element is stronger false esle
	*/
	bool supAbs(Carte c);

	/**
	* \fn bool egale(Carte c);
	* \brief compares two cards together and tests their equality
	*
	* \return a boolean, true if the elements are equals, else false
	*/
	bool egale(Carte c);

	//methodes d'affichages

	/**
	* \fn void afficher();
	* \brief prints a description of the current card
	*/
	void afficher();

	/**
	* \fn void afficherN();
	* \brief prints the list of cards of owner 'N'
	static void afficherN();

	/**
	* \fn void afficherN();
	* \brief prints the list of cards of owner 'S'
	*/
	static void afficherS();

	/**
	* \fn void changerProp();
	* \brief puts the first card of the owner at the end of the other player's packet
	*/
	void changerProp();

	/**
	* \fn void passerDerriere();
	* \brief puts the card at the end of the packet
	*/
	void passerDerriere();
};

#endif