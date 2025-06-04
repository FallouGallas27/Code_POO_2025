#include <iostream>
using namespace std;
#include "vectb.h"
int main() {
    try {
        // Création d'un vecteur borné avec des indices de 5 à 9
        Vectb v(5, 9);

        // Ajout d'éléments dans le vecteur borné
        v[5]=(10);  // Ajoute 10 à l'indice 5
        v[6]=(20);  // Ajoute 20 à l'indice 6
        v[7]=(30);  // Ajoute 30 à l'indice677
        // Accès aux éléments via l'opérateur []
        cout << "Element a l'indice 5 : " << v[5] << endl;
        cout << "Element a l'indice 6 : " << v[6] << endl;
        cout << "Element a l'indice 7 : " << v[7] << endl;

        // Tentative d'accès à un indice hors des bornes (doit lever une exception)
        // cout << "Element à l'indice 4 : " << v[4] << endl; // Lèvera une exception

        // Affichage des éléments du vecteur borné
        //cout << "Elements du vecteur borné : ";
       // v.affiche();
        cout << endl;

    } catch (const Erreurdim& e) {
        cerr << "Erreur : Indice hors des bornes (" << e.hors << ")" << endl;
    }

    return 0;
}