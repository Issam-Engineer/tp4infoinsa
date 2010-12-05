/**
* \file  CaseTresor.h
* \brief File containing the functionalities and the attributes of the CaseTresor class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "CaseContourIle.h"

class CaseTresor : public CaseContourIle
{

	public :

		/**
		* \fn Etat getEtat() 
		* \brief Function which gives the state associated to the class
		* \return Etat the associated state
		*/
		Etat getEtat();

}; 

/*inline Etat CaseTresor::getEtat(){
	return new Etat(EtatTresor);
}*/