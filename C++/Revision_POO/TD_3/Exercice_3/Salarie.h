#ifndef SALARIE_H
#define SALARIE_H
#include<iostream>
#include<cstring>
using namespace std;
class Salarie
{
protected:
    char nom[10];
    char prenom[20];
public:
    Salarie(char n[10],char p[20]);
    ~Salarie();
    char* getNom();
    char* getPrenom();
    void affiche();
};
#endif 