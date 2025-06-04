#include "Vect.h"

Vect::Vect(int v) {
    n = v;
    adr = new int[n];
    // Initialisation du tableau à zéro
    for(int i = 0; i < n; i++) {
        adr[i] = 0;
    }
    cout << "Appel du constructeur de Vect\n";
}

Vect::~Vect() {
    if(adr) {
        delete[] adr;
        adr = nullptr;
    }
    cout << "Appel du destructeur de Vect\n";
}

int& Vect::operator[](int a) {
    if (a < 0 || a >= n) {  // Correction: >= au lieu de > pour les bornes
        throw Errorindice(a);
    }
    return adr[a];
}
