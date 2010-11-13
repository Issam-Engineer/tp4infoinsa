#include "Coordonnee.h"


#include <cmath>
#include <iostream> 
using namespace std;

Coordonnee::Coordonnee(int x, int y) {
	Cx=x;
	Cy=y;
}

Coordonnee::Coordonnee() {
	Cx=0;
	Cy=0;
}
 
void Coordonnee::setX(int x)
{
    Cx = x;
}
void Coordonnee::setY(int y)
{
    Cy = y;
}
 
double Coordonnee::getX()
{
    return Cx;
} 
 
double Coordonnee::getY()
{
    return Cy;
} 
 
double Coordonnee::distance(const Coordonnee &P)
{
    double dx, dy;
    dx = Cx - P.Cx;
    dy = Cy - P.Cy;
    return sqrt(dx*dx + dy*dy); 
}
 
Coordonnee Coordonnee::milieu(const Coordonnee &P)
{
    Coordonnee M(0,0);
    M.Cx = (P.Cx + Cx) /2; 
    M.Cy = (P.Cy + Cy) /2; 
    return M;
}
 
void Coordonnee::saisir()
{
    cout << "Tapez l'abscisse : "; cin >> Cx;
    cout << "Tapez l'ordonnée : "; cin >> Cy;
} 
 
void Coordonnee::affiche()
{
    cout << "( " << Cx << "," << Cy << ") ";
}

