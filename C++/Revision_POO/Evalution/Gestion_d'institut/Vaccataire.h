#ifndef _VACCATAIRE_H
#define _VACCATAIRE_H
#include "Enseignant.h"
class Vaccataire : public Enseignant
{
private:
    double nb_heures;
    double prix_heueres;
    double montant;
public:
    Vaccataire(string, string, int,string, int, double, double);
    ~Vaccataire();
    void affiche();
    double moyenne();
};

#endif
