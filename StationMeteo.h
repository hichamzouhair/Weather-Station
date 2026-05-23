#ifndef STATIONMETEO_H
#define STATIONMETEO_H

#include "DonneesMeteo.h"

class StationMeteo {
private:
    DonneesMeteo& donneesMeteo;

public:
    StationMeteo(DonneesMeteo& donnees);
    void simulerMesures();
};

#endif