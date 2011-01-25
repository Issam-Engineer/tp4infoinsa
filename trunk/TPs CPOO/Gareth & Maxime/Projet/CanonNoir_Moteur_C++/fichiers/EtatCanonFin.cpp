/**
*\file EtatCanonFin.cpp
*\brief File which contains the functions and code of the EtatCanonFin class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
#include "EtatCanonFin.h"


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
	y = -0.5 * 9.81 * pow(x,2) * (1+ pow(tan(angle*PI/180),2))/ pow((double)(puissance/10),2) + x * tan(angle*PI/180);

}