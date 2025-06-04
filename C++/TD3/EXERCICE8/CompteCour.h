#ifndef COMPTECOUR_H
#define COMPTECOUR_H
#include "Compte.h"
class CompteCour:public Compte
{
private:
    /* data */
public:
    CompteCour(long);
    ~CompteCour();
    bool retrait(double);
    //void affiche();
     
};
#endif
