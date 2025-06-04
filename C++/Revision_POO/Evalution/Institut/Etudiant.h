#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "Personne.h"

class Etudiant : public Personne{
    protected:
    string classe;
    public:
    Etudiant(string n,int a, string c): Personne(n,a){
        classe = c;
    }
    ~Etudiant(){}
    void affiche(){
        Personne::affiche();
        cout<<"\t Classe\t"<<classe;
    }
};
#endif