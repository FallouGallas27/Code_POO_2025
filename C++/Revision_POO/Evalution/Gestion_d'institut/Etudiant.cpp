#include "Etudiant.h"
Etudiant::Etudiant(string n, string ad, int an, double moyy,string grp):Membre(n,ad,an)
{
    moy = moyy;
    group = grp;
}

Etudiant::~Etudiant()
{
}
void Etudiant::affiche(){
    cout<<"Information sur un Etudiant\t"<<endl;
    Membre::affiche();
    cout<<"\tMoyenne\t"<<moy<<"Groupe\t"<<group<<endl;
}
double Etudiant::moyenne(){
    return annee;
}