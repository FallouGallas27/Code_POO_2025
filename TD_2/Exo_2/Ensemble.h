#include <iostream>
using namespace std;
class Ensemble
{
private:
    int nmax;
    int card;
    int* tab;
public:
    Ensemble(int);
    ~Ensemble();
    void ajouter(int);
    void supprimer(int);
    bool contient(int);
    void afficher();
    int cardinal()const;
};
