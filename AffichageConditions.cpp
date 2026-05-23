#include "AffichageConditions.h"
#include <iostream>

AffichageConditions::AffichageConditions()
    : temperature(0), humidite(0), pression(0) {}

void AffichageConditions::mise_a_jour(float temp, float hum, float pres) {
    this->temperature = temp;
    this->humidite    = hum;
    this->pression    = pres;
    afficher();
}

void AffichageConditions::afficher() const {
    std::cout << "--- [Affichage Conditions Actuelles] ---\n";
    std::cout << "  Temp : " << temperature << " C\n";
    std::cout << "  Hygro: " << humidite    << " %\n";
    std::cout << "  Pres : " << pression    << " hPa\n";
}