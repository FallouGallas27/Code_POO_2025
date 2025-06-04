#include<iostream>
using namespace std;
struct liste{
    int element;
    struct liste* suiv;
};
typedef struct liste* Liste;
class Ensemble
{
private:
int tailleMax;
    int card;
    Liste debut;
    Liste courant;
public:
    Ensemble(int p=0);
    ~Ensemble();
    int cardinal()const;
    void ajouter(int);
    void supprimer(int);
    bool contient(int);
    void afficher();
};

