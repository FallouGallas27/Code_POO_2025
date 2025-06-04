#include "Colis.h"


Colis::Colis(double p, Mode m, string add, string aep,double v):Courrier(p, m, add, aep)
{
    volume = v;
}

Colis::~Colis(){}
void Colis::affiche(){
    Courrier::affiche();
    cout<<"\tVolume\t"<<volume<<"\tTimbre\t"<<calcul_timbre()<<endl;
}

double Colis::calcul_timbre(){
    return 0.25 * volume + 1.0 * poids;
}