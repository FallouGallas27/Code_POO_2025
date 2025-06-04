#ifndef COMBAT_H
#define COMBAT_H
#include "Evenement.h"
class Combat : public Evenement
{
private:
    double frais_sec;
public:
    Combat(Date ,string,double,double);
    ~Combat(){}
    void affiche();
    double calcul_cout();
    double cout_total();
    friend ostream& operator<<(ostream&,Combat&);
};


#endif