#ifndef LETTRE_H
#define LETTRE_H
#include "Courrier.h"
class Lettre : public Courrier
{
private:
    Format format;
public:
    Lettre(double, Mode, string, string, Format);
    ~Lettre();
    void affiche();
    double calcul_timbre();
};


#endif