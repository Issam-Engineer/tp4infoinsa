/**
*\file  MoteurJeu.h
*\brief File which contains the attributes and function declarations of the MoteurJeu class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef MOTEURJEU_H
#define MOTEURJEU_H

#include "Facade.h"
#include "enum.h"
#include "Dé.h"
#include <vector>


using namespace std;

class Plateau;
class Etat;
class Joueur;
class Case;

class MoteurJeu
{
	private :

		Facade * facade; // association bi-directionnelle
		vector<Etat*> _etats;
		int courant;
		Joueur* tabJoueurs;
		int nbJoueurs;
		int _JCourant;
		bool finPartie;
		Plateau* _plateau;
		De _de;

	public :
		
		
		/**
		*\fn void execute()
		*this function is used when someone clic (is called by Facade::execute())
		*\brief Function which executes the current state
		*/
		void execute();
		/**
		*\fn MoteurJeu(Facade* f)
		*\brief default constructor of MoteurJeu
		*\return pointer on the instance
		*/
		MoteurJeu(Facade* f);
		/**
		*\fn ~MoteurJeu()
		*\brief destructor
		*/
		~MoteurJeu();
		/**
		*\fn Facade* getFacade() const
		*\brief acces function for the facade
		*\return pointer on the facade
		*/
		Facade* getFacade() const;  
		/**
		*\fn int getNbJoueurs();
		*\brief function which give nbjoueurs
		*\rerturn int nbjoueurs 
		*/
		int getNbJoueurs() const;  
		/**
		*\fn Facade* getPlateau() const
		*\brief acces function for the Plateau
		*\return the plateau
		*/
		Plateau* getPlateau() const;  
		/**
		*\fn Joueur getJoueurInd(int i) const
		*\brief acces function for the Joueur number i
		*\return the Joueur
		*/
		Joueur* getJoueurInd(int i); 
		/**
		*\fn Dé getDe() const
		*\brief acces function 
		*\return the Dé
		*/
		De* getDe(); 
		/**
		*\fn void modifNbJoueurs(int n);
		*\brief function which changes the current nbJoueurs
		*\parma[in] int n 
		*/
		void modifNbJoueurs(int n);  
		/**
		*\fn void modifCourant(int e);
		*\brief function which changes the current int courant
		*\parma[in] int e
		*/
		void modifCourant(int e);  
		/**
		*\fn void setTabJoueur(Joueur * t);
		*\brief function which changes the current tabjoueur
		*\parma[in] Joueur* j
		*/
		/*void setTabJoueur(Joueur * t); */ 
		void setTabJoueur(Joueur* t);
		/**
		*\fn int getJCourant();
		*\brief Access function
		*\return int _JCourant
		*/
		int getJCourant() const;
		/**
		*\fn void setJCourant(int i);
		*\brief Function which changes the current JCourant
		*/
		void setJCourant(int i);

		/**
		*\fn bool estAccessible(pair<int,int> p);
		*\brief Function which gives a boolean indicating the accessibility of the square based on the current square and the value			of the dices
		*/
		bool estAccessible(pair<int,int> p);

		/**
		*\fn void setAccessible(pair<int,int> p);
		*\brief Function which make the case at the position p accessible
		*/
		void setAccessible(pair<int,int> p);

		/**
		*\fn void setInaccessible(pair<int,int> p);
		*\brief Function which make the case at the position p inaccessible
		*/
		void setInaccessible(pair<int,int> p);

		/**
		*\fn void setTabJoueur(int ind,Joueur j)
		*\brief the Joueur at the indice
		*/
		void setTabJoueurs(int ind,Joueur j);

		/**
		*\fn Joueur* getTabJoueurs()
		*\brief return the attribute tabjoueurs
		*\return Joueur*
		*/
		Joueur* getTabJoueurs();

		/**
		*\fn void setAccessibleAll(bool b)
		*\brief put all case accesibility to boolean b
		**/
		void setAccessibleAll(bool b);

		/**
		*\fn Case* getCase(pair<int,int> p)
		*\brief return a pointer on the Case at the position p
		*\return a pointer
		**/
		Case* getCase(int x,int y);

		/**
		*\fn int getCourant() const
		*\brief return the current state, as an integer
		*\return an int
		**/
		int getCourant() const;
}; 


inline Facade* MoteurJeu::getFacade() const { return facade;}
inline int MoteurJeu::getNbJoueurs() const {return nbJoueurs;} 
inline De* MoteurJeu::getDe(){return &_de;} 
inline int MoteurJeu::getJCourant() const{return _JCourant;} 
inline Joueur * MoteurJeu::getTabJoueurs(){return tabJoueurs;}
inline void MoteurJeu::setJCourant(int i){_JCourant=i;}
inline void MoteurJeu::modifCourant(int e){courant=e;}
inline int MoteurJeu::getCourant() const{return courant;}

#endif