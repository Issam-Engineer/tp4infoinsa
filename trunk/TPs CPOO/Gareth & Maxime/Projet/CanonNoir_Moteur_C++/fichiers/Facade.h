/**
*\file  Facade.h
*\brief fichier qui regroupe les fonctionnalité et les attributs de la facade du moteur
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

#ifndef FACADE_H
#define FACADE_H

#include <cstdlib>
#include <string>
#include <iostream>


class MoteurJeu;
class Joueur;

class Facade
{

	public :
		//utilisés
		MoteurJeu* _moteur;
		int _nb_Joueurs;
		int _couleur1;
		int _couleur2;
		int _couleur3;
		int _couleur4;

		bool _clicDe;

		bool _afficherDe1;
		bool _afficherDe2;

		bool _choixDe1;
		bool _choixDe2;
		bool _choix2De;

		int _clicX;
		int _clicY;

		//à traiter
		/*pair<int,int> _posBateau; // ATTENTION CE N'EST PAS UN TYPE PRIMITIF*/
		bool _getNewPos;
		bool _clicDepart;
		bool _clicInit;
		bool _partieEnCours;
		bool _clicNbJoueurs;
		bool _afficherJoueur1;
		bool _initialiserOK;
		Joueur* _tempJoueurs; // ATTENTION CE N'EST PAS UN TYPE PRIMITIF
		int _angle;
		int _puissance;
		bool _clicRefuserDuel;
		bool _afficherAttaqué;
		bool _afficherAttanquant;
		bool _bateauSelect;
		/*pair<int,int>* _casesProposees; // ATTENTION CE N'EST PAS UN TYPE PRIMITIF
		Bateau* _tabBateau; // ATTENTION CE N'EST PAS UN TYPE PRIMITIF*/
		bool _fenetreInit;
		bool _fenetreTir;


	public :
		
		//utilisées
		/**
		*\fn void initNbJoueurs(int n)
		*\brief Function which initiates the nb_Joueurs value 
		*/
		void initNbJoueurs(int n);

		/**
		*\fn void execute()
		*\brief Function which is called after an action and which call MoteurJeu::execute() 
		*/
		//permet de ne pas faire de l'attente active
		void execute();
		
		/**
		*\fn int getAngle()
		*\brief Function which gives the angle of the current shot 
		*\return int, the angle
		*/
		int getAngle();

		/**
		*\fn int getPuissance()
		*\brief Function which gives the power of the current shot
		*\return int, the power
		*/
		int getPuissance();
		/**
		*\fn int getcouleur1()
		*\brief Function which gives the color1
		*\return int, the color
		*/
		int getCouleur1();
		/**
		*\fn int getcouleur2()
		*\brief Function which gives the color2
		*\return int, the color
		*/
		int getCouleur2();
		/**
		*\fn int getcouleur3()
		*\brief Function which gives the color3
		*\return int, the color
		*/
		int getCouleur3();
		/**
		*\fn int getcouleur4()
		*\brief Function which gives the color4
		*\return int, the color
		*/
		int getCouleur4();
		/**
		*\fn bool getClicDe()
		*\brief acces function
		*\return bool _clicDe
		*/
		bool getClicDe();
		/**
		*\fn void setClicDe(bool b)
		*\brief function which change the value of the boolean _clicDe
		*/
		void setClicDe(bool b);
		/**
		*\fn bool getAfficherDe1()
		*\brief acces function
		*/
		bool getAfficherDe1();
		/**
		*\fn bool getAfficherDe2()
		*\brief acces function
		*/
		bool getAfficherDe2();
		/**
		*\fn void setAfficherDe1(bool b)
		*\brief function which change the value of the boolean _afficherDe1
		*/
		void setAfficherDe1(bool b);
		/**
		*\fn void setAfficherDe2(bool b)
		*\brief function which change the value of the boolean _afficherDe2
		*/
		void setAfficherDe2(bool b);
		/**
		*\fn bool getChoixDe1()
		*\brief acces function
		*/
		bool getChoixDe1();
		/**
		*\fn bool getChoixDe2()
		*\brief acces function
		*/
		bool getChoixDe2();
		/**
		*\fn bool getChoix2De()
		*\brief acces function
		*/
		bool getChoix2De();
		/**
		*\fn void setChoixDe1(bool b)
		*\brief function which change the value of the boolean _afficherDe2
		*/
		void setChoixDe1(bool b);
		/**
		*\fn void setChoixDe2(bool b)
		*\brief function which change the value of the boolean _afficherDe2
		*/
		void setChoixDe2(bool b);
		/**
		*\fn void setChoix2De(bool b)
		*\brief function which change the value of the boolean _afficherDe2
		*/
		void setChoix2De(bool b);

		//à traiter
		void activeClicDepart();
		void initialiser();
		void desactiveClicDepart();
		void acitveClicInit();
		void desactiveClicInit();
		void initNoms();
		void lancerPartie();
		void activeClicNbJoueurs();
		void desactiveClicNbJoueurs();
		void afficherJoueur1();
		void JeuInitialise();
		void activerClicRefuserDuel();
		void desactiverClicRefuserDuel();
		void afficherAttaquant();
		void afficherAttaqué();
		/*void clicCase(pair<int,int>); 
		void afficherCasesProposees(pair<int,int>[]);
		pair<int,int> afficherCasesProposees();*/
		void ouvrirFenetreInit();
		void fermerFenetreInit();
		void ouvrirFenetreTir();
		void fermerFenetreTir();

}; 

inline bool Facade::getClicDe(){ return _clicDe;}
inline bool Facade::getAfficherDe1(){ return _afficherDe1;}
inline bool Facade::getAfficherDe2(){ return _afficherDe2;}
inline bool Facade::getChoixDe1(){return _choixDe1;}
inline bool Facade::getChoixDe2(){return _choixDe2;}
inline bool Facade::getChoix2De(){return _choix2De;}

#endif
