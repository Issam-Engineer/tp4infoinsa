﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

class Joueur
{
	private :


	protected :


	public :

		string nom;
		int numero;
		bool gagnant;

	private :


	protected :


	public :

		virtual string nom();
		virtual int numero();
		virtual void modifierNumero(int i);
		Joueur(string n, int coul, int num);
		virtual Bateau getBateau(int i);

}; 

