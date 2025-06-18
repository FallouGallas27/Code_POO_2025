#ifndef CHAT_H
#define CHAT_H
#include "Mamifere.h"

class chat : public Mamifere
{
private:
    /* data */
public:
    chat(string n):Mamifere(n){}
    void s_exprimer(){
        cout<<"miaou"<<endl;
    }
    string getNom()const{return Mamifere::getNom();}
};



#endif