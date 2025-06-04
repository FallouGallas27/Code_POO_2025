#include <iostream> 
using namespace std;
#ifndef ENSEMBLE_H
#define ENSEMBLE_H
struct Etudiant{
     string nom;
    string prenom;
    string email;
    int id;
    int annee_arrivee;
    string description;
};
class Ensemble
{
private:
   int taille;
   int capacite;
   Etudiant *etudiant;
public:
    Ensemble(int);
    ~Ensemble();
    int cardinal()const;
    void ajoutet(Etudiant*);
    void supprimer(Etudiant*);
    bool contient(Etudiant*);
    void afficher();
    Ensemble(const Ensemble&) ;
};

#endif