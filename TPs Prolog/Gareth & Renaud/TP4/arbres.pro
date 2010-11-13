/* Programmation Logique - TP Prolog
   TP4 : Arbres
   Gareth THIVEUX & Renaud PHILIPPE - 4INFO G2.2
   le 12 novembre 2010 */
   

/* faitabin(L,A) : "A est un arbre binaire dont les feuilles sont les éléments de la liste L" */
faitabin([A],A).
faitabin([A,B|R],C) :- append(R,[abin(A,B)],R2), faitabin(R2,C).


/* sym(A) : "A représente un Avar dont la structure est symétrique" */

feuille(X) :- var(X);atomic(X).

sym(A) :- feuille(A).
sym(arb([])).
sym(arb([A])) :- sym(A).
sym(arb([A|B])) :- append(R,[D],B), issym(A,D), sym(arb(R)).

issym(A,B) :- feuille(A), feuille(B).
issym(arb(A),arb(B)) :- issym(A,B).
issym(arb([A|R1]),arb(R2)) :- append(RR,[D],R2), issym(arb(R1),arb(RR)), issym(A,D).


/* symgen(A) : "A représente un arbre Prolog dont la structure est symétrique" */

symgen([]).
symgen([A]).
symgen(A) :- =..(A,[B|R]), sym(arb(sygmen(R))).
