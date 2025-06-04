#include<iostream>
using namespace std;
struct liste{
    int element;
    struct liste* suiv;
};
typedef struct liste* Liste;
class Ensemble
{
private:
int tailleMax;
    int card;
    Liste debut;
    Liste courant;
public:
    Ensemble(int p=0);
    ~Ensemble();
    int cardinal()const;
    Ensemble& operator=(const Ensemble&);
    Ensemble& operator<<(int);
    Ensemble& operator>>(int);
    bool operator%(int);
    void afficher();
};

