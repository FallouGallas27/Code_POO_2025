#ifndef COMPLEXE_H
#define COMPLEXE_H
#include "Soiree.h"

class Complexe
{
private:
    int nmax;
    int ncourt;
    Soiree ** tab;
public:
    Complexe(int);
    ~Complexe();
    void ajout(Soiree *);
    void affiche();
    double gain_complexe();
};

#endif