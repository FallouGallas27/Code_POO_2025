#include"Entreprise.h"
Entreprise::Entreprise(int idee,string nomee,int num, string noom,string prenoom,string comp,int nbs):directeur(num,noom,prenoom,comp)
{ 
    idE=idee;
    nomE=nomee;
    nbsalaries=nbs;
    cout<<"\nAppel du const d'entreprise \t"<<nomE;
}

Entreprise::~Entreprise()
{
    cout<<"\nAppel du dest d'entreprise\t"<<nomE<<endl;
}
void Entreprise::affiche(){
    cout<<"\nLe numero\t"<<idE<<" est l'entreprise\t"<<nomE<<" dont le directeur est";
    directeur.affiche();
    cout<<"\t et a \t"<<nbsalaries;
}
int Entreprise::clef(){
    return idE;
}