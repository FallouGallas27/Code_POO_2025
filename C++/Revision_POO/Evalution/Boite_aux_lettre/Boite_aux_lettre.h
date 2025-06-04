#ifndef BOITE_AUX_LETTRE_H
#define BOITE_AUX_LETTRE_H

#include "Courrier.h"

class Boite_aux_lettre
{
private:
    int nbmax;
    int nbcourt;
    Courrier ** tab;
public:
    Boite_aux_lettre(int);
    ~Boite_aux_lettre();
    void affiche();
    double calcul_prix();
    void ajout(Courrier *);
};
#endif