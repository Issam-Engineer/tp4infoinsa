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

using namespace std;

class __declspec(dllexport) Facade
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

		int _valDe1;
		int _valDe2;

		bool _choixDe1;
		bool _choixDe2;
		bool _choix2De;

		int _clicX;
		int _clicY;

		int _angle;
		int _puissance;

		//à traiter
		/*pair<int,int> _posBateau; // ATTENTION CE N'EST PAS UN TYPE PRIMITIF*/
		bool _getNewPos;
		bool _clicDepart;
		bool _clicInit;
		bool _partieEnCours;
		bool _clicNbJoueurs;
		bool _afficherJoueur1;
		bool _initialiserOK;
		bool _clicRefuserDuel;
		bool _afficherAttaqué;
		bool _afficherAttanquant;
		bool _bateauSelect;
		bool _fenetreInit;
		bool _fenetreTir;


	public :
		
		//utilisées
		/**
		*\fn Facade()
		*\brief constructor
		*/
		Facade();
		/**
		*\fn ~Facade()
		*\brief destructor
		*/
		~Facade();

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
		*\fn MoteurJeu* getMoteur()
		*\brief Function which return the motor
		*\return MoteurJeu the Facade's motor
		*/
		MoteurJeu* getMoteur();

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
		*\fn void setValDe1(int d)
		*\brief function which change the value of the int _valDe1
		*/		
		void setValDe1(int d);
		/**
		*\fn void setValDe2(int d)
		*\brief function which change the value of the int _valDe2
		*/
		void setValDe2(int d);
		/**
		*\fn int getValDe1()
		*\brief acces function
		*/
		int getValDe1();
		/**
		*\fn bool getValDe2()
		*\brief acces function
		*\return int, the value of the dice
		*/
		int getValDe2();
		/**
		*\fn bool getChoixDe1()
		*\brief acces function
		*\return int, the value of the dice
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
		*\fn void setCoul1(int COULEUR)
		*\brief function which change the value of the parameter _couleur1
		*/
		void setCoul1(int i);
		/**
		*\fn void setCoul2(int COULEUR)
		*\brief function which change the value of the parameter _couleur1
		*/
		void setCoul2(int i);
		/**
		*\fn void setCoul3(int COULEUR)
		*\brief function which change the value of the parameter _couleur1
		*/
		void setCoul3(int i);
		/**
		*\fn void setCoul4(int COULEUR)
		*\brief function which change the value of the parameter _couleur1
		*/
		void setCoul4(int i);


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
inline int Facade::getAngle(){return _angle;}
inline int Facade::getPuissance(){return _puissance;}
inline MoteurJeu* Facade::getMoteur(){return _moteur;}
inline void Facade::setCoul1(int i){ cout<<"setCoul1 : "<<i<<endl;_couleur1=i ;}
inline void Facade::setCoul2(int i){ cout<<"setCoul2 : "<<i<<endl;_couleur2=i ;}
inline void Facade::setCoul3(int i){ cout<<"setCoul3 : "<<i<<endl;_couleur3=i ;}
inline void Facade::setCoul4(int i){ cout<<"setCoul4 : "<<i<<endl;_couleur4=i ;}
inline void Facade::setValDe1(int d){ _valDe1=d ;}
inline void Facade::setValDe2(int d){ _valDe2=d ;}
inline int Facade::getValDe1(){ return _valDe1;}
inline int Facade::getValDe2(){ return _valDe2;}

extern "C" __declspec(dllexport) Facade* Facade_new();
extern "C" __declspec(dllexport) void Facade_delete(Facade* f);

#endif
