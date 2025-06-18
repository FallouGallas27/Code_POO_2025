#ifndef VECT_H
#define VECT_H
#include<iostream>
#include <exception>
using namespace std;
class Errorindice: public exception{
    private:
    int idx;
    string message;
    public:
    Errorindice( int elemt):idx(elemt){
        message = "Debordement d'indice\n";
    }
    const char* what() const noexcept override{
        return message.c_str();
    }
};
class Vect
{
private:
    int n;
    int *adr;
public:
    Vect(int d):n(d){
        adr = new int[n];
    }
    ~Vect(){
        delete adr;
    }
    int& operator[](int g){
        if (g < 0 ||g >= n )
        {
            throw Errorindice(g);
        }
        return adr[g];
    }
};
#endif