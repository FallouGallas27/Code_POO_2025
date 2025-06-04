#include "Combat.h"


Combat::Combat(Date d,string s,double c,double frsc):Evenement(d,s,c)
{
    frais_sec = frsc;
}

void Combat::affiche(){
    Evenement::affiche();
    cout<<"\tFrais de securite\t"<<frais_sec<<"\tCout total\t"<<calcul_cout()<<endl;
}
double Combat::calcul_cout(){
    return cout_base + frais_sec;
}
double Combat::cout_total(){
    return cout_base;
}
ostream& operator<<(ostream& sortie,Combat& c){
    sortie<<"Date\t"<<c.date.getJour()<<"/"<<c.date.getMois()<<"/"
    <<c.date.getAnnee()<<"\tsujet\t"<<c.sujet<<"\tCout de base\t"<<c.cout_base<<"\tFrais securite\t"<<c.frais_sec<<"\tCout total\t"<<c.calcul_cout()<<endl;
    return sortie;
}