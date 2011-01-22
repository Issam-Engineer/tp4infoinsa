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

	//if(motor->getNbJoueurs()==4 || motor->getNbJoueurs()==3 /*Finallement, je pense que c'est pareil pour deux joueurs sauf qu'il a choisit son bateau avant*/){
		//pair<int,int> casespossibles[24];
		pair<int,int> casespossibles[48];
		int valde1 = motor->getDe()->getDe1();
		int valde2 = motor->getDe()->getDe2();
		int valdede = motor->getDe()->getSommeDe();
	

		pair<int,int> posit = motor->getJoueurInd(motor->getJCourant())->getBateau1()->getPosition()->getPosition();
		cout<<"Position x :"<<posit.first<<" et y :"<<posit.second<<endl;
		cout<<"Type du bateau du joueur : " << motor->getJoueurInd(motor->getJCourant())->getBateau1()->type() <<endl;
	
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
		if( motor->getJoueurInd(motor->getJCourant())->getBateau1()->type() == 'C'){

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
				}
				traverseIle(casespossibles, c);
			}
		}

		motor->modifCourant(ATTENTEDEPLACEMENT);
		
		// CAS AVEC DEUX JOUEURS
		/*if(motor->getNbJoueurs()==2){

			pair<int,int> posit2 = motor->getJoueurInd(motor->getJCourant())->getBateau2()->getPosition()->getPosition();
			cout<<"Position du bateau 2 : x :"<<posit2.first<<" et y :"<<posit2.second<<endl;
			cout<<"Type du bateau2 du joueur : " << motor->getJoueurInd(motor->getJCourant())->getBateau2()->type() <<endl;

			int x_actuel2 = posit2.first;
			int y_actuel2 = posit2.second;

			casespossibles[indice] = make_pair(x_actuel2,y_actuel2);
			indice++;
			

			int x12 = x_actuel2 + valde1;
			int y12 = y_actuel2;
			if(x12>0 && x12<=11 && y12>0 && y12<=8){
				casespossibles[indice] = make_pair(x12,y12);
				indice++;
			}
			int x22 = x_actuel2 - valde1;
			int y22 = y_actuel2;
			if(x22>0 && x22<=11 && y22>0 && y22<=8){
				casespossibles[indice] = make_pair(x22,y22);
				indice++;
			}
			int x3 = x_actuel2;
			int y3 = y_actuel2 + valde1;
			if(x3>0 && x3<=11 && y3>0 && y3<=8){
				casespossibles[indice] = make_pair(x3,y3);
				indice++;
			}
			int x42 = x_actuel2;
			int y42 = y_actuel2 - valde1;
			if(x42>0 && x42<=11 && y42>0 && y42<=8){
				casespossibles[indice] = make_pair(x42,y42);
				indice++;
			}
			int x52 = x_actuel2 + valde1;
			int y52 = y_actuel2 + valde1;
			if(x52>0 && x52<=11 && y52>0 && y52<=8){
				casespossibles[indice] = make_pair(x52,y52);
				indice++;
			}
			int x62 = x_actuel2 - valde1;
			int y62 = y_actuel2 + valde1;
			if(x62>0 && x62<=11 && y62>0 && y62<=8){
				casespossibles[indice] = make_pair(x62,y62);
				indice++;
			}
			int x72 = x_actuel2 + valde1;
			int y72 = y_actuel2 - valde1;
			if(x72>0 && x72<=11 && y72>0 && y72<=8){
				casespossibles[indice] = make_pair(x72,y72);
				indice++;
			}
			int x82 = x_actuel2 - valde1;
			int y82 = y_actuel2 - valde1;
			if(x82>0 && x82<=11 && y82>0 && y82<=8){
				casespossibles[indice] = make_pair(x82,y82);
				indice++;
			}

			
			//Cas d'une caravelle
			if( motor->getJoueurInd(motor->getJCourant())->getBateau1()->type() == 'C'){

				cout<<"Le joueur possède une caravelle -> Proposer les deux dés et la somme"<<endl;

				int x92 = x_actuel2 + valde2;
				int y92 = y_actuel2;
				if(x92>0 && x92<=11 && y92>0 && y92<=8){
					casespossibles[indice] = make_pair(x92,y92);
					indice++;
				}
				int x102 = x_actuel2 - valde2;
				int y102 = y_actuel2;
				if(x102>0 && x102<=11 && y102>0 && y102<=8){
					casespossibles[indice] = make_pair(x102,y102);
					indice++;
				}
				int x112 = x_actuel2;
				int y112 = y_actuel2 + valde2;
				if(x112>0 && x112<=11 && y112>0 && y112<=8){
					casespossibles[indice] = make_pair(x112,y112);
					indice++;
				}
				int x122 = x_actuel2;
				int y122 = y_actuel2 - valde2;
				if(x122>0 && x122<=11 && y122>0 && y122<=8){
					casespossibles[indice] = make_pair(x122,y122);
					indice++;
				}
				int x132 = x_actuel2 + valde2;
				int y132 = y_actuel2 + valde2;
				if(x132>0 && x132<=11 && y132>0 && y132<=8){
					casespossibles[indice] = make_pair(x132,y132);
					indice++;
				}
				int x142 = x_actuel2 - valde2;
				int y142 = y_actuel2 + valde2;
				if(x142>0 && x142<=11 && y142>0 && y142<=8){
					casespossibles[indice] = make_pair(x142,y142);
					indice++;
				}
				int x152 = x_actuel2 + valde2;
				int y152 = y_actuel2 - valde2;
				if(x152>0 && x152<=11 && y152>0 && y152<=8){
					casespossibles[indice] = make_pair(x152,y152);
					indice++;
				}
				int x162 = x_actuel2 - valde2;
				int y162 = y_actuel2 - valde2;
				if(x162>0 && x162<=11 && y162>0 && y162<=8){
					casespossibles[16] = make_pair(x162,y162);
					indice++;
				}
				int x172 = x_actuel2 + valdede;
				int y172 = y_actuel2;
				if(x172>0 && x172<=11 && y172>0 && y172<=8){
					casespossibles[indice] = make_pair(x172,y172);
					indice++;
				}
				int x182 = x_actuel2 - valdede;
				int y182 = y_actuel2;
				if(x182>0 && x182<=11 && y182>0 && y182<=8){
					casespossibles[indice] = make_pair(x182,y182);
					indice++;
				}
				int x192 = x_actuel2;
				int y192 = y_actuel2 + valdede;
				if(x192>0 && x192<=11 && y192>0 && y192<=8){
					casespossibles[indice] = make_pair(x192,y192);
					indice++;
				}
				int x202 = x_actuel2;
				int y202 = y_actuel2 - valdede;
				if(x202>0 && x202<=11 && y202>0 && y202<=8){
					casespossibles[indice] = make_pair(x202,y202);
					indice++;
				}
				int x212 = x_actuel2 + valdede;
				int y212 = y_actuel2 + valdede;
				if(x212>0 && x212<=11 && y212>0 && y212<=8){
					casespossibles[indice] = make_pair(x212,y212);
					indice++;
				}
				int x222 = x_actuel2 - valdede;
				int y222 = y_actuel2 + valdede;
				if(x222>0 && x222<=11 && y222>0 && y222<=8){
					casespossibles[indice] = make_pair(x222,y222);
					indice++;
				}
				int x232 = x_actuel2 + valdede;
				int y232 = y_actuel2 - valdede;
				if(x232>0 && x232<=11 && y232>0 && y232<=8){
					casespossibles[indice] = make_pair(x232,y232);
					indice++;
				}
				int x242 = x_actuel2 - valdede;
				int y242 = y_actuel2 - valdede;
				if(x242>0 && x242<=11 && y242>0 && y242<=8){
					casespossibles[indice] = make_pair(x242,y242);
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
					}
					traverseIle(casespossibles, c);
				}//for
			}//else

			motor->modifCourant(ATTENTECHOIXBATEAU);

		}//if*/

	//}
	
}