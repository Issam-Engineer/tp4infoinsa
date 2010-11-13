#pragma once
#include <vector>
#include <iostream>


#include "Coordonnee.h"
using namespace std;

class __declspec(dllexport)  Tir
{
private:
	vector<Coordonnee> tabDeCoord;
public:
	
	void add(int x,int y);
//	void add(vector<Coordonnee>& tabc);
	void affiche();
		
};

extern "C" __declspec(dllexport) Tir*  Tir_New();
extern "C" __declspec(dllexport) void  Tir_Delete(Tir* tdC);

