#include "Membre_Personnel.h"
class Administratif:public Membre_Personnel
{
public:
    Administratif(string noom,string prenoom,string adress,int annee,double moy,string group,string statt);
    ~Administratif();
    void affiche();
};

