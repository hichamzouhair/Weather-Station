#ifndef SUJET_H
#define SUJET_H

#include "Observateur.h"

class Sujet {
public:
    virtual void ajouterObservateur(Observateur* o) = 0;
    virtual void supprimerObservateur(Observateur* o) = 0;
    virtual void notifierObservateurs() = 0;
    virtual ~Sujet() {}
};

#endif