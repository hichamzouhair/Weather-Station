#ifndef AFFICHAGESTATISTIQUES_H
#define AFFICHAGESTATISTIQUES_H

#include "Observateur.h"
#include <cfloat>

class AffichageStatistiques : public Observateur {
private:
    float tempMin, tempMax, tempSomme;
    float humMin,  humMax,  humSomme;
    float presMin, presMax, presSomme;
    int   nbMesures;

public:
    AffichageStatistiques();
    void mise_a_jour(float temperature, float humidite, float pression) override;
    void afficher() const;
};

#endif