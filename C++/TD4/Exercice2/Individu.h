#include "Base.h"
class Individu:public Base
{
protected:
    int id;
    string nom;
    string prenom;
public:
    Individu(int ,string,string);
    ~Individu();
    void affiche();
    int clef();
};

