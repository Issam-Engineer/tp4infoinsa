﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

class CaseTresor : public CaseContourIle
{
	private :

		Etat EtatTresor;

	protected :


	public :


	private :


	protected :


	public :

		/**
		* \fn void getEtat() 
		* \brief Function which gives the state associated to the class
		* \return Etat the associated state
		*/
		void getEtat();

}; 

inline int CaseTresor::getEtat(){
	return EtatTresor;
}