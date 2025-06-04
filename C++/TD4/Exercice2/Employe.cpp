#include"Employe.h"
Employe::Employe(int num,string noom,string prenoom,string comp):Individu(num,noom,prenoom)
{
    competence=comp;
    cout<<"\nAppel du const d'employe\t"<<prenom<<"\t"<<nom;
}

Employe::~Employe()
{
    cout<<"\n Appel du dest d'employe\t"<<prenom<<"\t"<<nom;
}
void Employe:: affiche(){
    Individu::affiche();
    cout<<" Specialiste en "<<competence;
}
int Employe::clef(){
    return id;
}
