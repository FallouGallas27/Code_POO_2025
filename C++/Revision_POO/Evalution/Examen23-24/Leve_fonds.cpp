#include "Leve_fonds.h"

Leve_fonds::Leve_fonds(string th,string s,Date d,double ds,double fc, double m, double lf):Soiree(th,s,d,ds)
{
    frais_com = fc;
    montant = m;
    frais_lf = lf;
}

Leve_fonds::~Leve_fonds(){}

void Leve_fonds::affiche(){
    Soiree::affiche();
    cout<<"Frais com\t"<<frais_com<<endl;
    cout<<"\tMontant\t"<<montant<<endl;
    cout<<"\tFrais leve fonds\t"<<frais_lf<<endl;
    cout<<"Cout de la soiree\t"<<calcul_cout()<<endl;
}

double Leve_fonds::calcul_cout(){
    return frais_location + frais_com +frais_lf +montant * 2 /100;
}
double Leve_fonds::gain(){
    return frais_location;
}
