#include "Titulaire.h"
Titulaire::Titulaire(string n, string ad, int an, string b, int nc, double sal) : Enseignant(n, ad, an, b, nc)
{
    salaire = sal;
}

Titulaire::~Titulaire()
{
}
void Titulaire::affiche(){
    cout<<"INformation sur un Enseignant Titulaire\n";
    Enseignant::affiche();
    cout<<"\tSalaire\t"<<salaire;
}
double Titulaire::moyenne(){
    return annee;
}
