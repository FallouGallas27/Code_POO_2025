#include "Evenement.h"


Evenement::Evenement(Date d, string s, double c)
{
    date  = d;
    sujet = s;
    cout_base = c;
}

Evenement::~Evenement(){}

ostream& operator<<(ostream& sortie, Evenement& v){
    sortie<<"Date\t"<<v.date.getJour()<<"/"<<v.date.getMois()<<"/"
    <<v.date.getAnnee()<<"\tsujet\t"<<v.sujet<<"\tCout de base\t"<<v.cout_base<<endl;
    return sortie;
}

void Evenement::affiche(){
    cout<<*this;
}

double Evenement::calcul_cout(){
    return cout_base;
}

double Evenement::cout_total(){
    return 0;
}