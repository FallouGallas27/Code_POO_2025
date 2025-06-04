#ifndef PROFESSEURS_H
#define PROFESSEURS_H
#include"Salarie.h"
class Professeurs: public Salarie
{
private:
   char diplome[30];
   char *matiere[10];
public:
    Professeurs(char n[10],char p[20],char d[30]);
    ~Professeurs();
    char *getDiplome();
    char *getimatiere(int);
    void ajout_matiere(char*);
    void affiche();
};
#endif 