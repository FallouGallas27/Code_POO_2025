#include <iostream>
using namespace std;
struct Matrice{
    int nb_lignes;
    int nb_colonnes;
    float **elements;
};

Matrice *creer_mat(int nbl, int nbcol){
    Matrice *m = new  Matrice;
    m->nb_colonnes = nbcol;
    m->nb_lignes = nbl;
    m->elements = new float*[nbl];
    for (int i = 0; i < nbl; i++)
    {
        m->elements[i] = new float[nbcol];
        
    }
    for (int i = 0; i < nbl; i++)
    {
        for (int j = 0; j < nbcol; j++)
        {
            m->elements[i][j] = 0.0;
        }
        
    }
    
    return m;
}

void destruction (Matrice * m){
    if (m)
    {
        if(m->elements){
            for (int i = 0; i < m->nb_lignes; i++)
            {
                delete m->elements[i];
            }
            
        }
        delete m->elements;
    }
    
    delete m;
    cout<<"Destruction reussi"<<endl;
}
void affiche(Matrice* m){
    for (int i = 0; i < m->nb_lignes; i++)
    {
        for (int j = 0; j < m->nb_colonnes; j++)
        {
            cout<<m->elements[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
Matrice* transpose(Matrice* m) {
    Matrice* t = creer_mat(m->nb_colonnes, m->nb_lignes);
    for (int i = 0; i < m->nb_lignes; i++) {
        for (int j = 0; j < m->nb_colonnes; j++) {
            t->elements[j][i] = m->elements[i][j];
        }
    }
    return t;
}
Matrice* produit(Matrice* A, Matrice* B) {
    if (A->nb_colonnes != B->nb_lignes) {
        cout << "Erreur: dimensions incompatibles pour le produit." << endl;
        return nullptr;
    }
    Matrice* C = creer_mat(A->nb_lignes, B->nb_colonnes);
    for (int i = 0; i < A->nb_lignes; i++) {
        for (int j = 0; j < B->nb_colonnes; j++) {
            for (int k = 0; k < A->nb_colonnes; k++) {
                C->elements[i][j] += A->elements[i][k] * B->elements[k][j];
            }
        }
    }
    return C;
}

int main() {
    Matrice *A = creer_mat(2, 3);
    Matrice *B = creer_mat(3, 2);

    // Remplir A
    A->elements[0][0] = 1; A->elements[0][1] = 2; A->elements[0][2] = 3;
    A->elements[1][0] = 4; A->elements[1][1] = 5; A->elements[1][2] = 6;

    // Remplir B
    B->elements[0][0] = 7;  B->elements[0][1] = 8;
    B->elements[1][0] = 9;  B->elements[1][1] = 10;
    B->elements[2][0] = 11; B->elements[2][1] = 12;

    cout << "Matrice A:" << endl;
    affiche(A);

    cout << "Matrice B:" << endl;
    affiche(B);

    Matrice* C = produit(A, B);
    cout << "\nProduit A x B:" << endl;
    if (C) affiche(C);

    Matrice* T = transpose(A);
    cout << "\nTransposee de A:" << endl;
    affiche(T);

    // Libération mémoire
    destruction(A);
    destruction(B);
    destruction(C);
    destruction(T);

    return 0;
}
