#ifndef _ETUDIANT_H
#define _ETUDIANT_H
#include "Membre.h"

class Etudiant : public Membre
{
private:
    double moy;
    string group;
public:
    Etudiant(string, string, int, double, string);
    ~Etudiant();
    void affiche();
    double moyenne();
};
#endif