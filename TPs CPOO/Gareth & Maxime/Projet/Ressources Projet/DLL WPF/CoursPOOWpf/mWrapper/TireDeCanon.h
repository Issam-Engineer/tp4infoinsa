#pragma once
#include <vector>
#include <iostream>


#include "Coordonnee.h"
using namespace std;

class __declspec(dllexport)  TireDeCanon
{
private:
	vector<Coordonnee> tableauDeTire;
public:
	
	void add(int x,int y);
	void affiche();
		
};

extern "C" __declspec(dllexport) TireDeCanon*  TireDeCanon_New();
extern "C" __declspec(dllexport) void  TireDeCanon_Delete(TireDeCanon* tdC);

