#include<iostream>
using namespace std;
class matrice
{
protected:
    int m_ligne ;
    int m_colone;
    int **mat;
public:
    matrice(int ,int);
    ~matrice();
    int setElement();
    void getElement(int );
    matrice produit_mat(const matrice&);
    void affiche();
    matrice(matrice&);
    int somme();
    matrice& operator=(const matrice&);
    int operator[](int);
};


