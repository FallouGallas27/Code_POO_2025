#include "Vaccataire.h"
Vaccataire::Vaccataire(string n, string ad, int an,string b, int nc, double nbh, double ph): Enseignant(n, ad,an,b,nc)
{
    nb_heures = nbh;
    prix_heueres = ph;
    montant = nb_heures * prix_heueres;
}

Vaccataire::~Vaccataire(){}
void Vaccataire::affiche(){
    cout<<"Information sur un Enseignant Vaccataire\n";
    Enseignant::affiche();
    cout<<"\tMontant\t"<<montant<<endl;
}

double Vaccataire::moyenne(){
    return annee;
}
