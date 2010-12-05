/**
*\file  Plateau.h
*\brief File which contains the attributes and function declarations of Plateau class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

class Plateau
{
	private :

		int longueur;
		int largeur;

	public :

		/**
		* \fn int largeur()
		* \brief Virtual function which returns the width of game board
		* \return int width of the game board
		*/
		virtual int largeur();
		/**
		* \fn int longueur()
		* \brief Virtual function which returns the length of game board
		* \return int length of the game board
		*/
		virtual int longueur();

}; 

inline int Plateau::largeur(){
	return largeur;
}

inline int Plateau::longueur(){
	return longueur;
}