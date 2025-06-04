#ifndef ADMINISTRATIF_H
#define ADMINISTRATIF_H
#include"salarie.h"
class Administratif :public salarie
{
private:
    chaine fonction;
public:
    Administratif(chaine,chaine,chaine);
    ~Administratif();
    char* get_fonction();
    void affiche();
    Administratif(const Administratif&);
    Administratif&operator=(Administratif&);
};
#endif

