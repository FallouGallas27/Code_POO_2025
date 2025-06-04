#include"Personne.h"

class Etudiant:public Personne
{
private:
    double moy_annuelle;
    string groupe;
public:
    Etudiant(string noom,string prenoom,string adress,int annee,double moy,string group);
    ~Etudiant();
    void affiche();
};


