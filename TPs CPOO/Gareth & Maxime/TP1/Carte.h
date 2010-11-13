/**
*
* \file Carte.h
* \brief header file which allows to describe the Carte class
* \author Havez Maxime
* \author Thiveux Gareth
* \date 23/09/10
*
*/


#ifndef CARTE_H
#define CARTE_H

/**
* \enum Couleur
* \brief Give the possibilities for Card's colors
*/
enum Couleur {pique,trefle,coeur,carreau};
/**
* \enum Valeur
* \brief Give the possibilities for Card's values
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
	* little more details
	*
	* \param[in] c Carte color
	* \param[in] v Carte value
	* \param[in] p Card owner, represented by a char ('N' ou 'S')
	*/
	Carte(Couleur c, Valeur v, char p);

	/**
	* \fn static Carte* getNTete();
	* \brief allows an access to the header element of N-packet
	*
	* little more details
	*
	* \return the pointer on the first Carte of N-packet
	*/
	static Carte* getNTete();

	/**
	* \fn static Carte* getSTete();
	* \brief allows an access to the header element of S-packet
	*
	* little more details
	*
	* \return the pointer on the first Carte of S-packet
	*/
	static Carte* getSTete();

	/**
	* \fn static Carte* getNQueue();
	* \brief allows an access to the last element of N-packet
	*
	* little more details
	*
	* \return the pointer on the last Carte of N-packet
	*/
	static Carte* getNQueue();

	/**
	* \fn static Carte* getSQueue();
	* \brief allows an access to the last element of S-packet
	*
	* little more details
	*
	* \return the pointer on the last Carte of S-packet
	*/
	static Carte* getSQueue();

	/**
	* \fn inline Couleur Carte::couleur() const {return _couleur;}
	* \brief gives an access to current Carte color
	*
	* little more details
	*
	* \return Couleur of the current Carte
	*/
	inline Couleur couleur() const {return _couleur;}

	/**
	* \fn inline Valeur Carte::valeur() const {return _valeur;}
	* \brief gives an access to current Carte value
	*
	* little more details
	*
	* \return Valeur of the current Carte
	*/
	inline Valeur valeur() const {return _valeur;}

	/**
	* \fn inline char Carte::proprio() const {return _proprio;}
	* \brief gives an access to current Carte owner
	*
	* little more details
	*
	* \return a Char which represents the current Carte owner
	*/
	inline char proprio() const {return _proprio;}

	/**
	* \fn inline Carte* Carte::suc() const {return _suc;}
	* \brief gives an access to the current Carte successor
	*
	* little more details
	*
	* \return a Pointer on the successor
	*/
	inline Carte* suc() const {return _suc;}

	/**
	* \fn bool supAbs(Carte c);
	* \brief return true if the current element is stronger than called element
	*
	* little more details
	*
	* \return a boolean, true if the current element is stronger false esle
	*/
	bool supAbs(Carte c);

	/**
	* \fn bool egale(Carte c);
	* \brief compare 2 Cartes and tests their equality
	*
	* little more details
	*
	* \return a boolean, true if the elements are equals  false esle
	*/
	bool egale(Carte c);

	//m?thodes d'affichages

	/**
	* \fn void afficher();
	* \brief print a description of the current Carte
	*/
	void afficher();

	/**
	* \fn void afficherN();
	* \brief print the list of Carte of 'N' owner
	*/
	static void afficherN();

	/**
	* \fn void afficherN();
	* \brief print the list of Carte of 'S' owner
	*/
	static void afficherS();

	/**
	* \fn void changerProp();
	* \brief put the first Carte of the owner to the last of the other one
	*/
	void changerProp(); //passe la premi?re carte d'un proprio ? la derni?re de l'autre

	/**
	* \fn void passerDerriere();
	* \brief put the card at the end of the packet
	*/
	void passerDerriere();
};

#endif