#ifndef SECRETAIRE_H
#define SECRETAIRE_H
#include "Personnell.h"

class Secretaire : public Personnel {
    public:
    Secretaire(string , int, string);
    ~Secretaire();
    virtual void affiche();
};
#endif