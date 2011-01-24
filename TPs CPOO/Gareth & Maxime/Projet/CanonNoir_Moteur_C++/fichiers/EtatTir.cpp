/**
*\file EtatTir.cpp
*\brief File which contains the functions and code of the EtatTir class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/
//#include "StdAfx.h"
#include "EtatTir.h"
#include "Plateau.h"
//#include "FenetreTir.h"


EtatTir::EtatTir(MoteurJeu * m){
	motor = m;
	init(0,0);
	cout << "Constructeur : EtatTir" << endl;
}


void EtatTir::execute(){
	//Si ce n'est pas un Duel (donc un tir via une case Canon Noir), on attend que le joueur choisisse le bateau adversaire à viser 
	cout<<"EtatTir.execute()"<<endl;
	calculHistogramme(make_pair(4,7),make_pair(5,3));
	motor->getFacade()->setSizeHistogramme(motor->histogramme.size());

}


void EtatTir::calculHistogramme (pair<int,int> p1,pair<int,int> p2){

	int x1 = p1.first;
	int x2 = p2.first;
	int y1 = p1.second;
	int y2 = p2.second;

	// coordonnees des intersections avec les limites entre cases
	std::list < std :: pair < double , double > > intersections ;

	// donnees de l' histogramme
	std::list < std :: pair < double , double > >::iterator it , end ;

	double h, l, xa , ya , xb , yb;
	int x, y, i, j;
	int inc_x , inc_y ;


	if(x1 < x2) {
		inc_x = 1;
		x = (( int ) x1) + 1;
	}else {
		inc_x = -1;
		x = (( int ) x1);
	}
	if(y1 < y2) {
		inc_y = 1;
		y = (( int ) y1) + 1;
	} else {
		inc_y = -1;
		y = (( int ) y1);
	}

	while (x * inc_x <= x2 * inc_x && y * inc_y <= y2 * inc_y ) {

		cout<< "x2 =" << x2 <<" x1 ="<<x1<<endl;
		cout<< "y2 =" << y2 << " y1 ="<<y1<<endl;

		cout<< "inc_x =" << inc_x << endl;
		cout<< "inc_y =" << inc_x << endl;

		cout<< "x =" << x << endl;
		cout<< "y =" << y << endl;

		if ( f(x,x1,x2,y1,y2) == y) {

			cout<<"f==y"<<endl;
			cout<<"f(x,x1,x2,y1,y2)"<<f(x,x1,x2,y1,y2)<<endl;
			intersections.push_back( pair< double , double >(x, y));
			x += inc_x ;
			if ( y2 == y1 ){
					
			}else{
				y += inc_y ;
			}

		} else if(f(x,x1,x2,y1,y2) * inc_y < y * inc_y ) {
			cout<<"f*inc_y < y*inc_y"<<endl;
			cout<<"f(x,x1,x2,y1,y2)"<<f(x,x1,x2,y1,y2)<<endl;
			intersections.push_back( pair< double , double >(x, f(x,x1,x2,y1,y2) ));
			x += inc_x ;

		} else {
			cout<<"else"<<endl;
			cout<<"g(x,x1,x2,y1,y2)"<<g(x,x1,x2,y1,y2)<<endl;
			intersections.push_back( pair< double , double >( g(y,x1,x2,y1,y2) , y ));
			y += inc_y ;
		}
	}

	cout<<"intersection.size() = "<<intersections.size()<<endl;

	if( intersections.size () >= 1) {

		xb = x1;
		yb = y1;
		intersections.push_back(make_pair(x2,y2));
		it = intersections.begin();
		end = intersections.end();
		for (; it != end; ++ it) {
			
			xa = xb;
			ya = yb;		
			xb = it->first ;		
			yb = it->second ;
			i = ( int ) min (xa,xb) + 1;		
			j = ( int ) min (ya,yb) + 1;

			h = motor->getPlateau()->getCase(make_pair(i,j))->getHauteur();	// Hauteur de la case de coordonnée i,j		
			l = sqrt (( xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));	
			cout<<"longueur :"<<l<<" hauteur :"<<h<<endl;
			motor->histogramme.push_back ( std::pair<double , double >(l, h));	
		}
	}
}

double EtatTir::f(int x,int x1,int x2,int y1,int y2){
	return ((y2 - y1)*x + (x2*y1 - x1*y2)) / (x2 - x1);
}

double EtatTir::g(int y,int x1,int x2,int y1,int y2){
	return ((x2 - x1)*y - (x2*y1 - x1*y2)) / (y2 -y1) ;
}