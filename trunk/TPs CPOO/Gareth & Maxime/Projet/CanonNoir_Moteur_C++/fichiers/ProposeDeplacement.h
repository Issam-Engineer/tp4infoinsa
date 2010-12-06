/**
* \file  ProposeDeplacement.h
* \brief File containing the functionalities and the attributes of the ProposeDeplacement class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef PROPOSEDEPLACEMENT_H
#define PROPOSEDEPLACEMENT_H

/// <remarks>
/// execute() => affiche les possibilités de déplacement
/// 
/// </remarks>
class ProposeDeplacement : public Etat
{
	private :

		Moteur motor;

	protected :


	public :

		pair<int,int>[] tabCase;

	private :


	protected :


	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();

}; 

#endif
