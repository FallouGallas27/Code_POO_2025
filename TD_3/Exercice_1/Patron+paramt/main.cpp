#include "Vecteur.h"

int main(){
    Vecteur<int, Taille5> V1;
    V1[0] = 1;
    V1[1] = 2;
    V1[2] = 3;
    V1[3] = 4;
    try {
        for (int i = 0; i < 6; i++) {
            cout << V1[i] << " ";
        }
        cout << endl;
    } catch (ErrorIndice& e) {
        std::cerr << e.what() << '\n';
    }

}