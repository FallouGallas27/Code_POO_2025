#ifndef MANGASIN_H
#define MANGASIN_H
#include "Article.h"

class Mangasin
{
protected:
    Article **tab;
    int nmax;
    int ncourt;
public:
    Mangasin(int);
    ~Mangasin();
    void affiche();
    void ajout(Article *);
    double calcul_prix();
};


#endif