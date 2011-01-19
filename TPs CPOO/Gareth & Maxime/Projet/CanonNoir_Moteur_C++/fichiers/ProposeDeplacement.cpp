/**
*\file  ProposeDeplacement.cpp
*\brief File containing the functionalities and the attributes of the ProposeDeplacement class
*\author Maxime HAVEZ
*\author Gareth THIVEUX
*\version 1.0
*/

//#include "StdAfx.h"
#include "ProposeDeplacement.h"
#include "Joueur.h"

ProposeDeplacement::ProposeDeplacement(MoteurJeu* m){
	motor=m;
	cout << "Constructeur : ProposeDeplacement" << endl;
}

void ProposeDeplacement::execute(){
	cout<<"ProposeDeplacement.execute()"<<endl;

	//Rendre les cases accessibles

	//Cas d'une caravelle
	if(motor->getNbJoueurs()==4 || motor->getNbJoueurs()==3){
		pair<int,int> casespossibles[24];
		int valde1 = motor->getDe()->getDe1();
		int valde2 = motor->getDe()->getDe2();
		int valdede = motor->getDe()->getSommeDe();
	
		pair<int,int> posit = motor->getJoueurInd(motor->getJCourant())->getBateau1().getPosition()->getPosition();
	}
		/*int x_actuel = posit.first;
		int y_actuel = posit.second;
		casespossibles[0] = make_pair(x_actuel,y_actuel);

		int x1 = x_actuel + valde1;
		int y1 = y_actuel;
		casespossibles[1] = make_pair(x1,y1);

		int x2 = x_actuel - valde1;
		int y2 = y_actuel;
		casespossibles[2] = make_pair(x2,y2);

		int x3 = x_actuel;
		int y3 = y_actuel + valde1;
		casespossibles[3] = make_pair(x3,y3);

		int x4 = x_actuel;
		int y4 = y_actuel - valde1;
		casespossibles[4] = make_pair(x4,y4);

		int x5 = x_actuel + valde1;
		int y5 = y_actuel + valde1;
		casespossibles[5] = make_pair(x5,y5);

		int x6 = x_actuel - valde1;
		int y6 = y_actuel + valde1;
		casespossibles[6] = make_pair(x6,y6);

		int x7 = x_actuel + valde1;
		int y7 = y_actuel - valde1;
		casespossibles[7] = make_pair(x7,y7);

		int x8 = x_actuel - valde1;
		int y8 = y_actuel - valde1;
		casespossibles[8] = make_pair(x8,y8);

		if(motor->getJoueurInd(motor->getJCourant())->getBateau1().type() == 'C'){
			int x9 = x_actuel + valde2;
			int y9 = y_actuel;
			casespossibles[9] = make_pair(x9,y9);
	
			int x10 = x_actuel - valde2;
			int y10 = y_actuel;
			casespossibles[10] = make_pair(x10,y10);

			int x11 = x_actuel;
			int y11 = y_actuel + valde2;
			casespossibles[11] = make_pair(x11,y11);

			int x12 = x_actuel;
			int y12 = y_actuel - valde2;
			casespossibles[12] = make_pair(x12,y12);

			int x13 = x_actuel + valde2;
			int y13 = y_actuel + valde2;
			casespossibles[13] = make_pair(x13,y13);

			int x14 = x_actuel - valde2;
			int y14 = y_actuel + valde2;
			casespossibles[14] = make_pair(x14,y14);

			int x15 = x_actuel + valde2;
			int y15 = y_actuel - valde2;
			casespossibles[15] = make_pair(x15,y15);

			int x16 = x_actuel - valde2;
			int y16 = y_actuel - valde2;
			casespossibles[16] = make_pair(x16,y16);

			int x17 = x_actuel + valdede;
			int y17 = y_actuel;
			casespossibles[17] = make_pair(x17,y17);

			int x18 = x_actuel - valdede;
			int y18 = y_actuel;
			casespossibles[18] = make_pair(x18,y18);

			int x19 = x_actuel;
			int y19 = y_actuel + valdede;
			casespossibles[19] = make_pair(x19,y19);

			int x20 = x_actuel;
			int y20 = y_actuel - valdede;
			casespossibles[20] = make_pair(x20,y20);

			int x21 = x_actuel + valdede;
			int y21 = y_actuel + valdede;
			casespossibles[21] = make_pair(x21,y21);

			int x22 = x_actuel - valdede;
			int y22 = y_actuel + valdede;
			casespossibles[22] = make_pair(x22,y22);

			int x23 = x_actuel + valdede;
			int y23 = y_actuel - valdede;
			casespossibles[23] = make_pair(x23,y23);

			int x24 = x_actuel - valdede;
			int y24 = y_actuel - valdede;
			casespossibles[24] = make_pair(x24,y24);

			for(int c=0;c<=24;c++){
				if(casespossibles[c].first>=0 && casespossibles[c].first<=10 &&
						casespossibles[c].second>=0 && casespossibles[c].first<=7){
							motor->setAccessible(casespossibles[c]);
				}
			}
		} else {
			for(int c=0;c<=8;c++){
				if(casespossibles[c].first>=0 && casespossibles[c].first<=10 &&
						casespossibles[c].second>=0 && casespossibles[c].first<=7){
							motor->setAccessible(casespossibles[c]);
				}
			}
		}
	}*/
	motor->modifCourant(ATTENTEDEPLACEMENT);
}