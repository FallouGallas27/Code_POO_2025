#include<iostream>
using namespace std;
class file
{
private:
    int elmt;
    int tete;int card;
    int taille;
    int *tab;
public:
    file(int k=0);
    ~file();
    bool estvide();
    void ajouter(int );
    void defiler();
    int premier();
    void afficher();
    bool filevide();
    file(const file&);
};

