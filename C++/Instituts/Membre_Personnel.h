#ifndef MEMBRE_PERSONNEL_H
#define MEMBRE_PERSONNEL_H
#include"Personne.h"
class Membre_Personnel:public Personne
{
protected:
    string bureau;
    double salaire;
    string statut;
public:
    Membre_Personnel(string noom,string prenoom,string adress,int annee,double moy,string group,string statt)
    :Personne(noom,prenoom,adress,annee){
        bureau=group;
        salaire=moy;
        statut =statt;
        cout<<"\nAppel du const Membre personnel"<<endl;
    }
    ~Membre_Personnel(){
        cout<<"\nAppel du dest Membre personnel"<<endl;
    }
    virtual void affiche()=0;
};

#endif