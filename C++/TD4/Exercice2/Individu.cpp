#include"Individu.h"
Individu::Individu(int num ,string noom ,string prenoom)
{
    nom=noom;
    prenom=prenoom;
    id=num;
    cout<<"\nAppel du const d'individu\t"<<nom ;cout<<"  "<<prenom<<endl;
}

Individu::~Individu()
{
    cout<<"\n Appel du dest 'individu \t"<<nom;cout<<prenom;
}
void Individu:: affiche(){
    cout<<"Monsieur  "<<prenom <<" "<<nom <<"iddentifiant "<<id;
}
    int Individu::clef(){
        return id;
    }