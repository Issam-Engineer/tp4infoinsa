/**
* \file  AttentePremLancerDe.h
* \brief File containing the functionalities and the attributes of the AttentePremLancerDe class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ATTENTEPREMLANCERDE_H
#define ATTENTEPREMLANCERDE_H

/// <remarks>
/// le tableau resDe contient les résultats du lancement des deux dé par joueur(non ordonné)
/// j_indJoueur = 0 
/// </remarks>
class AttentePremLancerDe : public Etat
{
	private :

		static int[] resDe;
		Moteur motor;
		static int nbLance;

	protected :


	public :


	private :


	protected :


	public :
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();
		virtual void determinerOrdre();

}; 

#endif
