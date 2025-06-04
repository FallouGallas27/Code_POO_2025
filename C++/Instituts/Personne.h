#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include<string>
using namespace std;

class Personne{
    protected:
    string nom;
    string prenom;
    string adresse;
    int annee_d_arrive;
    public:
    Personne(string noom,string prenoom,string adress,int annee){
        nom=noom;
        prenom=prenoom;
        adresse=adress;
        annee_d_arrive=annee;
        cout<<"\n Appel du const de la personne "<<prenom<<"\t"<<nom <<endl;
    }
    virtual ~Personne(){
        cout<<"\nAppel du dest de la personne "<<prenom<<"\t"<<nom <<endl;
    }
    virtual void affiche()=0;
};
#endif