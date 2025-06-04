#include <iostream>

using namespace std;
struct Liste
{
    int lig;
    int col;
    int valeur;
    Liste *suiv;
};
struct  matrix
{
    int ligne;
    int colonne;
    int **matrice;
};

class MatriceCreuse
{
private:
    matrix mat;
    Liste* liste;
public:
    MatriceCreuse(matrix );
    MatriceCreuse(){}
    ~MatriceCreuse();
    void ajout(Liste*);
    int getTete();
    void affiche();
    MatriceCreuse (const MatriceCreuse&);
    MatriceCreuse& operator =(const MatriceCreuse& );
};
