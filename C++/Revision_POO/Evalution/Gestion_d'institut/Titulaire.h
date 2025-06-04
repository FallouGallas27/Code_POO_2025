#ifndef _TITULAIRE_H
#define _TITULAIRE_H
#include "Enseignant.h"
class Titulaire : public Enseignant
{
private:
    double salaire;
public:
    Titulaire(string, string, int, string, int, double);
    ~Titulaire();
    void affiche();
    double moyenne();
};
#endif