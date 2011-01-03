/**
* \file  AttentePremLancerDe.h
* \brief File containing the functionalities and the attributes of the AttentePremLancerDe class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ATTENTEPREMLANCERDE_H
#define ATTENTEPREMLANCERDE_H

#include "MoteurJeu.h"
#include "Etat.h"

class AttentePremLancerDe : public Etat
{

	public :

		static int resDe[4];
		static int nbLance;
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		void execute();
		/**
		*\fn void determinerOrdre();
		*\brief permet de déterminer l'ordre des joueurs
		*/
		void determinerOrdre(); 
		/**
		*\fn int* getResDe()
		*\brief acces function
		*/
		int* getResDe();
		/**
		*\fn int getNbLance()
		*\brief acces function
		*/
		int getNbLance();
		/**
		*\fn void setNbLance(int i)
		*\brief function which changes the value of NbLance
		*/
		void setNbLance(int i);
		/**
		*\fn void setResDe(int i)
		*\brief function which add the score i to the table resDe
		*/
		void setResDe(int i);
}; 

inline int* AttentePremLancerDe::getResDe(){
	return resDe;
}
inline int AttentePremLancerDe::getNbLance(){
	return nbLance;
}


#endif
