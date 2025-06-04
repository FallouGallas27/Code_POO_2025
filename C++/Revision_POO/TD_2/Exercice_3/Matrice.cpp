#include "Matrice.h"


Matrice::Matrice( int n, int c)
{
    ligne = n;
    colone = c;
    mat = new int*[n];
    for (int i = 0; i < n; i++)
    {
        mat[i] = new int[c];
    }
    for (int i = 0; i < ligne; i++)
    {
        for (int j = 0; j < colone; j++)
        {
            mat[i][j] = rand()%12+1;
        }
        
    }
}

Matrice::~Matrice()
{
    for (int i = 0; i < ligne; i++)
    {
        delete  mat[i];
    }
    delete mat;
}

int Matrice::getElements(int l,int c){
    if(l < 0 || l > ligne && c < 0 || c > colone)
      throw ErreurIndice(l,c);
    return mat[l][c];
}

void Matrice :: setElement(int l,int c ,int e){
    if(l < 0 || l > ligne && c < 0 || c > colone)
        throw ErreurIndice(l,c);
    mat[l][c] =e;
}

void Matrice::affiche(){
    for (int i = 0; i < ligne; i++)
    {
        for (int j = 0; j < colone; j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
}

Matrice Matrice::produit(Matrice& m)  {
    // Vérification des dimensions
    if (colone != m.ligne) {
        std::cout << "Produit matriciel impossible : dimensions incompatibles.\n";
        return Matrice(0, 0); // Retourne une matrice vide
    }

    // Création de la matrice résultat
    Matrice p(ligne, m.colone);

    // Calcul du produit matriciel
    for (int i = 0; i < ligne; ++i) {
        for (int j = 0; j < m.colone; ++j) {
            p.mat[i][j] = 0; // Initialisation à 0
            for (int k = 0; k < colone; ++k) {
                p.mat[i][j] += mat[i][k] * m.mat[k][j];
            }
        }
    }

    return p;
}
int Matrice::operator()(int l , int  c){
    if(l < 0 || l > ligne && c < 0 || c > colone)
      throw ErreurIndice(l,c);
    return mat[l][c];
}
