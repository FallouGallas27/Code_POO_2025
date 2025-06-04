#ifndef OISEAU_H
#define OISEAU_H
#include"Animal.h"
class oiseau :public Animal
{
public:
    oiseau(string noom ):Animal(noom){
    cout <<" Appel du const de  "<<nom;
    }
    virtual~oiseau(){
    cout<<"Appel du dest de "<<nom;
    }
     virtual void s_exprime()=0;
};

#endif
