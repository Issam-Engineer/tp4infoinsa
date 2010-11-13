// diableHumain.h

#ifndef DIABLE_HUMAIN_H
#define DIABLE_HUMAIN_H

#include "diable.h"

class Partie;


class DiableHumain : public Diable{ 
public:
  DiableHumain(Partie *);
  void afficherPrompt();
  /*void jouer();*/
  Case * choisirUneCase();
  /*void effectuerCoupSurCase(Case *);*/
  bool verifier(int x,int y);
};

#endif

