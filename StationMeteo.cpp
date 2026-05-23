#include "StationMeteo.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

StationMeteo::StationMeteo(DonneesMeteo& donnees) : donneesMeteo(donnees) {
    srand(static_cast<unsigned int>(time(nullptr)));
}

void StationMeteo::simulerMesures() {
    // Capteur temperature : 15.0 a 35.0 C
    float temperature = 15.0f + static_cast<float>(rand() % 200) / 10.0f;
    // Capteur humidite : 30.0 a 90.0 %
    float humidite    = 30.0f + static_cast<float>(rand() % 600) / 10.0f;
    // Capteur pression : 980.0 a 1040.0 hPa
    float pression    = 980.0f + static_cast<float>(rand() % 600) / 10.0f;

    std::cout << "\n[StationMeteo] Nouvelles donnees captees !\n";
    donneesMeteo.setMesures(temperature, humidite, pression);
}