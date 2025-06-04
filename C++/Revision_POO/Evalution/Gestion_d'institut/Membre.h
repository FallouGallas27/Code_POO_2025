#ifndef _MEMBRE_H
#define _MEMBRE_H
#include <iostream>

using namespace std;
class Membre
{
protected:
    string  nom;
    string  address;
    int annee;
public:
    Membre(string, string, int);
    ~Membre();
    virtual void affiche();
    virtual double moyenne();
};
#endif