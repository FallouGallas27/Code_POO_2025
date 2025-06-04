#include "Pile.h"

int main(){
    try {
        Pile p(5);
        p.empiler(10);
        p.empiler(20);
        p.empiler(30);
        p.empiler(40);

        cout << "Depile: " << p.depiler() << endl;
        cout << "Depile: " << p.depiler() << endl;
        cout << "Depile: " << p.depiler() << endl;
        cout << "Depile: " << p.depiler() << endl;

        // Tentative de dépiler une pile vide
        cout << "Depile: " << p.depiler() << endl;
    } catch (const ErreurDimension& e) {
        cerr << "Erreur de dimension: " << e.dim << endl;
    }

    return 0;
}