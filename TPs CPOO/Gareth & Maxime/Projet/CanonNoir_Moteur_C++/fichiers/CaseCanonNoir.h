/**
* \file  CaseCanonNoir.h
* \brief File containing the functionalities and the attributes of the CaseCanonNoir class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "CaseContourIle.h"

class CaseCanonNoir : public CaseContourIle
{

	public :

		/**
		* \fn Etat getEtat() 
		* \brief Function which gives the state associated to the class
		* \return Etat the associated state
		*/
		virtual Etat getEtat();

}; 

