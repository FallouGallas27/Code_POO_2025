#include "Lettre.h"

Lettre::Lettre(double p, Mode m, string add,string aep, Format f):Courrier(p, m, add, aep)
{
    format = f;
}

Lettre::~Lettre(){}

void Lettre::affiche(){
    Courrier::affiche();
    cout<<"\tFormat\t"<<format<<"\tTimbre\t"<<calcul_timbre()<<endl;;
}

double Lettre::calcul_timbre(){
    if (mode == normal)
    {
        if(format == A3)
         return 350 + 1.0 * poids;
        else
        return 250 + 1.0 * poids;
    }
    else
    {
        if (format == A3)
        {
            return 2* (350 + 1.0 * poids);
        }
        else 
         return 2 * (250 + 1.0 * poids);
        
    }
    
}