/* Programmation Logique - TP Prolog
   TP3 : Les listes
   Gareth THIVEUX & Renaud PHILIPPE - 4INFO G2.2
   le 3 novembre 2010 */

 
/*	0.1 Comprendre le predicat is/2	*/
/* 	lg1(L,N) : N est le nombre d'éléments de L.
	Pour une liste donnee ce predicat sait calculer sa longueur, 
	mais il ne sait pas construire une liste de longueur donnee.	*/
lg1([],0).
lg1([A|R],N) :- lg1(R,M), is(N,M+1).

/*	lg2(L,N) : N est le nombre d'éléments de L.
	Ce predicat sait construire une liste de longueur donnee,
	mais pour une liste donnee ce predicat ne sait pas calculer sa longueur.	*/
lg2([],0).
lg2([_|L],N) :-  >(N,0), is(M,N-1), lg2(L,M).


/*	0.2 Quelques classiques	*/

/* faitdblliste(L,N) : N étant donnée, construit une liste L de longueur 2*N, qui contient 2 fois la même séquence d'éléments */
faitdblliste(L,N) :- >(N,0), lg2(L1,N), append(L1,L1,L).

/* conc3(X,Y,Z,T) : T est la concaténation des listes X, Y et Z */
conc3(X,Y,Z,T) :- append(X,Y,Y1), append(Y1,Z,T).
/* Non, conc3 ne sait pas découper la liste T de toutes les façons possibles */

/* membre(A,X) : A est élement de la liste X */
membre(A,[A|R]).
membre(A,[B|R]) :- \=(A,B), membre(A,R).

/* renverser(X,Y) : Y est la liste X à l'envers */
renverser([],[]).
renverser([A|R],Y) :- renverser(R,X), append(X,[A|[]],Y).

/* palind(X) : X est une liste "palindrome" */
palind(X) :- renverser(X,X).

/* horsde(A,X) : A n'est pas élément de la liste X */
horsde(A,[]).
horsde(A,[B|R]) :- \=(A,B), horsde(A,R).

/* tousdiff(X) : les éléments de X sont tous différents */
tousdiff([]).
tousdiff([A|R]) :- horsde(A,R), tousdiff(R).

/* debpar(X,Y) : la liste X commence par la liste Y */
debpar(X,[]).
debpar([A|R],[B|S]) :- =(A,B), debpar(R,S).

/* sousliste(X,Y) : la liste Y est sous-liste de la liste X */
sousliste(X,[]).
sousliste([A|R],[A|S]) :- debpar(R,S).
sousliste([A|R],[B|S]) :- \=(A,B), sousliste(R,[B|S]).


/*	0.3 Un peu plus difficile (quoique !)	*/

/* elim(X,Y) : X étant donnée, on construit la liste Y qui contient tous les éléments de X, une fois */
elim([],[]).
elim([A|R],S) :- membre(A,R), elim(R,S).
elim([A|R],S) :- horsde(A,R), elim(R,S).

/* placer(A,X,Y) : la liste Y est le résultat du placement correct (dans l'ordre croissant) de A dans la liste X */
placer(A,[],[A]).
placer(A,[B|R],Z) :- <=(A,B), append(A,[B|R],Z).
placer(A,[B|R],Z) :- >(A,B), placer(A,R,Z).

/* tri(X,Y) : la liste Y est le résultat du tri par ordre croissant de la liste d'entiers X */
tri([],Y).
tri([A|R),Y) :- placer(A,Y,Z), tri(R,Z)


/*	0.4 Modelisation des ensembles	*/

/* inclus(X,Y) : tous les éléments de la liste X sont présents dans la liste Y */
inclus([],Y).
inclus([A|R],Y) :- membre(A,Y), inclus(R,Y).

/* noninclus(X,Y) : au moins un élément de la liste X est hors de la liste Y */
noninclus([],Y).
noninclus([A|R],Y) :- horsde(A,Y).
noninclus([A|R],Y) :- noninclus(R,Y).

/* union(X,Y,Z) : Z est l'union ensembliste des listes X et Y considérées comme des ensembles */
union(X,Y,Z) :- inclus(X,Z), inclus(Y,Z).

/* inter(X,Y,Z) : Z est l'intersection ensembliste des listes X et Y considérées comme des ensembles */
inter(X,Y,Z) :- inclus(Z,X), inclus(Z,Y).

/* diffe(X,Y,Z) : Z est la différence ensembliste des listes X et Y considérées comme des ensembles */
diffe(X,[],X).
diffe([],Y,Z).
diffe([A|R],Y,Z) :- membre(A,Y), diffe(R,Y,Z).
diffe([A|R],Y,[B|S]) :- diffe(R,Y,[A,B|S]).