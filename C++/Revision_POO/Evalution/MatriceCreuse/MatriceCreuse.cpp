#include "MatriceCreuse.h"


MatriceCreuse::MatriceCreuse(int l,int c):ligne(l), colone(c)
{
    M = new int[ligne * colone];
}

MatriceCreuse::~MatriceCreuse()
{
    delete [] M;
}

int& MatriceCreuse::operator()(int l,int c){
    if(l < 0 || l >= ligne && c < 0 ||c >= colone)
      throw ErreurDim(l,c);
    return M[l*colone + c];
}
// int main() {
//     try {
//         MatriceCreuse mat(3, 3);
//         mat(1, 1) = 5;  // Si vous implémentez l'opérateur () pour l'affectation
//         std::cout << "Element mat (1, 1): " << mat(1, 9) << std::endl;
//     } catch (const ErreurDim& e) {
//         cout<<"Depassement des bornes\n";
//     }
//     return 0;
// }
int main() {
    try {
        MatriceCreuse mat(3, 3); // Créer une matrice 3x3

        // Affecter des valeurs
        mat(0, 0) = 10;
        mat(1, 1) = 20;
        mat(2, 2) = 30;

        // Accéder aux valeurs
        cout << "mat(0, 0) = " << mat(0, 0) << endl;
        cout << "mat(1, 1) = " << mat(1, 1) << endl;
        cout << "mat(2, 2) = " << mat(2, 2) << endl;

        // Provoquer une exception
        cout << mat(3, 3) << endl; // Hors des bornes
    } catch (const ErreurDim& e) {
        cerr << "Erreur : indices hors limites ("
             << e.lig << ", " << e.col << ")" << endl;
    } catch (const exception& e) {
        cerr << "Exception : " << e.what() << endl;
    }

    return 0;
}
