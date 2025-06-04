#ifndef INSTITUS_H
#define INSTITUS_H
#include "Personne.h"

class Institut
{
private:
    string nomInst;
    Personne **tab;
    int nmax;
    int courant;
    
public:
    Institut(string ,int);
    ~Institut();
    void ajout(Personne*);
    void affiche();
};
#endif