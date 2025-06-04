#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
#include<string>
using namespace std;
class Animal
{
protected:
     string nom;
public:
    Animal(string n);
    virtual ~Animal();
    virtual void s_exprime()=0;
};
#endif

