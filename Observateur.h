#ifndef OBSERVATEUR_H
#define OBSERVATEUR_H

class Observateur {
public:
    virtual void mise_a_jour(float temperature, float humidite, float pression) = 0;
    virtual ~Observateur() {}
};

#endif