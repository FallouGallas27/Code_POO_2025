#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal
{
private:
    string nom;
public:
    Animal(string n):nom(n){}
    virtual void s_exprimer()= 0;
    virtual string getNom() const { return nom; }
};

#endif