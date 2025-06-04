#ifndef EVENEMENT_H
#define EVENEMENT_H
#include <iostream>
class Date
{
private:
    int jour;
    int mois;
    int annee;
public:
    Date(int j, int m, int a){
        jour = j;
        mois = m;
        annee = a;
    }
    ~Date(){}
    int getJour(){
        return jour;
    }
    int getMois(){
        return mois;
    }
    int getAnnee(){
        return annee;
    }
    Date(){};
};

using namespace std;
class Evenement
{
protected :
    Date date;
    string sujet;
    double cout_base;
public:
    Evenement (){}
    Evenement(Date, string, double);
    ~Evenement();
    friend ostream & operator<<(ostream&, Evenement&);
    virtual void affiche();
    virtual double calcul_cout();
    virtual double cout_total();
};

#endif