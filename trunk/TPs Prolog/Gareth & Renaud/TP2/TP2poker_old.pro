/*Programmation Logique - TP Prolog
  TP2 : Manipulation de termes construits
  Gareth THIVEUX & Renaud PHILIPPE - 4INFO G2.2
  le 13 octobre 2010 */


/*Le monde du Poker*/

/*Chaque carte d'un jeu de 52 cartes a :
	- une hauteur (deux,trois,quatre,cinq,six,sept,huit,neuf,dix,valet,dame,roi,as)
	- une couleur (trefle,carreau,coeur,pique).*/

/*Au poker, une main est constituée de cinq cartes.*/

hauteur(deux).
hauteur(trois).
hauteur(quatre).
hauteur(cinq).
hauteur(six).
hauteur(sept).
hauteur(huit).
hauteur(neuf).
hauteur(dix).
hauteur(valet).
hauteur(dame).
hauteur(roi).
hauteur(as).


couleur(trefle).
couleur(carreau).
couleur(coeur).
couleur(pique).

inferieur(deux,trois).
/*inferieur(deux,quatre).
inferieur(deux,cinq).
inferieur(deux,six).
inferieur(deux,sept).
inferieur(deux,huit).
inferieur(deux,neuf).
inferieur(deux,dix).
inferieur(deux,valet).
inferieur(deux,dame).
inferieur(deux,roi).
inferieur(deux,as).*/

inferieur(trois,quatre).
/*inferieur(trois,cinq).
inferieur(trois,six).
inferieur(trois,sept).
inferieur(trois,huit).
inferieur(trois,neuf).
inferieur(trois,dix).
inferieur(trois,valet).
inferieur(trois,dame).
inferieur(trois,roi).
inferieur(trois,as).*/

inferieur(quatre,cinq).
/*inferieur(quatre,six).
inferieur(quatre,sept).
inferieur(quatre,huit).
inferieur(quatre,neuf).
inferieur(quatre,dix).
inferieur(quatre,valet).
inferieur(quatre,dame).
inferieur(quatre,roi).
inferieur(quatre,as).*/

inferieur(cinq,six).
/*inferieur(cinq,sept).
inferieur(cinq,huit).
inferieur(cinq,neuf).
inferieur(cinq,dix).
inferieur(cinq,valet).
inferieur(cinq,dame).
inferieur(cinq,roi).
inferieur(cinq,as).*/

inferieur(six,sept).
/*inferieur(six,huit).
inferieur(six,neuf).
inferieur(six,dix).
inferieur(six,valet).
inferieur(six,dame).
inferieur(six,roi).
inferieur(six,as).*/

inferieur(sept,huit).
/*inferieur(sept,neuf).
inferieur(sept,dix).
inferieur(sept,valet).
inferieur(sept,dame).
inferieur(sept,roi).
inferieur(sept,as).*/

inferieur(huit,neuf).
/*inferieur(huit,dix).
inferieur(huit,valet).
inferieur(huit,dame).
inferieur(huit,roi).
inferieur(huit,as).*/

inferieur(neuf,dix).
/*inferieur(neuf,valet).
inferieur(neuf,dame).
inferieur(neuf,roi).
inferieur(neuf,as).*/

inferieur(dix,valet).
/*inferieur(dix,dame).
inferieur(dix,roi).
inferieur(dix,as).*/

inferieur(valet,dame).
/*inferieur(valet,roi).
inferieur(valet,as).*/

inferieur(dame,roi).
/*inferieur(dame,as).*/

inferieur(roi,as).

inferieur(trefle,carreau).
/*inferieur(trefle,coeur).
inferieur(trefle,pique).*/

inferieur(carreau,coeur).
/*inferieur(carreau,pique).*/

inferieur(coeur,pique).



/*Question 1*/
est_carte(carte(H,C)) :- hauteur(H),couleur(C).
/*Yes (0.00s cpu, solution 52)*/

/*Question 2*/
est_main(main(C1,C2,C3,C4,C5)) :- est_carte(C1),est_carte(C2),\=(C1,C2),est_carte(C3),\=(C1,C3),\=(C2,C3),est_carte(C4),\=(C1,C4),\=(C2,C4),\=(C3,C4),est_carte(C5),\=(C1,C5),\=(C2,C4),\=(C2,C5),\=(C3,C5),\=(C4,C5).


/*Question 3*/
est_inf(X1,X2) :- inferieur(X1,X2).
est_inf(X1,X2) :- inferieur(X1,X),est_inf(X,X2).

inf_cartea(carte(H1,_),carte(H2,_)) :- est_inf(H1,H2).
inf_cartea(carte(H1,C1),carte(H2,C2)) :- =(H1,H2),est_inf(C1,C2).

inf_carteb(carte(H1,C1),carte(H2,C2)) :- est_carte(carte(H1,C1)),est_carte(carte(H2,C2)),est_inf(H1,H2).
inf_carteb(carte(H1,C1),carte(H2,C2)) :- est_carte(carte(H1,C1)),est_carte(carte(H2,C2)),=(H1,H2),est_inf(C1,C2).


/*Question 4*/
est_main2(main(C1,C2,C3,C4,C5)) :- est_carte(C1),est_carte(C2),inf_carteb(C1,C2),est_carte(C3),inf_carteb(C1,C3),inf_carteb(C2,C3),est_carte(C4),inf_carteb(C1,C4),inf_carteb(C2,C4),inf_carteb(C3,C4),est_carte(C5),inf_carteb(C1,C5),inf_carteb(C2,C4),inf_carteb(C2,C5),inf_carteb(C3,C5),inf_carteb(C4,C5).

/* mains pour tester */
m1(main(carte(sept,trefle),carte(valet,coeur),carte(dame,_),carte(_,pique),carte(roi,pique))).			 
m2(main(carte(sept,trefle),carte(valet,coeur),carte(dame,carreau),carte(_,coeur),carte(roi,pique))).			 
m3(main(carte(sept,trefle),carte(sept,coeur),carte(dame,_),carte(_,trefle),carte(_,pique))).
m4(main(carte(sept,trefle),carte(valet,coeur),carte(dame,_),carte(_,pique),carte(_,pique))).	
m5(main(carte(sept,trefle),carte(valet,coeur),carte(dame,_),carte(_,carreau),carte(dame,pique))).	
m6(main(carte(sept,carreau),_,carte(valet,_),_,_)).
m7(main(carte(sept,trefle),carte(sept,coeur),carte(dame,pique),carte(as,trefle),carte(as,pique))).

/*Question5*/

une_paire(main(carte(H,_),carte(H,_),carte(H1,_),carte(H2,_),carte(H3,_)) :-  

