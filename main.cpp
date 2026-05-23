#include <iostream>
#include "DonneesMeteo.h"
#include "StationMeteo.h"
#include "AffichageConditions.h"
#include "AffichageStatistiques.h"
#include "AffichagePrevisions.h"

int main() {

    // 1. Objet central : DonneesMeteo (le Sujet)
    DonneesMeteo donneesMeteo;

    // 2. Les 3 affichages (les Observateurs)
    AffichageConditions   affConditions;
    AffichageStatistiques affStatistiques;
    AffichagePrevisions   affPrevisions;

    // 3. Abonnement des observateurs au sujet
    donneesMeteo.ajouterObservateur(&affConditions);
    donneesMeteo.ajouterObservateur(&affStatistiques);
    donneesMeteo.ajouterObservateur(&affPrevisions);

    // 4. La station physique qui capte les donnees
    StationMeteo station(donneesMeteo);

    std::cout << "====== Station Meteorologique ======\n";

    // 5. Simuler 5 mesures successives
    for (int i = 1; i <= 5; i++) {
        std::cout << "\n===== Mesure " << i << " =====\n";
        station.simulerMesures();
    }

    system("pause"); // Pour que la console reste ouverte sur Windows
    return 0;
}