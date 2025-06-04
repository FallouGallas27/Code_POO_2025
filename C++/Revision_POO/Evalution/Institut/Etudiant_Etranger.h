#ifndef ETUDIANT_ETRANGER_H
#define ETUDIANT_ETRANGER_H
#include"Etudiant.h"



class Etudiant_Etranger : public Etudiant
{
protected:
    string pays;
public:
    Etudiant_Etranger(string , int , string,string );
    ~Etudiant_Etranger();
    virtual void affiche();
};
#endif