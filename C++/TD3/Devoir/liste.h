#include<iostream>
using namespace std;
struct noeud
{
    int elmt;
    noeud *suiv;
};
typedef noeud* Liste;
class liste
{
private:
    Liste debut;
public:
    liste();
    ~liste();
    void ajout(int);
    void supprimer(int);
    void affiche();
    void ajoutq(int);
    liste(const liste&);
    liste& operator=(const liste&);
};

