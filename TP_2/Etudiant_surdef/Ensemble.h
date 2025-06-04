#include <iostream>
using namespace std;
#ifndef ENSEMBLE_H
#define ENSEMBLE_H
#//include "Etudiant.h

struct Etudiant {
    string nom;
    string prenom;
    int annee_darrivee;
    string email;
    int id;
    Etudiant(string n = "", string p = "", int a = 0, string e = "", int i = 0)
        : nom(n), prenom(p), annee_darrivee(a), email(e), id(i) {}
    friend ostream& operator<<(ostream &os, const Etudiant &e) {
        os << "Nom: " << e.nom << ", Prenom: " << e.prenom 
           << ", Annee d'arrivee: " << e.annee_darrivee 
           << ", Email: " << e.email << ", ID: " << e.id;
        return os;
    }
       
};
class Ensemble {
    private:
        Etudiant *tab;
        int taille;
        int capacite;
    public:
    Ensemble (int cap = 10);
    Ensemble (const Ensemble &e);
    Ensemble &operator=(const Ensemble &e);
    ~Ensemble();
    Ensemble& operator<<(const Etudiant &e);
    Ensemble& operator>>(Etudiant &e);
    bool operator%(const Etudiant &e) const;
    Ensemble& operator+(const Ensemble &e);
    Ensemble& operator*(const Ensemble &e);
    void afficher() ;
    void init();
    bool existe(const Etudiant &e) const;
    Etudiant* prochain();
};
#endif // ENSEMBLE_H}
