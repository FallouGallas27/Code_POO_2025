#include<iostream>

using namespace std;

struct matrice{
    int l;
    int c;
    int **m;
};
class MatriceCreuse
{
protected:
    int colonne;
    int **matri_creuse;
public:
    MatriceCreuse(matrice);
    ~MatriceCreuse();
    void affiche();
};
