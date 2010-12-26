/**
* \file  AffichageWPF.h
* \brief File containing the functionalities and the attributes of the AffichageWPF class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#ifndef AFFICHAGEWPF_H
#define AFFICHAGEWPF_H

class __declspec(dllexport) AffichageWPF
{


	public :

		virtual void clicDe();
		virtual void clicCase();
		virtual void clicLancerPartie();
		virtual void creerFenetreInit();
		virtual void rafraichir();
		virtual void creerFenetreTir();

}; 

#endif
