
#include "Etudiant_Etranger.h"


Etudiant_Etranger::Etudiant_Etranger(string n, int a,string c ,string p): Etudiant(n,a,c)
{   
    pays = p;
}

Etudiant_Etranger::~Etudiant_Etranger()
{
}

void Etudiant_Etranger::affiche(){
    Etudiant::affiche();
    cout<<"\tClasse\t"<<classe<<"\tPays d'origine\t"<<pays<<endl;
}