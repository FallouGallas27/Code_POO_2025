#include <iostream>

using namespace std;
class Ensemble
{
private:
    int nmax;
    int ncourant;
    int *tab;
public:
    Ensemble(int );
    Ensemble() {}
    ~Ensemble();
    int cardinal();
    void ajout(int );
    void supprimer(int);
    bool contient(int);
    void affiche();
    Ensemble (Ensemble& );
    void f();
    Ensemble& operator<<(int );
    Ensemble& operator>>(int);
    bool operator %(int);
    Ensemble& operator = (const Ensemble&);
    Ensemble operator+(Ensemble &);
    Ensemble operator*(Ensemble&);
    void init( );
    bool existe( );
    int prochain();
    void traiter(int );
};
