#ifndef SOURIS_H
#define SOURIS_H
#include "Mamifere.h"
class souris : public Mamifere
{
private:
    /* data */
public:
    souris(string n):Mamifere(n){}
    void s_exprimer(){
        cout<<"couic"<<endl;
    }
    string getNom()const{return Mamifere::getNom();}
};

#endif