#include<stdexcept>
#include "Matrice.h"

Matrice::Matrice(int lign, int col){
    if (lign <= 0 || col <= 0)
    {
        throw invalid_argument("Dimension invalide pour la matrice\n");
    }
    
    ligne = lign;
    colone = col;
    mat = new int*[lign];
    for (int i = 0; i < lign; i++)
    {
        mat[i] = new int[colone];
    }
    cout<<"Appel du constructeur "<<this<<endl;
}

Matrice::~Matrice()
{
    if (mat)
    {
        for (int i = 0; i < ligne; i++)
        {
            if (mat[i])
            {
                delete [] mat[i];
            }
        }
        
        delete[] mat;
    }
}
int Matrice::GetElelments(int l, int c){
    if (l < 0 || l >ligne && c < 0 ||c > colone)
    {
        throw Errorindice (l, c);
    }
    
    return mat[l][c];
}
void Matrice::SetElements(int l,int c,int n){
    if (l < 0 || l >ligne && c < 0 ||c > colone)
    {
        throw Errorindice (l, c);
    }
    
    mat[l][c] = n;
}
Matrice Matrice::produit(const Matrice& other){
    if (colone != other.ligne)
        throw invalid_argument("Dimensions incompatibles pour le produit matriciel.");

    Matrice result(ligne, other.colone);
    for (int i = 0; i < ligne; ++i) {
        for (int j = 0; j < other.colone; ++j) {
            int somme = 0;
            for (int k = 0; k < colone; ++k) {
                somme += mat[i][k] * other.mat[k][j];
            }
            result.mat[i][j] = somme;
        }
    }
    return result;
}
void Matrice::affiche()  {
    for (int i = 0; i < ligne; ++i) {
        for (int j = 0; j < colone; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
Matrice::Matrice (const Matrice& m){
    ligne = m.ligne;
    colone = m.colone;
    mat = new int*[ligne];
    for (int i = 0; i < ligne; i++)
    {
        mat[i] = new int[colone];
        for (int j = 0; j < colone; j++)
        {
            mat[i][j] = m.mat[i][j];
        }
        
    }
    cout<<"Le constructeur de recopie\n";
    
}

Matrice& Matrice ::operator=( Matrice& m){
    if (this == &m)
    {
        return *this;
    }
    for (int i = 0; i < ligne; i++)
    {
        if(mat[i]) delete[] mat[i];
    }
    delete [] mat;
    ligne = m.ligne;
    colone = m.colone;
    mat = new int *[ligne];
    for (int i = 0; i < ligne; i++)
    {
        mat[i] = new int [colone];
        
    }
    for (int i = 0; i < ligne; i++)
    {
        for (int j = 0; j < colone; j++)
        {
            mat[i][j] = m.mat[i][j];
        }
        
    }
    //cout<<"L'operateur d'affectation\n";
    return *this;
}

