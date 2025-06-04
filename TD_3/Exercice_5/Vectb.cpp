
// Vectb.cpp
#include "Vectb.h"

Vectb::Vectb(int a, int b) : Vect(b - a + 1) {
    inf = a;
    sup = b;
    cout << "Constructeur de Vectb - Tableau avec indices de " << inf << " à " << sup << "\n";
}

int& Vectb::operator[](int d) {
    if (d < inf || d > sup) {
        throw Errorindice(d);
    }
    // Conversion de l'indice personnalisé vers l'indice du tableau de base
    return Vect::operator[](d - inf);
}
