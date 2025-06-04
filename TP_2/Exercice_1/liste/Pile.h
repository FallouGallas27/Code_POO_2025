#include <iostream>

using namespace std;
struct Noeud
{
    int elemt;
    Noeud *suiv;
};

class Pile
{
private:
    Noeud *liste;
public:
    Pile();
    ~Pile();
    void empiler(int);
    int depiler();
    int sommet();
    bool est_vide();
    void afficher();
    Pile(const Pile&);
    Pile& operator= (const Pile&);
    int evaluation(char*, int);
};
