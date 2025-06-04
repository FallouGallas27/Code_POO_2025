#include "Courrier.h"


Courrier::Courrier(double p, Mode m, string add, string aep)
{
    poids = p;
    mode = m;
    adr_dest = add;
    adr_exp = aep;
}

Courrier::~Courrier(){}

void Courrier::affiche(){
    cout<<"\nAffichage d'un courrier\n";
    cout<<"Poids\t"<<poids<<"\tMode d'expedition\t"<<mode<<"\t Adress dest\t"<<adr_dest<<"\tAdress d'exp\t"<<adr_exp;
}
double Courrier::calcul_timbre(){
    return 0;
}
