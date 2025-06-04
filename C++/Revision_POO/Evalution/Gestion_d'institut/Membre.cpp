#include "Membre.h"
Membre::Membre(string n, string ad,int an)
{
    nom = n;
    address = ad;
    annee = an;
}

Membre::~Membre(){}

void Membre::affiche(){
    cout<<"Nom\t"<<nom<<"\tAdresse\t"<<address<<"\tAnnee d'arrivee\t"<<annee;
}
double Membre::moyenne(){
    return 0;
}

