#include "vect.h"

class Vectb : protected Vect{
  int inf;    // Borne inférieure
    int sup;    // Borne supérieure
    public:
    Vectb(int, int);     // Constructeur
    ~Vectb();                 // Destructeur
    void affiche();           // Afficher les éléments bornés
    int & operator[](int);
};

Vectb::Vectb(int n, int k) : Vect(k-n+1) {
  cout<<"Appel du constructeur de vectb\n";
  inf =n;
  sup = k;
}

Vectb::~Vectb() {
    cout<<"Appel du destructeur de vectb\n";
}
int& Vectb::operator[](int i){
    if(i < 0 || i >= sup){
        throw Erreurdim(i);
    }
    return Vect::operator[](i -inf);
}
// void Vectb::affiche(){
//     for (int i = inf; i < sup - inf ; i++)
//     {
//         cout<<Vect::operator[](i);
//     }
    
// }