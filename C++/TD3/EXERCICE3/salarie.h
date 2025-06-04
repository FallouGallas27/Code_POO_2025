#ifndef SALARIE_H
#define SALARIE_H
#include<iostream>
#include<string.h>
using namespace std;
typedef char chaine[30];
class salarie
{
private:
    chaine s_nom;
    chaine s_prenom;
public:
    salarie(chaine,chaine);
    ~salarie();
    char* get_nom();
    char* get_prenom();
    void affiche();
    salarie(const salarie&);
    salarie& operator=(const salarie&);
};
#endif
