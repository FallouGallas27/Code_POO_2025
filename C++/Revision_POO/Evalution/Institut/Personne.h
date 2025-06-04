#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>

using namespace std ;

class Personne
{
protected:
    string nom;
    int annee;
public:
    Personne(string, int );
    ~Personne();
    virtual void affiche();
};
#endif