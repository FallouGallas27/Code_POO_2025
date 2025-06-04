#include<iostream>
using namespace std;
struct Matrice
{
    int nb_lignes;
    int nb_cols;
    float** elements;
};
Matrice *creer_matrice(int ligne,int colones);
void detruire(Matrice*);
void affiche_mat(Matrice*);
Matrice *transpose_mat(Matrice*);
Matrice *produit_mat(Matrice*,Matrice*);
