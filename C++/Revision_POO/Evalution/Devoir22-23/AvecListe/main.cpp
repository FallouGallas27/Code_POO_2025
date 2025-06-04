#include "MatriceCreuse.h"
#include <iostream>

using namespace std;

int main() {
    // Création d'une matrice dense
    matrix m;
    m.ligne = 4;
    m.colonne = 5;

    // Allocation dynamique de la matrice
    m.matrice = new int*[m.ligne];
    for (int i = 0; i < m.ligne; i++) {
        m.matrice[i] = new int[m.colonne];
    }

    // Initialisation de la matrice avec des valeurs
    m.matrice[0][0] = 0; m.matrice[0][1] = 0; m.matrice[0][2] = 3; m.matrice[0][3] = 0; m.matrice[0][4] = 4;
    m.matrice[1][0] = 0; m.matrice[1][1] = 0; m.matrice[1][2] = 5; m.matrice[1][3] = 7; m.matrice[1][4] = 0;
    m.matrice[2][0] = 0; m.matrice[2][1] = 0; m.matrice[2][2] = 0; m.matrice[2][3] = 0; m.matrice[2][4] = 0;
    m.matrice[3][0] = 0; m.matrice[3][1] = 2; m.matrice[3][2] = 6; m.matrice[3][3] = 0; m.matrice[3][4] = 0;

    // Affichage de la matrice dense
    cout << "Matrice dense :" << endl;
    for (int i = 0; i < m.ligne; i++) {
        for (int j = 0; j < m.colonne; j++) {
            cout << m.matrice[i][j] << " ";
        }
        cout << endl;
    }

    // Création d'un objet MatriceCreuse à partir de la matrice dense
    MatriceCreuse d(m);

    // Affichage de la matrice creuse
    cout << "\nMatrice creuse :" << endl;
    d.affiche();

    // Test du constructeur de copie
    MatriceCreuse k = d;
    cout << "\nAffichage de la copie (constructeur de copie) :" << endl;
    k.affiche();

    // Test de l'opérateur d'affectation
    MatriceCreuse e;
    e = d;
    cout << "\nAffichage de la copie (opérateur d'affectation) :" << endl;
    e.affiche();

    // Libération de la mémoire de la matrice dense
    for (int i = 0; i < m.ligne; i++) {
        delete[] m.matrice[i];
    }
    delete[] m.matrice;

    return 0;
}