#include"Personne.h"
class Institut
{
private:
    string nomI;
    int max;
    int nbelmt;
    Personne** p;
public:
    Institut(string noom,int maxx);
    ~Institut();
    void ajout(Personne *b);
    void affiche();
    double moy_annee();
};

