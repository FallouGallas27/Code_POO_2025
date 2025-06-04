#ifndef _PERSONEL_H
#define _PERSONEL_H
#include "Membre.h"

class Personnel : public Membre
{
protected:
    string bureau;
public:
    Personnel(string, string,int , string);
    ~Personnel();
    void affiche();
    double moyenne();
};
#endif