#include "Anniversaire_entreprise.h"


Anniversaire_entreprise::Anniversaire_entreprise(string th,string s,Date d, double f,double fc,double fcc,double fr):Soiree(th,s,d,f)
{
    frais_com = fc;
    frais_cont = fcc;
    frais_reserve = fr;
}

Anniversaire_entreprise::~Anniversaire_entreprise(){}

void Anniversaire_entreprise::affiche(){
    cout<<"\n============ANNIVERSAIRE D'ENTREPRISE====================\n";
    Soiree::affiche();
    cout<<"Frais com\t"<<frais_com<<endl;
    cout<<"\tFrais contact\t"<<frais_cont<<endl;
    cout<<"\tFrais reservee\t"<<frais_reserve<<endl;
    cout<<"Cout de la soiree\t"<<calcul_cout()<<endl;
}
double Anniversaire_entreprise::calcul_cout(){
   return frais_location  + frais_com + frais_cont +frais_reserve;
}
double Anniversaire_entreprise::gain(){
    return frais_location;
}
