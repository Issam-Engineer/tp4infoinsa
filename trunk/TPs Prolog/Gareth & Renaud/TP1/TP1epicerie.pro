/*Programmation Logique - TP Prolog
  TP1 : Interrogations style base de données
  Gareth THIVEUX & Renaud PHILIPPE - 4INFO G2.2
  le 5 octobre 2010 */


/*Le monde de l'épicerie*/

/*Abréviations : f pour fournisseur, p pour produit, mf pour fournit.*/

/*Pour un fournisseur, seuls nous intéressent son code, son nom, la remise qu’il
consent, sa ville. D’où la relation f(<codef>,<nomf>,<remisef>,<villef>).*/
f(f1,bornibus,5,paris).
f(f2,mercier,7,paris).
f(f3,colbert,3,reims).
f(f4,bossuet,6,dijon).
f(f5,tanguy,10,riec).
f(f6,dupont,0,paris).

/*Pour un produit les informations retenues sont son code, son nom, sa couleur,
son origine.D’où la relation p(<codep>,<nomp>,<coulp>,<originep>).*/
p(p1,cassis,rouge,dijon).
p(p2,champagne,blanc,reims).
p(p3,huitre,vert,riec).
p(p4,moutarde,jaune,dijon).
p(p5,salade,vert,nice).
p(p6,cornichon,vert,dijon).
p(p7,muscadet,blanc,nantes).

/*Ces deux entités sont mises en “relation” grâce au prédicat fournit.
D'où la relation mf(<codef>,<codep>,<quantite>).*/
mf(f3,p2,5).
mf(f2,p2,1).
mf(f1,p6,2).
mf(f1,p4,1).
mf(f1,p1,1).
mf(f4,p6,3).
mf(f4,p5,7).
mf(f1,p5,8).
mf(f4,p4,2).
mf(f3,p4,1).
mf(f2,p4,1).
mf(f5,p3,10).


/*nom des fournisseurs*/
nomf(N) :- f(_,N,_,_).

/*nom des fournisseurs qui fournissent quelque chose*/
nomfqfqc(N) :- f(F,N,_,_),mf(F,_,Q),>(Q,0). /*nom_mf(X) :- mf(F,_,_),f(F,X,_,_)*/

/*nom des fournisseurs qui fournissent au moins un produit vert*/
nomfqfamupv(N) :- f(F,N,_,_),mf(F,P,_),p(P,_,C,_),=(C,vert).

/*origine des produits qui sont fournis par Mercier*/
origpfpm(NP,O) :- f(F,N,_,_),mf(F,P,_),p(P,NP,_,O),=(N,mercier).

/*nom des produits qui sont fournis par deux fournisseurs au moins*/
nompfpdfam(NP) :- mf(X,P,_),mf(Y,P,_),p(P,NP,_,_),\=(X,Y).

/*nom des fournisseurs qui fournissent au moins un produit originaire de leur ville*/
nomfqpamupodlv(N) :- f(F,N,_,V),mf(F,P,_),p(P,_,_,O),=(V,O).

/*nom des fournisseurs qui habitent Paris ou fournissent au moins 2 produits verts différents.*/
nomfqhpoqfdpvd(N) :- f(_,N,_,V),=(V,paris).
nomfqhpoqfdpvd(N) :- f(F,N,_,_),mf(F,X,_),p(X,_,C,_,_),mf(F,Y,_),p(Y,_,C,_),=(C,vert).

/*nom des produits pour lesquels il existe une remise égale à 7*/
nompplres(NP) :- f(F,_,R,_),mf(F,P,_),p(P,NP,_,_),=(R,7).

/*nom des fournisseurs qui me fournissent au moins un produit en quantité inférieure à 5*/
nomffamupeqic(N) :- f(F,N,_,_),mf(F,_,Q),<(Q,5).

/*nomf(N) :- f(F,N,R,V), mf(F,P,Q), p(P,NP,C,O), \=(C,vert).
ne correspond pas à la question nom des fournisseurs qui ne fournissent aucun
produit vert, mais à tous aux noms des fournisseurs qui fournissent au moins un produit qui n'est pas vert*/