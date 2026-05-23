#include "AffichageStatistiques.h"
#include <iostream>
#include <algorithm>

AffichageStatistiques::AffichageStatistiques()
    : tempMin(FLT_MAX), tempMax(-FLT_MAX), tempSomme(0),
      humMin(FLT_MAX),  humMax(-FLT_MAX),  humSomme(0),
      presMin(FLT_MAX), presMax(-FLT_MAX), presSomme(0),
      nbMesures(0) {}

void AffichageStatistiques::mise_a_jour(float temp, float hum, float pres) {
    nbMesures++;

    tempMin = std::min(tempMin, temp);
    tempMax = std::max(tempMax, temp);
    tempSomme += temp;

    humMin = std::min(humMin, hum);
    humMax = std::max(humMax, hum);
    humSomme += hum;

    presMin = std::min(presMin, pres);
    presMax = std::max(presMax, pres);
    presSomme += pres;

    afficher();
}

void AffichageStatistiques::afficher() const {
    std::cout << "--- [Affichage Statistiques] (" << nbMesures << " mesures) ---\n";
    std::cout << "  Temp  : min=" << tempMin << " max=" << tempMax
              << " moy=" << tempSomme / nbMesures << " C\n";
    std::cout << "  Hygro : min=" << humMin  << " max=" << humMax
              << " moy=" << humSomme  / nbMesures << " %\n";
    std::cout << "  Pres  : min=" << presMin << " max=" << presMax
              << " moy=" << presSomme / nbMesures << " hPa\n";
}