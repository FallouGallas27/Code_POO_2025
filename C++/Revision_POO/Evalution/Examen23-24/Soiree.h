#ifndef SOIREE_H
#define SOIREE_H
#include <iostream>

using namespace std;

class Date{
    protected:
    int jour;
    int mois;
    int annee;
    public:
    Date(int j, int m, int a){
        jour = j;
        mois = m;
        annee = a;
    }
    Date(){}
    int getJours(){
        return jour;
    }
    int getMois(){
        return mois;
    }
    int getAnnee(){
        return annee;
    }
};
class Soiree
{
protected:
    string theme;
    Date date;
    double frais_location;
    string salle;
public:
    Soiree(string, string,Date , double);
    ~Soiree();
    friend ostream &  operator<<(ostream&, Soiree&);
    virtual void affiche();
    virtual double calcul_cout();
    virtual double gain();
};
#endif