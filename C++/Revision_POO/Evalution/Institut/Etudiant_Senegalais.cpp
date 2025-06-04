#include "Etudiant_Senegalais.h"

Etudiant_Senegalais::Etudiant_Senegalais(string n, int a, string c ,string m): Etudiant(n,a,c)
{
    mention = m;
}

Etudiant_Senegalais::~Etudiant_Senegalais()
{
}

void Etudiant_Senegalais::affiche(){
    Etudiant::affiche();
    cout<<"Classe\t"<<classe<<"\tMention au Bac\t"<<mention;
}