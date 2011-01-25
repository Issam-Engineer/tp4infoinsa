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

		/*bool _choixDe1;
		bool _choixDe2;
		bool _choix2De;*/

		int _clicX;
		int _clicY;

		int _angle;
		int _puissance;

		bool _initialiserOK;
		bool _debutPartie;

		bool _ProposerDeplacement;


		bool _enableClicDe;

		bool _choixBateau; // dit si on est à l'étape choixBateau

		int _coulBatCourant;

		bool _tresorRecup;

		//bool _bonPort;
		
		bool _partieTerminee;

		int sizeHistogramme; // pour pouvoir ajuster la taille de la fenêtre de Tir
		int* histogramme;

		int angle;
		int puissance;


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
		*\fn void setAngle(int a)
		*\brief Function which changes the angle 
		*/
		void setAngle(int a);
		/**
		*\fn void setPuissance(int p)
		*\brief Function which changes the puissance
		*/
		void setPuissance(int p);
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

		/**
		*\fn int getDe1()
		*\brief return the value of the motor De1
		**/
		int getDe1();

		/**
		*\fn int getDe2()
		*\brief return the value of the motor De1
		**/
		int getDe2();


		/**
		*\fn int getNumJCourant()
		*\return the number of the current Player
		**/
		int getNumJCourant();

		/**
		*\fn int getMotorNbJoueur()
		*\return the number of player
		**/
		int getMotorNbJoueur();

		/**
		*\fn void setInitialisationOk(bool b)
		*\brief initialize the attribute _initialiserOK to the boolean b
		**/
		void setInitialisationOK(bool b);

		/**
		*\fn bool getInitialisationOK()
		*\brief return the value of the attribute _initialiserOK
		*\return true if the attribute has been initialized to true
		**/
		bool getInitialisationOK();

		/**
		*\fn int getCoulPortJCourant()
		*\brief return the colour of the current player's harbour
		*\return int, the colour
		**/
		int getCoulPortJCourant();

		/**
		*\fn bool getAccessible()
		*\brief acces function
		*\return true if the square is accessible
		**/
		bool getAccessible(int x, int y);

		/**
		*\fn bool getProposerDeplacement()
		*\brief return the value of the attribute _ProposerDeplacement
		*\return true if the attribute is at true
		**/
		bool getProposerDeplacement();

		/**
		*\fn void setProposerDeplacement(bool b)
		*\brief change the value of the attribute _ProposerDeplacement
		**/
		void setProposerDeplacement(bool b);


		/**
		*\fn void setEnableClicDe(bool b)
		*\brief set enable or nor the boolean enableClicDe
		**/
		void setEnableClicDe(bool b);

		/**
		*\fn bool getEnableClicDe()
		*\brief return the value of the attribute enableClicDe
		*\return true if it is true
		**/
		bool getEnableClicDe();

		/**
		*\fn void setAccessibleAll(bool b)
		*\brief put all case accesibility to boolean b
		**/
		void setAccessibleAll(bool b);

		/**
		*\fn bool getChoixBateau()
		*\brief return the value of the attribute _choixBateau
		*\return true if it is true
		**/
		bool getChoixBateau();

		/**
		*\fn void setChoixBateau(bool b)
		*\brief puts the value of the attribute _choixBateau to boolean b
		**/
		void setChoixBateau(bool b);

		/**
		*\fn bool getCoulBateauCourant()
		*\brief acces function
		*\return the color of the current boat
		**/
		int getCoulBateauCourant();

		/**
		*\fn bool setCoulBateauCourant()
		*\brief put the value of the attribute _coulBatCourant to int c
		**/
		void setCoulBateauCourant(int c);

		/**
		*\fn bool getATresor()
		*\brief acces function
		*\return bool true if the current boat of the current player carries a treasure
		**/
		bool getATresor();

		/**
		*\fn bool setATresor()
		*\brief Puts the value of the attribute aTresor of the current player's current boat to bool b
		**/
		void setATresor(bool b);

		/**
		*\fn bool setPartieTerminee()
		*\brief Puts the value of the attribute _partieTerminee to bool b
		**/
		void setPartieTerminee(bool b);

		/**
		*\fn bool getPartieTerminee()
		*\brief Acces function
		*\return bool true if the game is finished
		**/
		bool getPartieTerminee();

		/**
		*\fn bool setTresorRecup()
		*\brief Puts the value of the attribute _tresorRecup to bool b
		**/
		void setTresorRecup(bool b);

		/**
		*\fn bool getTresorRecup()
		*\brief Acces function
		*\return bool true if a player has found a treasure
		**/
		bool getTresorRecup();

		/**
		*\fn bool setBonPort()
		*\brief Puts the value of the attribute bonPort of the current player's current boat to bool b
		**/
		void setBonPort(bool b);

		/**
		*\fn bool getBonPort()
		*\brief Acces function
		*\return bool true if a player is in his harbour
		**/
		bool getBonPort();

		/**
		*\fn int getEtatCourant()
		*\brief Acces function
		*\return int, the current state
		**/
		int getEtatCourant();

		/**
		*\fn int getTypeBateauCourant()
		*\brief Acces function
		*\return int, the type of the current player's current boat
		**/
		int getTypeBateauCourant();

		/**
		*\fn void SaveXAttaquant()
		*\brief used when there is an EtatTir to save the value x
		*/
		void SaveXAttaquant();

		/**
		*\fn void SaveYAttaquant()
		*\brief used when there is an EtatTir to save the value y
		*/
		void SaveYAttaquant();

		/**
		*\fn int getSizeHistogramme() 
		*\brief return the attribute SizeHistogramme
		*\return the value of the attribute
		**/
		int getSizeHistogramme();
		/**
		*\fn void setSizeHistogramme() 
		*\brief change the value of the sizeHistogramme attribute
		**/
		void setSizeHistogramme(int i);
		
		/**
		*\fn double getLongueurHisto(int ind)
		*\brief give the value of the longueur in the histogramme
		*\return double 
		**/
		double getLongueurHisto(int ind);

		/**
		*\fn double getHauteurHisto(int ind)
		*\brief give the value of the hauteur in the histogramme
		*\return double 
		**/
		double getHauteurHisto(int ind);

		
}; 

inline bool Facade::getClicDe(){ return _clicDe;}
inline bool Facade::getAfficherDe1(){ return _afficherDe1;}
inline bool Facade::getAfficherDe2(){ return _afficherDe2;}
inline int Facade::getX(){return _clicX;}
inline int Facade::getY(){return _clicY;}
inline int Facade::getAngle(){return _angle;}
inline int Facade::getPuissance(){return _puissance;}
inline void Facade::setAngle(int a){_angle=a;}
inline void Facade::setPuissance(int p){_puissance=p;}
inline MoteurJeu* Facade::getMoteur(){return _moteur;}
inline void Facade::setCoul1(int i){ cout<<"setCoul1 : "<<i<<endl;_couleur1=i ;}
inline void Facade::setCoul2(int i){ cout<<"setCoul2 : "<<i<<endl;_couleur2=i ;}
inline void Facade::setCoul3(int i){ cout<<"setCoul3 : "<<i<<endl;_couleur3=i ;}
inline void Facade::setCoul4(int i){ cout<<"setCoul4 : "<<i<<endl;_couleur4=i ;}
inline void Facade::setInitialisationOK(bool b){_initialiserOK=b;}
inline bool Facade::getInitialisationOK(){return _initialiserOK;}
inline bool Facade::getProposerDeplacement(){
	cout<<"getProposerDeplacement ="<<_ProposerDeplacement<<endl;return _ProposerDeplacement;
}
inline void Facade::setProposerDeplacement(bool b){ _ProposerDeplacement = b; }
inline void Facade::setEnableClicDe(bool b){ _enableClicDe=b; }
inline bool Facade::getEnableClicDe(){ return _enableClicDe; }
inline void Facade::setChoixBateau(bool b){ _choixBateau=b; }
inline bool Facade::getChoixBateau(){ return _choixBateau; }

inline void Facade::setPartieTerminee(bool b){ _partieTerminee=b; }
inline bool Facade::getPartieTerminee(){ return _partieTerminee; }

inline void Facade::setTresorRecup(bool b){ _tresorRecup=b; }
inline bool Facade::getTresorRecup(){ return _tresorRecup; }

//inline void Facade::setBonPort(bool b){ _bonPort=b; }
//inline bool Facade::getBonPort(){ return _bonPort; }

inline void Facade::setSizeHistogramme(int s){sizeHistogramme=s;cout<<"longueur histo :"<<sizeHistogramme<<endl;}
inline int Facade::getSizeHistogramme(){return sizeHistogramme;}


extern "C" __declspec(dllexport) Facade* Facade_new();
extern "C" __declspec(dllexport) void Facade_delete(Facade* f);

#endif
