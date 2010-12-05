/**
* \file  AttenteLancerDe.h
* \brief File containing the functionalities and the attributes of the AttenteLancerDe class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

/// <remarks>
/// execute() => qui appel la fonction Motor.de.lanceDe()
/// 
/// vérifier finPartie=false
/// </remarks>
class AttenteLancerDe : public Etat
{
	private :

		Moteur motor;

	protected :


	public :


	private :


	protected :


	public :
		/**
		*\fn void choisirDe()
		*\brief Function which chooses the dice to take in account
		*/
		virtual void choisirDe();
		/**
		*\fn void execute()
		*\brief Function which executes the current state
		*/
		virtual void execute();

}; 

