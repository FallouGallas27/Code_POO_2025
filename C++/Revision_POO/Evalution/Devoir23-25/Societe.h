#include <iostream>
#include<cstring>

struct  Voiture
{   
    char * cle;
    char marque[20];
    char gamme[20];
    int annee;
    char modele[20];
    char presentation[255];
};

using namespace std;
class Societe
{
private:
    int nbml;
    int nbmc; 
    Voiture *** voiture;
public:
    Societe(int , int);
    ~Societe();
    void insertion(Voiture*);
    void supprimer(char *);
    bool recherche(char*);
    void affiche();
    int hachage(char*);
    void affiche(Voiture *);
    Societe (Societe&);
    Societe& operator<<(Voiture*);
    Societe& operator>>(char*);
    bool operator%(char*);

};
