#include "Personne.h"


Personne::Personne(string n , int ann)
{   
    nom = n;
    annee = ann;
    //cout <<"Appel du const de Personne\n";
}

Personne::~Personne()
{
    //cout <<"Appel du const de Personne\n";
}

void  Personne::affiche(){
    cout<<"\nNom\t"<<nom<<"  Annee d'arrivee\t"<<annee<<"\t";
}