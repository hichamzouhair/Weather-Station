#ifndef AFFICHAGECONDITIONS_H
#define AFFICHAGECONDITIONS_H

#include "Observateur.h"

class AffichageConditions : public Observateur {
private:
    float temperature;
    float humidite;
    float pression;

public:
    AffichageConditions();
    void mise_a_jour(float temperature, float humidite, float pression) override;
    void afficher() const;
};

#endif