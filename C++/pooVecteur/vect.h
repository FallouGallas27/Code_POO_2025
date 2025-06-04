#include<iostream>
#include<math.h>
using namespace std;

class Vecteur {
int m_dimension;
double *m_x;
public:
Vecteur(int n); // Constructeur par défaut
 Vecteur(const Vecteur &); // Constructeur de copie
 ~Vecteur(); // Destructeur
friend ostream& operator << (ostream&, Vecteur&);
double norme();
double operator * (Vecteur& v2);
Vecteur& operator = (Vecteur& v2);
Vecteur operator + (Vecteur& v2);
double& operator [] (int i); // ième composante du vecteur
};