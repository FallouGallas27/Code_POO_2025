#include "Boite_aux_lettre.h"


Boite_aux_lettre::Boite_aux_lettre(int n)
{
    nbmax = n;
    nbcourt = 0 ;
    tab = new Courrier*[n];
}

Boite_aux_lettre::~Boite_aux_lettre()
{
    delete [] tab;
}
void Boite_aux_lettre::affiche(){
    for (int i = 0; i < nbcourt; i++)
    {
        tab[i]->affiche();
    }
    
}
double Boite_aux_lettre::calcul_prix(){
    double p =  0;
    for (int i = 0; i < nbcourt; i++)
    {
        p = tab[i]->calcul_timbre();
    }
    return p;
}
void Boite_aux_lettre::ajout(Courrier * c){
    if(nbcourt < nbmax)
     tab[nbcourt++] = c;
}