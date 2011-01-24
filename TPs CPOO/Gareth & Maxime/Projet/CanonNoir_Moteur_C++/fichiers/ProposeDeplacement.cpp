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

void ProposeDeplacement::traverseIle(pair<int,int>* tab, int i){
	for(int d=(tab[0].first); d<=(tab[i].first); d++){
		for(int e=(tab[0].second); e<=(tab[i].second); e++){
			if((d == 3  || d == 4 || d == 8 || d == 9) && (e == 3  || e == 4 || e == 5 || e == 6)){
				motor->setInaccessible(tab[i]);
			}
		}
	}

	for(int d=(tab[0].first); d<=(tab[i].first); d++){
		for(int e=(tab[0].second); e>=(tab[i].second); e--){
			if((d == 3  || d == 4 || d == 8 || d == 9) && (e == 3  || e == 4 || e == 5 || e == 6)){
				motor->setInaccessible(tab[i]);
			}
		}
	}
				
	for(int d=(tab[0].first); d>=(tab[i].first); d--){
		for(int e=(tab[0].second); e<=(tab[i].second); e++){
			if((d == 3  || d == 4 || d == 8 || d == 9) && (e == 3  || e == 4 || e == 5 || e == 6)){
				motor->setInaccessible(tab[i]);
			}
		}
	}
				
	for(int d=(tab[0].first); d>=(tab[i].first); d--){
		for(int e=(tab[0].second); e>=(tab[i].second); e--){
			if((d == 3  || d == 4 || d == 8 || d == 9) && (e == 3  || e == 4 || e == 5 || e == 6)){
				//motor->setInaccessible(tab[i]);
			}
		}
	}
}








void ProposeDeplacement::execute(){

		cout<<"ProposeDeplacement.execute()"<<endl;

		pair<int,int> casespossibles[24];
		int valde1 = motor->getDe()->getDe1();
		int valde2 = motor->getDe()->getDe2();
		int valdede = motor->getDe()->getSommeDe();
	
		
		//motor->getJoueurInd(motor->getJCourant())->getBateau1()->getPosition()->getPosition();
		pair<int,int> posit =motor->getJoueurInd(motor->getJCourant())->getBateauCourant()->getPosition()->getPosition(); 

		cout<<"Position x :"<<posit.first<<" et y :"<<posit.second<<endl;
		cout<<"Type du bateau du joueur : " << motor->getJoueurInd(motor->getJCourant())->getBateauCourant()->type() <<endl;
	
		int indice=0;
		int x_actuel = posit.first;
		int y_actuel = posit.second;

		casespossibles[indice] = make_pair(x_actuel,y_actuel);

		indice++;

		int x1 = x_actuel + valde1;
		int y1 = y_actuel;
		if(x1>0 && x1<=11 && y1>0 && y1<=8){
			casespossibles[indice] = make_pair(x1,y1);
			indice++;
		}
		int x2 = x_actuel - valde1;
		int y2 = y_actuel;
		if(x2>0 && x2<=11 && y2>0 && y2<=8){
			casespossibles[indice] = make_pair(x2,y2);
			indice++;
		}
		int x3 = x_actuel;
		int y3 = y_actuel + valde1;
		if(x3>0 && x3<=11 && y3>0 && y3<=8){
			casespossibles[indice] = make_pair(x3,y3);
			indice++;
		}
		int x4 = x_actuel;
		int y4 = y_actuel - valde1;
		if(x4>0 && x4<=11 && y4>0 && y4<=8){
			casespossibles[indice] = make_pair(x4,y4);
			indice++;
		}
		int x5 = x_actuel + valde1;
		int y5 = y_actuel + valde1;
		if(x5>0 && x5<=11 && y5>0 && y5<=8){
			casespossibles[indice] = make_pair(x5,y5);
			indice++;
		}
		int x6 = x_actuel - valde1;
		int y6 = y_actuel + valde1;
		if(x6>0 && x6<=11 && y6>0 && y6<=8){
			casespossibles[indice] = make_pair(x6,y6);
			indice++;
		}
		int x7 = x_actuel + valde1;
		int y7 = y_actuel - valde1;
		if(x7>0 && x7<=11 && y7>0 && y7<=8){
			casespossibles[indice] = make_pair(x7,y7);
			indice++;
		}
		int x8 = x_actuel - valde1;
		int y8 = y_actuel - valde1;
		if(x8>0 && x8<=11 && y8>0 && y8<=8){
			casespossibles[indice] = make_pair(x8,y8);
			indice++;
		}

		
		//Cas d'une caravelle
		if( motor->getJoueurInd(motor->getJCourant())->getBateauCourant()->type() == 'C'){

			cout<<"Le joueur possède une caravelle -> Proposer les deux dés et la somme"<<endl;

			int x9 = x_actuel + valde2;
			int y9 = y_actuel;
			if(x9>0 && x9<=11 && y9>0 && y9<=8){
				casespossibles[indice] = make_pair(x9,y9);
				indice++;
			}
			int x10 = x_actuel - valde2;
			int y10 = y_actuel;
			if(x10>0 && x10<=11 && y10>0 && y10<=8){
				casespossibles[indice] = make_pair(x10,y10);
				indice++;
			}
			int x11 = x_actuel;
			int y11 = y_actuel + valde2;
			if(x11>0 && x11<=11 && y11>0 && y11<=8){
				casespossibles[indice] = make_pair(x11,y11);
				indice++;
			}
			int x12 = x_actuel;
			int y12 = y_actuel - valde2;
			if(x12>0 && x12<=11 && y12>0 && y12<=8){
				casespossibles[indice] = make_pair(x12,y12);
				indice++;
			}
			int x13 = x_actuel + valde2;
			int y13 = y_actuel + valde2;
			if(x13>0 && x13<=11 && y13>0 && y13<=8){
				casespossibles[indice] = make_pair(x13,y13);
				indice++;
			}
			int x14 = x_actuel - valde2;
			int y14 = y_actuel + valde2;
			if(x14>0 && x14<=11 && y14>0 && y14<=8){
				casespossibles[indice] = make_pair(x14,y14);
				indice++;
			}
			int x15 = x_actuel + valde2;
			int y15 = y_actuel - valde2;
			if(x15>0 && x15<=11 && y15>0 && y15<=8){
				casespossibles[indice] = make_pair(x15,y15);
				indice++;
			}
			int x16 = x_actuel - valde2;
			int y16 = y_actuel - valde2;
			if(x16>0 && x16<=11 && y16>0 && y16<=8){
				casespossibles[16] = make_pair(x16,y16);
				indice++;
			}
			int x17 = x_actuel + valdede;
			int y17 = y_actuel;
			if(x17>0 && x17<=11 && y17>0 && y17<=8){
				casespossibles[indice] = make_pair(x17,y17);
				indice++;
			}
			int x18 = x_actuel - valdede;
			int y18 = y_actuel;
			if(x18>0 && x18<=11 && y18>0 && y18<=8){
				casespossibles[indice] = make_pair(x18,y18);
				indice++;
			}
			int x19 = x_actuel;
			int y19 = y_actuel + valdede;
			if(x19>0 && x19<=11 && y19>0 && y19<=8){
				casespossibles[indice] = make_pair(x19,y19);
				indice++;
			}
			int x20 = x_actuel;
			int y20 = y_actuel - valdede;
			if(x20>0 && x20<=11 && y20>0 && y20<=8){
				casespossibles[indice] = make_pair(x20,y20);
				indice++;
			}
			int x21 = x_actuel + valdede;
			int y21 = y_actuel + valdede;
			if(x21>0 && x21<=11 && y21>0 && y21<=8){
				casespossibles[indice] = make_pair(x21,y21);
				indice++;
			}
			int x22 = x_actuel - valdede;
			int y22 = y_actuel + valdede;
			if(x22>0 && x22<=11 && y22>0 && y22<=8){
				casespossibles[indice] = make_pair(x22,y22);
				indice++;
			}
			int x23 = x_actuel + valdede;
			int y23 = y_actuel - valdede;
			if(x23>0 && x23<=11 && y23>0 && y23<=8){
				casespossibles[indice] = make_pair(x23,y23);
				indice++;
			}
			int x24 = x_actuel - valdede;
			int y24 = y_actuel - valdede;
			if(x24>0 && x24<=11 && y24>0 && y24<=8){
				casespossibles[indice] = make_pair(x24,y24);
				indice++;
			}

			for(int c=0;c<indice;c++){
				if(casespossibles[c].first>=1 && casespossibles[c].first<=11 &&
					casespossibles[c].second>=1 && casespossibles[c].second<=8){
								motor->setAccessible(casespossibles[c]);
				}
				traverseIle(casespossibles, c);
			}
		} else {
			for(int c=0; c<indice ;c++){
				if(casespossibles[c].first>=1 && casespossibles[c].first<=11 &&
						casespossibles[c].second>=1 && casespossibles[c].second<=8){
							motor->setAccessible(casespossibles[c]);
							cout<<"est accessible la case"<< casespossibles[c].first<<" "<<casespossibles[c].second<<endl;

				}
				traverseIle(casespossibles, c);
			}
		}
		motor->getFacade()->setCoulBateauCourant(motor->getJoueurInd(motor->getJCourant())->getBateauCourant()->getCouleur());
		motor->modifCourant(ATTENTEDEPLACEMENT);
		
	
}