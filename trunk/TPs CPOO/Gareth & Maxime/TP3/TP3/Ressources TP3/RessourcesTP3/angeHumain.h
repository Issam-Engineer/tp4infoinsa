// angeHumain.h

#ifndef ANGE_HUMAIN_H
#define ANGE_HUMAIN_H


#include "ange.h"


class Partie;

class AngeHumain : public Ange { 
public:
  AngeHumain(Partie *, int);
  void afficherPrompt();
  void jouer();
  Case * choisirUneCase();
  void effectuerCoupSurCase(Case *);
 };

#endif
