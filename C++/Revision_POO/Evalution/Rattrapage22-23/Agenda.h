#ifndef AGENDA_H
#define AGENDA_H
#include "Evenement.h"
class Agenda
{
private:
    int nmax;
    int nc;
    Evenement ** tab;
public:
    Agenda(int);;
    ~Agenda();
    void affiche();
    void ajout(Evenement*);
    double cout_total();
};

#endif