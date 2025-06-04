#include <iostream>
#include <cstring>
using namespace std;

struct Voiture
{
    char cle[20];
    char gamme[255];
    char modele[255];
    int annee;
    char presentation[255];
};

class Societe
{
private:
    int ligne;
    int colonne;
    Voiture *** voiture;
public:
    Societe(int, int);
    int hachage(char ccle[20]);
    ~Societe();
    void insertion(Voiture*);
    void supprimer(char ccle[20]);
    bool recherche(char ccle[20]);
    friend void affiche(const Societe&);
    Societe (const Societe&);
};
