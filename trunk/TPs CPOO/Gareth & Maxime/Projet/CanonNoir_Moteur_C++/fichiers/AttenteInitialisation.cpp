/**
* \file  AttenteInitialisation.cpp
* \brief File which contains the functions and code of the AttenteInitialisation class
* \author Maxime HAVEZ
* \author Gareth THIVEUX
* \version 1.0
*/

#include "AttenteInitialisation.h"
#include "AttentePremLancerDe.h"
#include "Joueur.h"
#include "Plateau.h"

AttenteInitialisation::AttenteInitialisation(MoteurJeu* m){
	motor=m;
	cout << "Constructeur : AttenteInitialisation" << endl;
}

void AttenteInitialisation::execute(){
	/*cout << "AttenteInitialisation.execute()"<<endl;
	cout << "motor->getFacade()->_couleur1 ="<<motor->getFacade()->_couleur1<<endl;
	cout << "motor->getFacade()->_couleur2 ="<<motor->getFacade()->_couleur2<<endl;
	cout << "motor->getFacade()->_couleur3 ="<<motor->getFacade()->_couleur3<<endl;
	cout << "motor->getFacade()->_couleur4 ="<<motor->getFacade()->_couleur4<<endl;
	cout << "motor->getNbJoueurs() ="<<motor->getNbJoueurs()<<endl;*/


	if( ((motor->getFacade())->_couleur1!=0 && (motor->getFacade())->_couleur2!=0) &&
		((motor->getFacade())->_couleur3!=0 && (motor->getFacade())->_couleur4!=0) && 
		(motor->getNbJoueurs()==2)){ //ON EST DANS LE CAS OU L'ON A DEUX JOUEURS
			motor->setTabJoueurs(0,*new Joueur(1, 
													(CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur1),
													(CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur3))); cout<<"Joueur1 initialise "<<endl;
			motor->setTabJoueurs(1,*new Joueur(2, 
													(CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur2),
													(CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur4))); cout<<"Joueur2 initialise"<<endl;
			motor->modifCourant(ATTENTEPREMLANCERDE);
			cout<<"Etat suivant : ATTENTEPREMLANCERDE"<<endl;
	}		
	else if((((motor->getFacade())->_couleur1!=0 && (motor->getFacade())->_couleur2!=0 && (motor->getFacade())->_couleur3!=0)) &&				(motor->getNbJoueurs()==3)){ 

			motor->setTabJoueurs(0,*new Joueur(1, (CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur1))); cout<<"Joueur1 initialise"<<endl;
			motor->setTabJoueurs(1,*new Joueur(2, (CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur2))); cout<<"Joueur2 initialise"<<endl;
			motor->setTabJoueurs(2,*new Joueur(3, (CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur3))); cout<<"Joueur3 initialise"<<endl;
			motor->modifCourant(ATTENTEPREMLANCERDE);
			cout<<"Etat suivant : ATTENTEPREMLANCERDE"<<endl;

	}
	else if((((motor->getFacade())->_couleur1!=0 && (motor->getFacade())->_couleur2!=0 && 
			(motor->getFacade())->_couleur3!=0) && (motor->getFacade())->_couleur4!=0) &&				
			(motor->getNbJoueurs()==4)){ 

			/*	motor->getJoueurInd(0)->setNumero(1);
				motor->getJoueurInd(1)->setNumero(2);
				motor->getJoueurInd(2)->setNumero(3);
				motor->getJoueurInd(3)->setNumero(4);

				motor->getJoueurInd(0)->setCasePort1((CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur1));
				motor->getJoueurInd(1)->setCasePort1((CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur2));
				motor->getJoueurInd(2)->setCasePort1((CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur3));
				motor->getJoueurInd(3)->setCasePort1((CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur4));*/
	
			motor->setTabJoueurs(0,*new Joueur(1, (CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur1)));cout<<"Joueur1 initialise"<<endl;
			motor->setTabJoueurs(1,*new Joueur(2, (CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur2)));cout<<"Joueur2 initialise"<<endl;
			motor->setTabJoueurs(2,*new Joueur(3, (CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur3)));cout<<"Joueur3 initialise"<<endl;
			motor->setTabJoueurs(3,*new Joueur(4, (CasePort*) motor->getPlateau()->getCasePort(motor->getFacade()->_couleur4)));cout<<"Joueur4 initialise"<<endl;
			
			cout<<"couleur du port du Joueur 4 :"
				<< motor->getJoueurInd(3)->getPort1()->getCouleur() 
				<< "et position :" 
				<< motor->getJoueurInd(3)->getPort1()->getPosition().first << "," 
				<< motor->getJoueurInd(3)->getPort1()->getPosition().second
				<< endl;

			cout<<"num du Joueur 4 :"<< motor->getJoueurInd(3)->getNumero()<<endl;
			
			motor->modifCourant(ATTENTEPREMLANCERDE);
			cout<<"Etat suivant : ATTENTEPREMLANCERDE"<<endl;

	}else{

		cerr<<"ERREUR : AttenteNbJoueurs : Facade::nb_joueur n'a pas une valeur correcte"<<endl;

	}
}