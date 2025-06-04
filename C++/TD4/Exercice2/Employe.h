#include"Individu.h"
class Employe:public  virtual Individu
{
protected:
    string competence;
public:
    Employe(int,string,string,string);
    ~Employe();
    void affiche();
    int clef();
};

