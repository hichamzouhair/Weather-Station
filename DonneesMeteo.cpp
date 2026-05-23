#include "DonneesMeteo.h"
#include <algorithm>

DonneesMeteo::DonneesMeteo() : temperature(0), humidite(0), pression(0) {}

void DonneesMeteo::ajouterObservateur(Observateur* o) {
    observateurs.push_back(o);
}

void DonneesMeteo::supprimerObservateur(Observateur* o) {
    observateurs.erase(
        std::remove(observateurs.begin(), observateurs.end(), o),
        observateurs.end()
    );
}

void DonneesMeteo::notifierObservateurs() {
    for (Observateur* o : observateurs) {
        o->mise_a_jour(temperature, humidite, pression);
    }
}

void DonneesMeteo::setMesures(float temp, float hum, float pres) {
    this->temperature = temp;
    this->humidite    = hum;
    this->pression    = pres;
    notifierObservateurs(); // notifie tous les affichages automatiquement
}

float DonneesMeteo::getTemperature() const { return temperature; }
float DonneesMeteo::getHumidite()    const { return humidite; }
float DonneesMeteo::getPression()    const { return pression; }