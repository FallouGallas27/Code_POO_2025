#ifndef _INSTITUT_H
#define _INSTITUT_H
#include "Membre.h"
struct  Liste
{
    Membre *m;
    Liste* suiv;
};
class Institut
{
private:
    Liste * liste;
    string nomis;
public:
    Institut(string);
    ~Institut();
    void ajouter( Membre*);
    void affiche();
    double moyenne();
    
};
#endif