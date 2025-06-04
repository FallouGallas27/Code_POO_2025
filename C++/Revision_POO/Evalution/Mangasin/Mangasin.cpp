#include "Mangasin.h"


Mangasin::Mangasin(int n)
{
    nmax = n;
    ncourt = 0;
    tab = new Article*[n];
}

Mangasin::~Mangasin()
{
    delete []tab;
}
void Mangasin::ajout(Article * a){
    if(ncourt < nmax){
        tab[ncourt++] = a;
    }
}

void Mangasin::affiche(){
    for (int i = 0; i < ncourt; i++)
    {
        tab[i]->affiche();
    }
    
}
double Mangasin::calcul_prix(){
    double p = 0;
    for (int i = 0; i < ncourt; i++)
    {
        p+=tab[i]->calcul_prix();
    }
    return p;   
}