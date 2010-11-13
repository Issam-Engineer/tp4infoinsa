#pragma once
class Coordonnee
{
public:
	Coordonnee(int x, int y);
	Coordonnee();
    void setX(int x);
    void setY(int y);
    double getX();
    double getY(); 
    double distance(const Coordonnee &P);
    Coordonnee milieu(const Coordonnee &P);
    void saisir();
    void affiche();
  private: 
    int Cx,Cy;
};

