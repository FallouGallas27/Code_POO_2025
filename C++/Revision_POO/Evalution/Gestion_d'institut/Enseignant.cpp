#include "Enseignant.h"

Enseignant::Enseignant(string n, string ad, int an, string b, int nc): Personnel(n, ad, an, b)
{
    num_casier = nc;
}

Enseignant::~Enseignant(){}
void Enseignant::affiche(){
    Personnel::affiche();
    cout<<"\tNumero casier\t"<<num_casier;
}
double Enseignant::moyenne(){
    return 0;
}