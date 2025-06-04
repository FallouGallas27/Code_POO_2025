#include"Base.h"
class liste
{
private:
    int max;
    int nbelmt;
    Base **b;
public:
    liste(int);
    ~liste();
    void ajout(Base*);
    void affiche();
};

