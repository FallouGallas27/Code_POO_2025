#ifndef ANNIVERSAIRE_ENTREPRISE_H
#define ANNIVERSAIRE_ENTREPRISE_H
#include "Soiree.h"
class Anniversaire_entreprise : public Soiree
{
protected:
    double frais_com;
    double frais_cont;
    double frais_reserve;
public:
    Anniversaire_entreprise(string, string, Date, double,double,double,double);
    ~Anniversaire_entreprise();
    void affiche();
    double calcul_cout();
    virtual double gain();

};

#endif