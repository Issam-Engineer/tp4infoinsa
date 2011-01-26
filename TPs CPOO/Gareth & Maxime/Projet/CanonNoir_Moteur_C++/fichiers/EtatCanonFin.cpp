/**
*\file EtatCanonFin.cpp
*\brief File which contains the functions and code of the EtatCanonFin class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
#include "EtatCanonFin.h"
#include "Joueur.h"
#include "Fregate.h"
#include "Radeau.h"


EtatCanonFin::EtatCanonFin(MoteurJeu * m){
	motor=m;
	init(0,0);
}

void EtatCanonFin::execute(){
	cout<<"EtatTCanonFin.execute()"<<endl;

	angle = motor->getFacade()->getAngle();
	puissance = motor->getFacade()->getPuissance();

	bool touche = tir();

	if(touche){
		cout<<"TOUCHE"<<endl;
		Bateau* res;

		if(motor->getNbJoueurs()==2){

			cout<<"Attaque NbJoueur = 2"<<endl;
			for(int i=0; i<motor->getNbJoueurs(); i++){
				if(motor->getJoueurInd(i)->bateauAtPos(make_pair(motor->getFacade()->getX(),motor->getFacade()->getY())) == true){
					res = motor->getJoueurInd(i)->getBateauPos(make_pair(motor->getFacade()->getX(),motor->getFacade()->getY()));
				}
			}

			/*if(res->type() == 'C'){
				if(res->getATresor() == true){
				res = new Fregate();
				res->setATresor(true);
				motor->getFacade()->setTypeBat(res->getPort()->getCouleur(),2);
				} else {
					res = new Fregate();
					motor->getFacade()->setTypeBat(res->getPort()->getCouleur(),2);
				} 
			} else if (res->type() == 'F') {
				res = new Radeau();
				res->setATresor(false);
				motor->getFacade()->setTypeBat(res->getPort()->getCouleur(),1);
			}*/


		}else{// NB JOUEURS != 2

			cout<<"Attaque NbJoueur != 2"<<endl;
			int indice;
			for(int i=0; i<motor->getNbJoueurs(); i++){

				if(motor->getJoueurInd(i)->getBateau1()->getPosition()->getPosition() ==
					make_pair(motor->getFacade()->getX(),motor->getFacade()->getY()))
				{
					res = motor->getJoueurInd(i)->getBateau1();
					indice = i;
				}
			}
			
			if(res->type() == 'C'){
				if(res->getATresor() == true){
					cout<<"tir et trésor -> il devient frégate"<<endl;
					motor->getJoueurInd(indice)->setBateau1(new Fregate());
					motor->getJoueurInd(indice)->getBateau1()->setATresor(true);
					motor->getFacade()->setTypeBat(res->getPort()->getCouleur(),2);
				} else {
					cout<<"tir mais pas de trésor -> il devient frégate"<<endl;
					motor->getJoueurInd(indice)->setBateau1(new Fregate());
					motor->getFacade()->setTypeBat(res->getPort()->getCouleur(),2);
				} 
			} else if (res->type() == 'F') {
				motor->getJoueurInd(indice)->setBateau1(new Radeau());
				motor->getJoueurInd(indice)->getBateau1()->setATresor(false);
				motor->getFacade()->setTypeBat(res->getPort()->getCouleur(),1);
			}
			
		}

		
	}else{

		cout<<"RATE"<<endl;

	}

	motor->setJCourant(motor->getJCourant()+1);
	motor->modifCourant(ATTENTELANCERDE);
}



// SIMULE LE TIR !
/*int Random2 (int _iMin, int _iMax)
{
	return (_iMin + (rand () % (_iMax-_iMin+1)));
}*/

bool EtatCanonFin::tir(){

	//double y = 
	vector<std::pair <double,double> >:: iterator it , end ;
	bool colision = false ;
	double x, h;
	if( motor->histogramme.size() > 1) {
		it = motor->histogramme.begin();
		end = motor->histogramme.end();
		h = it->second ;
		x = it->first ;
		++ it;
		for (; it != end && !colision ; ++it) {
			if(z(x)<=h || z(x)<=it->second ) {
				colision = true ;
			}
			x += it->first ;
		}
	}
	return colision ;
}

double EtatCanonFin::z(double x){

	double y;
	return y = -0.5 * 9.81 * pow(x,2) * (1+ pow(tan(angle*PI/180),2))/ pow((double)(puissance/10),2) + x * tan(angle*PI/180);
	return y;
}