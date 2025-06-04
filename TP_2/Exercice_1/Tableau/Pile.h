#include <iostream>
using namespace std;

class Pile
{
private:
    int *tab;
    int  taille;
    int nbelmt;
public:
    Pile(int n = 0);
    ~Pile();
    void empiler(int );
    int depiler();
    int sommet();
    bool est_vide();
    void affiche();
    Pile(  Pile&);
    Pile& operator = ( Pile&);
    int evaluation_postfix(char *, int);
    void infix_to_postfix(const char* infixe, char* postfixe);
};

