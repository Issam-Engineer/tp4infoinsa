﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include <cstdlib>
#include <iostream>

using namespace std;

class Case
{
	public :

		static int nbTotTresor;

	protected :

		pair<int,int>  position;
		bool accessible;
		int hauteur;

	public :

		//virtuelle pure
		virtual void getEtat() = 0;

		virtual int getHauteur();
		virtual bool accessible();
		virtual pair<int,int> getPosition();
		
}; 

inline bool Case::accessible(){
	return accessible;
}
inline int Case::getHauteur(){
	return hauteur;
}
inline pair<int,int> Case::getPosition(){
	return position;
}
