#ifndef _ENSEIGNANT_H
#define _ENSEIGNANT_H
#include "Personnel.h"
class Enseignant : public Personnel
{
protected:
    int num_casier;
public:
    Enseignant(string, string, int, string, int);
    ~Enseignant();
    void affiche();
    double moyenne();
};



#endif