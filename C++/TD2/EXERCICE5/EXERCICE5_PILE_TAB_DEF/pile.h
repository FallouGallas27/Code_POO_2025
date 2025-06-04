#include<iostream>
using namespace std;
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
    pile& operator<<(int );
    pile& operator>>(int);
    int sommetpile();
    bool estvide();
    void afficher();
};

