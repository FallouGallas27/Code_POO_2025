
#include"Animal.h"
using namespace std;
class liste
{
protected:
    int max;
    int m_elmt;
    Animal** p;
public:
    liste(int);
    //~liste();
    void ajouter(Animal*);
    void s_exprime();
};

