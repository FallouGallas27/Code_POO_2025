#include <iostream>
#include <cstring>
using namespace std;
struct Voiture
{
    char cle[200];
    char marque[200];
    char gamme[255];
    int annee;
    char modele[255];
    char presentation[255];
};

class Societe
{
private:
    int nbligne;
    int nbcolonne;
    Voiture *** voiture;
public:
    Societe(int, int );
    ~Societe();
    void insertion(Voiture*);
    void supprimer(char clee[200]);
    bool recherche(char*);
    int h(char clee[200]);
    friend void affiche(const Societe&);
    Societe(const Societe&);
    Societe& operator<<(Voiture *);
    Societe& operator>>(char *);
    bool operator%(char*clee);
};
