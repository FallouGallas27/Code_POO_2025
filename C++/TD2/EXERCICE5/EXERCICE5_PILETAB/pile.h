#include<iostream>
#include<cassert>
using namespace std;
class pile
{
private:
    int taille;
    int sommet;
    int elmt;
    int *tab;
public:
    pile(int tail=0);
    ~pile();
    void empiler(int );
    void depiler();
    int sommetpile();
    bool estvide();
    void afficher();
};

