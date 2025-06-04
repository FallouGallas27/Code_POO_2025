#ifndef LEVE_FONDS_H
#define LEVE_FONDS_H
#include "Soiree.h"

class Leve_fonds : public Soiree
{
private:
    double frais_com;
    double montant;
    double frais_lf;
public:
    Leve_fonds(string,string ,Date, double, double,double, double);
    ~Leve_fonds();
    void affiche();
    double calcul_cout();
    virtual double gain();
};


#endif