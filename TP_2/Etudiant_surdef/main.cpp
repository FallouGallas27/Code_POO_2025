#include"Ensemble.h"

int main() {
    Ensemble e1(5);
    e1 << Etudiant("Gallas","Ndiaye", 2020, "ndiaye@gmail.com", 1)
       << Etudiant("Fallou","Ndiaye", 2020, "gallas@gmail.com", 2)
         << Etudiant("Moussa","Ndiaye", 2020, "moussa@gmail.com", 3);
    Ensemble e2(5);
    e2 << Etudiant("Fatou","Ndiaye", 2020, "ndiaye@gmail.com", 4)
       << Etudiant("Aissatou","Ndiaye", 2020, "ndiaye@gmail.com", 5)
         << Etudiant("Ndeye","Ndiaye", 2020, "ndiaye@gmail.com", 6);
    Ensemble e3 = e1 + e2;
    Ensemble e4 = e1 * e2;
    cout << "Ensemble e1:" << endl;
    e1.afficher();
    cout << "Ensemble e2:" << endl;
    e2.afficher();
    cout << "Ensemble e3 (union):" << endl;
    e3.afficher();
    cout << "Ensemble e4 (intersection):" << endl;
    e4.afficher();
    Etudiant e;
    // while (e1 >> e) {
    //     cout << "Etudiant extrait de e1: " << e << endl;
    // }
    cout << "Prochain etudiant dans e1: " << *(e1.prochain()) << endl;
    return 0;
}