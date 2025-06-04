#include<iostream>
using namespace std;
struct liste{
    int element;
    struct liste* suiv;
};
typedef struct liste* Liste;
class pile
{
private:
    int tailleMax;
    int card;
    Liste debut;
    Liste courant;
public:
    pile();
    ~pile();
    int sommet();
    bool est_vide();
    pile& operator=(const pile&);
    pile& operator<<(int);
    pile& operator >>(int );
    void afficher();
};

