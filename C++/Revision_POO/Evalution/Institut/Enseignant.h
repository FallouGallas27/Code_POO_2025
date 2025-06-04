#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include "Personnell.h"

class Enseignant :public Personnel{
    string labo;
    double salaire;
    public:
    Enseignant(string , int ,string, string, int);
    ~Enseignant();
    virtual void affiche();
};
#endif