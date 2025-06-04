#include<iostream>
using namespace std;
struct liste{
    int element;
    struct liste*suivant;
};
typedef struct liste* Liste;
class pile
{
private:
Liste tete;
public:
    pile();
    ~pile();
    void empiler(int elmt=0);
    void depiler();
    int sommet()const;
    bool est_vide();
    void afficher();
};



