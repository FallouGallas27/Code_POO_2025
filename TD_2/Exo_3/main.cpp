#include "Matrice.h"
int somme(Matrice& m){
    Matrice x(m);
    int som = 0;
    for (int i = 0; i < x.getligne(); i++)
    {
        for (int j = 0; j < x.getcolone(); j++)
        {
            som += x.GetElelments(i,j);
        }
    }
    return som;
}
int main() {
    try {
        Matrice A(2, 3);
        Matrice B(3, 2);

        A.SetElements(0, 0, 1);
        A.SetElements(0, 1, 2);
        A.SetElements(0, 2, 3);
        A.SetElements(1, 0, 4);
        A.SetElements(1, 1, 5);
        A.SetElements(1, 2, 6);
        A.affiche();
        B.SetElements(0, 0, 7);
        B.SetElements(0, 1, 8);
        B.SetElements(1, 0, 9);
        B.SetElements(1, 1, 10);
        B.SetElements(2, 0, 11);
        B.SetElements(2, 1, 12);

        Matrice C = A.produit(B);
        C.affiche();
        cout<<"la somme des elements de la matrice est :"<<somme(C)<<endl;
        Matrice E(1,1);
        E = A = B;
        E.affiche();
    }
    catch (const Errorindice& e) {
        cerr << "Erreur : "  << endl;
    }

    return 0;
}
