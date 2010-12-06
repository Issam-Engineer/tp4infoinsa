/**
* \file  AttenteDeplacement.h
* \brief File containing the functionalities and the attributes of the AttenteDeplacement class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ATTENTEDEPLACEMENT_H
#define ATTENTEDEPLACEMENT_H

/// <remarks>execute() => amène le Joueur sur une case. Selon la case on lance  un état Tir, Depot, </remarks>
class AttenteDeplacement : public Etat
{
	private :

		MoteurJeu motor;

	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();

}; 

#endif
