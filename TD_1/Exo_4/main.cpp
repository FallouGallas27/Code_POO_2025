#include <iostream>
#include "Cercle.h"

using namespace std;

int main() {
    Cercle c1(10, 2, 3);
    Cercle c2(10, 2, 3);
    Cercle c3(5, 0, 0);

    cout << "Cercle 1: ";
    c1.afficher();
    cout << "Surface: " << c1.surface() << ", Perimetre: " << c1.perimetre() << endl;

    // cout << "Cercle 2: ";
    // c2.afficher();

    // cout << "Cercle 3: ";
    // c3.afficher();

    if (c1.Compare(c2)) {
        cout << "Cercle 1 et Cercle 2 sont egaux." << endl;
    } else {
        cout << "Cercle 1 et Cercle 2 sont differents." << endl;
    }
    if (c1 == c2) {
        cout << "Les cercles c1 et c2 sont identiques (==)." << endl;
    }
    
    cout << "Affichage avec << : " << c1 << endl;
    
    

    return 0;
}