#ifndef DONNEESMETEO_H
#define DONNEESMETEO_H

#include "Sujet.h"
#include <vector>

class DonneesMeteo : public Sujet {
private:
    std::vector<Observateur*> observateurs;
    float temperature;
    float humidite;
    float pression;

public:
    DonneesMeteo();

    void ajouterObservateur(Observateur* o) override;
    void supprimerObservateur(Observateur* o) override;
    void notifierObservateurs() override;

    void setMesures(float temperature, float humidite, float pression);

    float getTemperature() const;
    float getHumidite()    const;
    float getPression()    const;
};

#endif