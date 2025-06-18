#ifndef OISEAU_H
#define OISEAU_H
#include "Animal.h"

class Oiseau : public Animal
{
private:
    /* data */
public:
    Oiseau(string n):Animal(n){}
    void s_exprimer(){}
    string getNom()const{return Animal::getNom();}
};


#endif