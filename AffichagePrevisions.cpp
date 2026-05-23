#include "AffichagePrevisions.h"
#include <iostream>

AffichagePrevisions::AffichagePrevisions()
    : pressionActuelle(0), pressionPrecedente(0) {}

void AffichagePrevisions::mise_a_jour(float /*temp*/, float /*hum*/, float pres) {
    pressionPrecedente = pressionActuelle;
    pressionActuelle   = pres;
    afficher();
}

void AffichagePrevisions::afficher() const {
    std::cout << "--- [Affichage Previsions] ---\n";
    if (pressionActuelle > pressionPrecedente)
        std::cout << "  => Beau temps en vue ! (pression en hausse)\n";
    else if (pressionActuelle < pressionPrecedente)
        std::cout << "  => Risque de pluie (pression en baisse)\n";
    else
        std::cout << "  => Temps stable\n";
}