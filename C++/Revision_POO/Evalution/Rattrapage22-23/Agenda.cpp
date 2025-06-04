#include "Agenda.h"

Agenda::Agenda(int n)
{
    nmax = n;
    nc = 0;
    tab = new Evenement*[nmax];
}

Agenda::~Agenda()
{
    delete tab;
}
void Agenda::ajout(Evenement* v){
    if(nc < nmax)
        tab[nc++] = v;
}

void Agenda::affiche(){
    for (int i = 0; i < nmax; i++)
    {
        tab[i]->affiche();
    }
    
}
double Agenda::cout_total(){
    double p;
    for (int i = 0; i < nmax; i++)
    {
        p += tab[i]->cout_total();
    }
    return p;
}
