#ifndef MAMIFERE_H
#define MAMIFERE_H
#include "Animal.h"

class Mamifere : public Animal
{
private:
    /* data */
public:
    Mamifere(string n):Animal(n){}
    void s_exprimer(){}
    string getNom()const{return Animal::getNom();}
};


#endif