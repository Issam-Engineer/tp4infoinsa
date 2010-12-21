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

		int _x1;
		int _x2;
		int _x3;
		int _x4;
		int _x5;
		int _x6;
		int _x7;
		int _x8;
		int _y1;
		int _y2;
		int _y3;
		int _y4;
		int _y5;
		int _y6;
		int _y7;
		int _y8;

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
		/**
		*\fn bool getX()
		*\brief acces function
		*/
		int getX();
		/**
		*\fn bool getY()
		*\brief acces function
		*/
		int getY();
		/**
		*\fn void setX(int u)
		*\brief function which change the value of the boolean _afficherDe2
		*/
		void setX(int u);
		/**
		*\fn void setY(int u)
		*\brief function which change the value of the boolean _afficherDe2
		*/
		void setY(int u);
		/**
		*\fn int getx1()
		*\brief acces function
		*/
		int getx1();
		/**
		*\fn int getx2()
		*\brief acces function
		*/
		int getx2();
		/**
		*\fn int getx3()
		*\brief acces function
		*/
		int getx3();
		/**
		*\fn int getx4()
		*\brief acces function
		*/
		int getx4();
		/**
		*\fn int getx5()
		*\brief acces function
		*/
		int getx5();
		/**
		*\fn int getx6()
		*\brief acces function
		*/
		int getx6();
		/**
		*\fn int getx7()
		*\brief acces function
		*/
		int getx7();
		/**
		*\fn int getx8()
		*\brief acces function
		*/
		int getx8();
		/**
		*\fn int gety1()
		*\brief acces function
		*/
		int gety1();
		/**
		*\fn int gety2()
		*\brief acces function
		*/
		int gety2();
		/**
		*\fn int gety3()
		*\brief acces function
		*/
		int gety3();
		/**
		*\fn int gety4()
		*\brief acces function
		*/
		int gety4();
		/**
		*\fn int gety5()
		*\brief acces function
		*/
		int gety5();
		/**
		*\fn int gety6()
		*\brief acces function
		*/
		int gety6();
		/**
		*\fn int gety7()
		*\brief acces function
		*/
		int gety7();
		/**
		*\fn int gety8()
		*\brief acces function
		*/
		int gety8();
		/**
		*\fn void setx1(int i)
		*\brief function which change the value of the int _x1
		*/
		void setx1(int i);
		/**
		*\fn void setx2(int i)
		*\brief function which change the value of the int _x2
		*/
		void setx2(int i);
		/**
		*\fn void setx3(int i)
		*\brief function which change the value of the int _x3
		*/
		void setx3(int i);
		/**
		*\fn void setx4(int i)
		*\brief function which change the value of the int _x4
		*/
		void setx4(int i);
		/**
		*\fn void setx5(int i)
		*\brief function which change the value of the int _x5
		*/
		void setx5(int i);
		/**
		*\fn void setx6(int i)
		*\brief function which change the value of the int _x6
		*/
		void setx6(int i);
		/**
		*\fn void setx7(int i)
		*\brief function which change the value of the int _x7
		*/
		void setx7(int i);
		/**
		*\fn void setx8(int i)
		*\brief function which change the value of the int _x8
		*/
		void setx8(int i);
		/**
		*\fn void sety1(int i)
		*\brief function which change the value of the int _y1
		*/
		void sety1(int i);
		/**
		*\fn void sety2(int i)
		*\brief function which change the value of the int _y2
		*/
		void sety2(int i);
		/**
		*\fn void sety3(int i)
		*\brief function which change the value of the int _y3
		*/
		void sety3(int i);
		/**
		*\fn void sety4(int i)
		*\brief function which change the value of the int _y4
		*/
		void sety4(int i);
		/**
		*\fn void sety5(int i)
		*\brief function which change the value of the int _y5
		*/
		void sety5(int i);
		/**
		*\fn void sety6(int i)
		*\brief function which change the value of the int _y6
		*/
		void sety6(int i);
		/**
		*\fn void sety7(int i)
		*\brief function which change the value of the int _y7
		*/
		void sety7(int i);
		/**
		*\fn void sety8(int i)
		*\brief function which change the value of the int _y8
		*/
		void sety8(int i);

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
		/*void clicCase(pair<int,int>);*/
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
inline int Facade::getX(){return _clicX;}
inline int Facade::getY(){return _clicY;}
inline int Facade::getx1(){return _x1;}
inline int Facade::getx2(){return _x2;}
inline int Facade::getx3(){return _x3;}
inline int Facade::getx4(){return _x4;}
inline int Facade::getx5(){return _x5;}
inline int Facade::getx6(){return _x6;}
inline int Facade::getx7(){return _x7;}
inline int Facade::getx8(){return _x8;}
inline int Facade::gety1(){return _y1;}
inline int Facade::gety2(){return _y2;}
inline int Facade::gety3(){return _y3;}
inline int Facade::gety4(){return _y4;}
inline int Facade::gety5(){return _y5;}
inline int Facade::gety6(){return _y6;}
inline int Facade::gety7(){return _y7;}
inline int Facade::gety8(){return _y8;}

#endif
