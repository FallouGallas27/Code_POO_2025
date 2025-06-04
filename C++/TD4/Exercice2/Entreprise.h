#include"Employe.h"
class Entreprise
{
protected:
   int idE;
   string nomE;
   Employe directeur;;
   int nbsalaries;
public:
    Entreprise(int,string, int, string,string,string,int);
    ~Entreprise();
    void affiche();
    int clef();
};

