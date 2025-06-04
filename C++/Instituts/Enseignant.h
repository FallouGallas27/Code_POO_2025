#include"Membre_Personnel.h"
class Enseignant :public Membre_Personnel
{
protected:
    int numero_casier;
public:
    Enseignant(string noom,string prenoom,string adress,int annee,double sall,string bureaau,int num,string statt);
    ~Enseignant();
    void affiche();
};

