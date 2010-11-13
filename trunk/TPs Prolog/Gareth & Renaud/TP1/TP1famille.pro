/*Programmation Logique - TP Prolog
  TP1 : Interrogations style base de données
  Gareth THIVEUX & Renaud PHILIPPE - 4INFO G2.2
  le 5 octobre 2010 */


/*Le monde de la famille*/

est_hom(georges).
est_hom(albert).
est_hom(maxime).
est_hom(simon).
est_hom(felix).
est_hom(cesar).
est_hom(bernard).
est_hom(didier).
est_hom(hugo).

est_fem(jeanne).
est_fem(marie).
est_fem(henriette).
est_fem(sophie).
est_fem(stephanie).

/*parent(X,Y) : X est parent Y*/
parent(georges,maxime).
parent(georges,simon).
parent(jeanne,maxime).
parent(jeanne,simon).
parent(albert,felix).
parent(marie,felix).
parent(felix,sophie).
parent(henriette,sophie).
parent(cesar,bernard).
parent(sophie,bernard).
parent(felix,didier).
parent(henriette,didier).
parent(didier,hugo).
parent(stephanie,hugo).


/*pere(X,Y) : X est père de Y*/
pere(X,Y) :- est_hom(X),parent(X,Y).

/*mere(X,Y) : X est mère de Y*/
mere(X,Y) :- est_fem(X),parent(X,Y).

/*frere(X,Y) : X est frère de Y*/
frere(X,Y) :- est_hom(X),pere(Z,X),pere(Z,Y),mere(W,X),mere(W,Y),\=(X,Y).

/*soeur(X,Y) : X est soeur de Y*/
soeur(X,Y) :- est_fem(X),pere(Z,X),pere(Z,Y),mere(W,X),mere(W,Y),\=(X,Y).

/*demifrere(X,Y) : X est demi-frère de Y*/
demifrere(X,Y) :- est_hom(X),parent(Z,X),parent(Z,Y),\=(X,Y).

/*demisoeur(X,Y) : X est demisoeur de Y*/
demisoeur(X,Y) :- est_fem(X),parent(Z,X),parent(Z,Y),\=(X,Y).

/*cousin(X,Y) : X est cousin de Y*/
cousin(X,Y) :- est_hom(X),parent(Z,X),parent(W,Y),frere(Z,W),\=(X,Y).
cousin(X,Y) :- est_hom(X),parent(Z,X),parent(W,Y),soeur(Z,W),\=(X,Y).

/*cousine(X,Y) : X est cousine de Y*/
cousine(X,Y) :- est_fem(X),parent(Z,X),parent(W,Y),frere(Z,W),\=(X,Y).
cousine(X,Y) :- est_fem(X),parent(Z,X),parent(W,Y),soeur(Z,W),\=(X,Y).

/*oncle(X,Y) : X est oncle de Y*/
oncle(X,Y) :- parent(Z,Y),frere(X,Z),\=(X,Y).

/*tante(X,Y) : X est tante de Y*/
tante(X,Y) :- parent(Z,Y),soeur(X,Z),\=(X,Y).

/*granpere(X,Y) : X est grand-père de Y*/
grandpere(X,Y) :- parent(Z,Y),pere(X,Z),\=(X,Y).

/*grandmere(X,Y) : X est grand-mère de Y*/
grandmere(X,Y) :- parent(Z,Y),mere(X,Z),\=(X,Y).