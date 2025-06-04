#include"vect.h"
int main() {
Vecteur v1(3);
Vecteur v2(2);
v1[0] = 1.0; // Appel à l’opérateur sur-défini []
v1[1] = 3.0;
v1[2] = 2.0;
v2[0] = -1.0;
v2[1] = 4.0;
cout << "\nv1 = " << v1;
cout << "\nv2 = " << v2;
cout << "\n|v1| = " << v1.norme();
cout << "\n|v2| = " << v2.norme();
cout << "\nv1.v2 = " << v1 * v2;
//cout << "\nv1 + v2 = " << v1 + v2;
}
