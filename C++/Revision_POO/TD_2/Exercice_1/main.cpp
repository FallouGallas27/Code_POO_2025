#include <iostream>
#include "str.h"

using namespace std;

int main() {
    str s1; // Test du constructeur par défaut
    s1.affiche();
    cout << endl;
    
    char mot[] = "Hello";
    str s2(mot); // Test du constructeur avec une chaîne
    s2.affiche();
    cout << endl;
    
    str s3 = s2; // Test du constructeur de recopie
    s3.affiche();
    cout <<endl;
    
    str s4;
    s4 = s2; // Test de l'opérateur d'affectation
    s4.affiche();
    cout << endl;
    
    char mot2[] = " World";
    str s5(mot2);
    str s6 = s2 + s5; // Test de l'opérateur de concaténation
    s6.affiche();
    cout << endl;
    
    // Test de l'opérateur de comparaison
    if (s2 == s3) {
        cout << "s2 et s3 sont égaux" << endl;
    } else {
        cout << "s2 et s3 sont différents" << endl;
    }
    
    return 0;
}
