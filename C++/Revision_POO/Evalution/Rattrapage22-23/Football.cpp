#include "Football.h"

Football::Football(Date d, string s, double c, double t):Evenement(d,s,c)
{
    nbre_ticket = t;
}

void Football::affiche(){
    Evenement::affiche();
    cout<<"Nbre de ticket vendue\t"<<nbre_ticket<<"\tCout total\t"<<calcul_cout();
}

double Football::calcul_cout(){
    int gain = nbre_ticket *  1000;
    return cout_base + gain *20/100;
}
double Football::cout_total(){
    return cout_base;
}

ostream& operator<<(ostream& sortie, Football& f){
    sortie<<"Date\t"<<f.date.getJour()<<"/"<<f.date.getMois()<<"/"
    <<f.date.getAnnee()<<"\tsujet\t"<<f.sujet<<"\tCout de base\t"<<f.cout_base<<"\tNbre de ticket vendue\t"<<f.nbre_ticket<<"\tCout total\t"<<f.calcul_cout() <<endl;
    return sortie;
}