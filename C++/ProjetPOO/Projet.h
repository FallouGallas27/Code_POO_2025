#include<iostream>
using namespace std;
typedef char chaine[50];
struct voiture{
    chaine marque ,gamme,modele;
    int annee;
    int id_voiture;
};
struct structure_liste{
    voiture vehicule;
    struct structure_liste* suiv;
};
class Projet
{
private:
    
public:
    Projet(/* args */);
    ~Projet();
};

Projet::Projet(/* args */)
{
}

Projet::~Projet()
{
}