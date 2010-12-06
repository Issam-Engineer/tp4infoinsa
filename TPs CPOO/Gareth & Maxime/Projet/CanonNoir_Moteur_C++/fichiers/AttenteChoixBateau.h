/**
* \file  AttenteChoixBateau.h
* \brief File containing the functionalities and the attributes of the AttenteChoixBateau class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef ATTENTECHOIXBATEAU_H
#define ATTENTECHOIXBATEAU_H

/// <remarks>Si le nbJoueur=2 Execute de l'état précédent propose cet état</remarks>
class AttenteChoixBateau : public Etat
{
	private :

		Moteur motor;

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

}; 

#endif
