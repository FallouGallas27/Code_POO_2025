#ifndef CANARI_H
#define CANARI_H
#include "Oiseau.h"
class Canari : public Oiseau
{
private:
    /* data */
public:
    Canari(string n):Oiseau(n){}
    void s_exprimer(){
        cout<<"cui-cui"<<endl;
    }
    string getNom() const{return Oiseau::getNom();}
};



#endif