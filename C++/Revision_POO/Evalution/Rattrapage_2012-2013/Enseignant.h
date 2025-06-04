#include <iostream> 
#include <cstring>

using namespace std;
struct  Date_nais
{
    int jour;
    int mois;
    int annee;
};
class ErreurIndice{
    public:
    int i;
    ErreurIndice(int n):i(n){}
};
class Enseignant
{
private:
    char* nom;
    char* prenom;
    char* diplome;
    Date_nais date;
    char *matiere[5];
public:
    Enseignant(char*, char*,char*, int ,int ,int);
    ~Enseignant();
    void affiche();
    char* getDiplome();
    char* getIemMatiere(int);
    void ajouter(char*);
    void supprimer(char*);
    bool teste_matiere(char*);
    Enseignant& operator<<(char*);
    Enseignant& operator>>(char*);
    bool operator%(char*);
    Enseignant(const Enseignant&);
    Enseignant& operator=(const Enseignant&);
};
