#ifndef AFFICHAGEPREVISIONS_H
#define AFFICHAGEPREVISIONS_H

#include "Observateur.h"

class AffichagePrevisions : public Observateur {
private:
    float pressionActuelle;
    float pressionPrecedente;

public:
    AffichagePrevisions();
    void mise_a_jour(float temperature, float humidite, float pression) override;
    void afficher() const;
};

#endif