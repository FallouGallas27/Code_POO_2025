#ifndef ETUDIANT_SENEGALAIS
#define ETUDIANT_SENEGALAIS
#include "Etudiant.h"

class Etudiant_Senegalais :public Etudiant
{
protected:
    string mention;
public:
    Etudiant_Senegalais(string ,int, string ,string);
    ~Etudiant_Senegalais();
    virtual void affiche();
};

#endif