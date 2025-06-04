#ifndef MAMMIFERE_H
#define MAMMIFERE_H
#include"Animal.h"

class mamifere : public Animal{
    public:
    mamifere(string n):Animal(n)
     {
         cout<<"\n Appel du const de mmmifere\t"<<nom;
     }
    virtual~mamifere()
    {
        cout<<"\ndestruction du mammifere\t"<<nom;
    }
    virtual void s_exprime()=0;
};
#endif