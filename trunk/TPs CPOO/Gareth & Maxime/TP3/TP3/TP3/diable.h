// diable.h

#ifndef DIABLE_H
#define DIABLE_H

#include "joueur.h"

class Partie;


class Diable : public Joueur { 
public:
  Diable(Partie *);
  void afficher();
  virtual void Diable::effectuerCoupSurCase(Case * c);
};

#endif