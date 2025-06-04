#include<iostream>
#include<string.h>
using namespace std;
typedef char chaine[30];

class Enseignant
{
private:
   chaine m_nom;
   chaine m_prenom;
   chaine m_diplome;
   int nbmatier;
   char **m_matiere;
public:
    Enseignant(char nom[20] ,char prenom[20],char diplome[30]);
    ~Enseignant();
    Enseignant(const Enseignant&);
    char* setNom();
    char* setPrenom();
    char* setDiplome();
    void getMatiere(chaine matiere);
    void affiche();
    Enseignant& operator=(const Enseignant &);
};


