#ifndef FOOTBLALL_H
#define FOOTBALL_H
#include "Evenement.h"
class Football : public Evenement
{
private:
    int nbre_ticket;
public:
    Football(Date, string ,double, double);
    ~Football(){}
    void affiche();
    double calcul_cout();
    double cout_total();
    friend ostream& operator<<(ostream&, Football&);
};

#endif