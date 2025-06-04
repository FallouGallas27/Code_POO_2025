#ifndef COURRIER_H
#define COURRIER_H
#include <iostream>

using namespace std;

enum Mode {express, normal};
enum Format{A3,A4};
class Courrier
{
protected:
    double poids;
    Mode mode ;
    string adr_dest;
    string adr_exp;
public:
    Courrier(double, Mode, string, string);
    ~Courrier();
    virtual void affiche();
    virtual double calcul_timbre();

};
#endif