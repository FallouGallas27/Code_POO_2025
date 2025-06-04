#ifndef PROFESSEURS_H
#define PROFESSEURS_H
#include"salarie.h"
class professeurs:public salarie
{
private:
    char** p_matiere;
    chaine p_diplome;
    int nbmatiere;
public:
    professeurs(chaine,chaine,chaine);
    ~professeurs();
    char* get_diplome();
    char* get_matiere(int);
    void affiche();
    void set_matiere(chaine );
    professeurs(const professeurs&);
    professeurs& operator=( professeurs&);

};
#endif
