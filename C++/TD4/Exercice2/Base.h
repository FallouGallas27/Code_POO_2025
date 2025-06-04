#ifndef BASE_H
#define BASE_H
#include<iostream>
#include<string>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"\n Appel du const de la base";
    }
    virtual ~Base(){
        cout<<"\n Appel du dest de la base";
    }
    virtual void affiche()=0;
    virtual int clef()=0;
};
#endif