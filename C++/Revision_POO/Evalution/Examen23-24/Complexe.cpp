#include "Complexe.h"


Complexe::Complexe(int n)
{
    nmax = n;
    ncourt = 0;
    tab  = new Soiree*[n];
}

Complexe::~Complexe()
{
    delete [] tab;
}

void Complexe::affiche(){
    for (int  i = 0; i < ncourt; i++)
    {
        tab[i]->affiche();
    }
    
}

void Complexe::ajout(Soiree*c){
    if (ncourt < nmax)
    {
        tab[ncourt++] = c;
    }
    
}

double Complexe::gain_complexe(){
    double p;
    for (int i = 0; i < ncourt; i++)
    {
        p += tab[i]->gain();
    }
    return p;
}
