
// main.cpp
#include "Vectb.h"

int main() {
    try {
        cout << "=== Test de la classe Vect ===\n";
        Vect v(6);  // Alloue 6 elements (indices 0 e 5)
        
        // Remplissage du vecteur
        v[1] = 2;
        v[2] = 6;
        v[3] = 8;
        v[4] = 5;
        v[5] = 3;
        
        cout << "Contenu du vecteur v: ";
        for(int i = 1; i <= 5; i++) {
            cout << "v[" << i << "]=" << v[i] << " ";
        }
        cout << "\n\n";
        
        cout << "=== Test de la classe Vectb ===\n";
        Vectb V(2, 5);  // Vecteur avec indices de 2 e 5
        
        // Initialisation de quelques valeurs
        V[2] = 10;
        V[3] = 20;
        V[4] = 30;
        V[5] = 40;
        
        cout << "Contenu du vecteur V:\n";
        cout << "V[2] = " << V[2] << "\n";
        cout << "V[3] = " << V[3] << "\n";
        cout << "V[4] = " << V[4] << "\n";
        cout << "V[5] = " << V[5] << "\n";
        
        cout << "\n=== Test des conditions limites ===\n";
        
        // Test d'acces hors limites
        try {
            cout << "Tentative d'acces e V[1] (doit lever une exception):\n";
            cout << V[1];
        } catch(const Errorindice& e) {
            cout << "Exception attrapee: " << e.what() << "\n";
        }
        
        try {
            cout << "Tentative d'acces e V[6] (doit lever une exception):\n";
            cout << V[6];
        } catch(const Errorindice& e) {
            cout << "Exception attrapee: " << e.what() << "\n";
        }
        
    } catch(const std::exception& e) {
        std::cerr << "Exception non geree: " << e.what() << '\n';
    }
    
    return 0;
}