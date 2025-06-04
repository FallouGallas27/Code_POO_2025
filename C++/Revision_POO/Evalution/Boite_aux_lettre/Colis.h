#ifndef COLIS_H
#define COLIS_H
#include "Courrier.h"
class Colis :public Courrier
{
private:
    double volume;
public:
    Colis(double, Mode, string, string, double);
    ~Colis();
    void affiche();
    double calcul_timbre();
};


#endif