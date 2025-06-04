// #include <iostream>
// #include "MatriceCreuse.h"
// using namespace std;


// // Implémentation du constructeur
// MatriceCreuse::MatriceCreuse(matrix m) {
//     liste = nullptr; // Initialisation de la liste à nullptr
//     mat.ligne = m.ligne;
//     mat.colonne = m.colonne;

//     // Allocation dynamique de la matrice
//     mat.matrice = new int*[m.ligne];
//     for (int i = 0; i < m.ligne; i++) {
//         mat.matrice[i] = new int[m.colonne];
//         for (int j = 0; j < m.colonne; j++) {
//             mat.matrice[i][j] = m.matrice[i][j]; // Copie des valeurs
//         }
//     }

//     // Ajout des éléments non nuls à la liste chaînée
//     for (int i = 0; i < mat.ligne; i++) {
//         for (int j = 0; j < mat.colonne; j++) {
//             if (mat.matrice[i][j] != 0) {
//                 Liste* p = new Liste;
//                 p->lig = i;
//                 p->col = j;
//                 p->valeur = mat.matrice[i][j];
//                 p->suiv = liste; // Ajout en tête de liste
//                 liste = p;
//             }
//         }
//     }
// }

// // Implémentation du destructeur
// MatriceCreuse::~MatriceCreuse() {
//     // Libération de la mémoire de la matrice
//     for (int i = 0; i < mat.ligne; i++) {
//         delete[] mat.matrice[i];
//     }
//     delete[] mat.matrice;

//     // Libération de la mémoire de la liste chaînée
//     Liste* courant = liste;
//     while (courant != nullptr) {
//         Liste* temp = courant;
//         courant = courant->suiv;
//         delete temp;
//     }
// }

// // Méthode pour ajouter un élément à la liste chaînée
// void MatriceCreuse::ajout(Liste* p) {
//     if (p == nullptr) return;

//     p->suiv = liste; // Ajout en tête de liste
//     liste = p;
// }

// // Méthode pour obtenir la valeur en tête de liste
// int MatriceCreuse::getTete() {
//     if (liste != nullptr) {
//         return liste->valeur;
//     }
//     return 0; // Retourne 0 si la liste est vide
// }

// // Méthode pour afficher la liste chaînée
// void MatriceCreuse::affiche() {
//     Liste* courant = liste;
//     while (courant != nullptr) {
//         cout << "|" << courant->lig << "|" << courant->col << "|" << courant->valeur << "| -> ";
//         courant = courant->suiv;
//     }
//     cout << "NULL" << endl;
// }

// // Constructeur de copie
// MatriceCreuse::MatriceCreuse(const MatriceCreuse& m) {
//     // Copie des dimensions de la matrice
//     mat.ligne = m.mat.ligne;
//     mat.colonne = m.mat.colonne;

//     // Allocation dynamique de la matrice
//     mat.matrice = new int*[mat.ligne];
//     for (int i = 0; i < mat.ligne; i++) {
//         mat.matrice[i] = new int[mat.colonne];
//         for (int j = 0; j < mat.colonne; j++) {
//             mat.matrice[i][j] = m.mat.matrice[i][j]; // Copie des valeurs
//         }
//     }

//     // Copie profonde de la liste chaînée
//     liste = nullptr;
//     Liste* courant = m.liste;
//     while (courant != nullptr) {
//         Liste* p = new Liste;
//         p->lig = courant->lig;
//         p->col = courant->col;
//         p->valeur = courant->valeur;
//         p->suiv = liste; // Ajout en tête de liste
//         liste = p;
//         courant = courant->suiv;
//     }
// }

// // Opérateur d'affectation
// MatriceCreuse& MatriceCreuse::operator=(const MatriceCreuse& p) {
//     if (this == &p) return *this; // Gestion de l'auto-affectation

//     // Libération de la mémoire de la matrice
//     for (int i = 0; i < mat.ligne; i++) {
//         delete[] mat.matrice[i];
//     }
//     delete[] mat.matrice;

//     // Libération de la mémoire de la liste chaînée
//     Liste* courant = liste;
//     while (courant != nullptr) {
//         Liste* temp = courant;
//         courant = courant->suiv;
//         delete temp;
//     }

//     // Copie des dimensions de la matrice
//     mat.ligne = p.mat.ligne;
//     mat.colonne = p.mat.colonne;

//     // Allocation dynamique de la matrice
//     mat.matrice = new int*[mat.ligne];
//     for (int i = 0; i < mat.ligne; i++) {
//         mat.matrice[i] = new int[mat.colonne];
//         for (int j = 0; j < mat.colonne; j++) {
//             mat.matrice[i][j] = p.mat.matrice[i][j]; // Copie des valeurs
//         }
//     }

//     // Copie profonde de la liste chaînée
//     liste = nullptr;
//     courant = p.liste;
//     while (courant != nullptr) {
//         Liste* d = new Liste;
//         d->lig = courant->lig;
//         d->col = courant->col;
//         d->valeur = courant->valeur;
//         d->suiv = liste; // Ajout en tête de liste
//         liste = d;
//         courant = courant->suiv;
//     }

//     return *this;
// }

#include "MatriceCreuse.h"


MatriceCreuse::MatriceCreuse(matrix m)
{
    liste = new Liste;
    liste = nullptr;
    mat.ligne = m.ligne;
    mat.colonne = m.colonne;
    mat.matrice = new int*[m.ligne];
    for (int i = 0; i < m.ligne; i++)
    {
        mat.matrice[i] = new int[m.colonne];
    }
    for (int i = 0; i < m.ligne; i++)
    {
        for (int j = 0; j < m.colonne; j++)
        {
            mat.matrice[i][j] = m.matrice[i][j];
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
         for (int j = 0; j < 5; j++)
         {
            if(mat.matrice[i][j] != 0){
                Liste * p = new Liste;
                p->lig = i;
                p->col = j;
                p->valeur = mat.matrice[i][j];
                p->suiv = liste;
                liste = p;
            }
         }
    }
   
}

MatriceCreuse::~MatriceCreuse()
{
    for (int i = 0; i < mat.ligne; i++)
    {
        delete mat.matrice[i];
    }
    delete []mat.matrice;
    Liste *d;
    while (d)
    {
        Liste *p = d;
        d = d->suiv;
        delete p;
    }

}
void MatriceCreuse::ajout(Liste* p){
   
    if (liste == nullptr)
    {
        liste->suiv = p;
    }
    else{
        p->suiv = liste;
        liste = p;
    }
            
}
            

int MatriceCreuse::getTete(){
    if(liste != nullptr)
        return liste->valeur;
}
void MatriceCreuse::affiche(){
    Liste *p = liste;
    while (p!= nullptr)
    {
        cout<<"|"<<p->lig<<"|"<<p->col<<"|"<<p->valeur<<"|-> ";
        p = p->suiv;
    }
    cout << "NULL"<<endl;
}
MatriceCreuse::MatriceCreuse(const MatriceCreuse& m) {
    liste = nullptr;
    
    Liste *p = m.liste;
    while (p)
    {
        Liste * d = new Liste;
        d->col = p->col;
        d->lig =p->lig;
        d->valeur = p->valeur;
        d->suiv = liste;
        liste = d;
        p = p->suiv;
    }
    

}

MatriceCreuse& MatriceCreuse::operator=(const MatriceCreuse & p){
    if(this == &p) return *this;
    for (int  i = 0; i < p.mat.ligne; i++)
    {
        delete []mat.matrice[i];
    }
     delete mat.matrice;
    Liste *k = liste;
    while (k)
    {
        Liste * d = k;
        k = k->suiv;
        delete d;
    }
    mat.ligne = p.mat.ligne;
    mat.colonne = p.mat.colonne;
    mat.matrice = new int*[mat.ligne];
    for (int i = 0; i < mat.ligne; i++)
    {
        mat.matrice[i] = new int[mat.colonne];
    }
    for (int i = 0; i < mat.ligne; i++)
    {
        for (int j = 0; j < mat.colonne; j++)
        {
            mat.matrice[i][j] = p.mat.matrice[i][j];
        }
        
    }
    
    liste = nullptr;
    Liste* d = p.liste;
    while (d)
    {
        Liste* g = new Liste;
        g->col = d->col;
        g->lig = d->lig;
        g->valeur = d->valeur;
        if (liste == nullptr)
        {
            liste = g;
        }
        else
        {
            g->suiv = liste;
            liste = g;
        }
        d = d->suiv;
        
    }
    return *this;
}
// MatriceCreuse& MatriceCreuse::operator=(const MatriceCreuse& p) {
//     if (this == &p) return *this; // Gestion de l'auto-affectation

//     // Libération de la mémoire de la matrice
//     for (int i = 0; i < mat.ligne; i++) {
//         delete[] mat.matrice[i];
//     }
//     delete[] mat.matrice;

//     // Libération de la mémoire de la liste chaînée
//     Liste* courant = liste;
//     while (courant != nullptr) {
//         Liste* temp = courant;
//         courant = courant->suiv;
//         delete temp;
//     }

//     // Copie des dimensions de la matrice
//     mat.ligne = p.mat.ligne;
//     mat.colonne = p.mat.colonne;

//     // Allocation dynamique de la matrice
//     mat.matrice = new int*[mat.ligne];
//     for (int i = 0; i < mat.ligne; i++) {
//         mat.matrice[i] = new int[mat.colonne];
//         for (int j = 0; j < mat.colonne; j++) {
//             mat.matrice[i][j] = p.mat.matrice[i][j]; // Copie des valeurs
//         }
//     }

//     // Copie profonde de la liste chaînée
//     liste = nullptr;
//     courant = p.liste;
//     while (courant != nullptr) {
//         Liste* d = new Liste;
//         d->lig = courant->lig;
//         d->col = courant->col;
//         d->valeur = courant->valeur;
//         d->suiv = liste; // Ajout en tête de liste
//         liste = d;
//         courant = courant->suiv;
//     }

//     return *this;
// }
