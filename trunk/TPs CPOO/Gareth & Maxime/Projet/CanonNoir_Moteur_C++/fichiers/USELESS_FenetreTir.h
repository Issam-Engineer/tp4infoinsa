/**
* \file  FenetreTir.h
* \brief File containing the functionalities and the attributes of the FenetreTir class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef FENETRETIR_H
#define FENETRETIR_H

class __declspec(dllexport) FenetreTir
{



	public :

		virtual void champPuissance();
		virtual void champAngle();
		virtual void fermerFenetre();
		virtual void clicTir();
		virtual void rafraichir();
		virtual void clicRefuserDuel();

}; 

#endif
