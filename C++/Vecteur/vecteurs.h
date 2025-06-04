#include<iostream>

using namespace std;
class Vecteur{
    int m_dimension;
    float *m_x;
    public:
    Vecteur(int);
    Vecteur( const Vecteur&);
    int composante(int i);
    void composante(int ,float);
    void affiche(Vecteur&p);
    friend void operator<<(ostream &sortie, const Vecteur &v);
};