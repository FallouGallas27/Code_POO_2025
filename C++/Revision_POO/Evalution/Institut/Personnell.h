#ifndef PERSONNELL_H
#define PERSONNELL_H
#include "Personne.h"

class Personnel :public Personne
{
protected:    
    string depart;
public:
    Personnel(string, int, string);
    ~Personnel();
    virtual void  affiche();
};
#endif