#include<iostream>
using namespace std;
struct noeud{
    int val;
    struct noeud*suiv;
};
typedef struct noeud * Liste;
class file
{
private:
    Liste tete;
    Liste queue;
public:
    inline file(/* args */);
    inline ~file();
    void enfiler(int n);
    int defiler();
    int tetefile();
    bool filevide();
    void affiche();
};

inline file::file(/* args */)
{
    cout<<"\nAppel du constructeur"<<this<<endl;
    tete=queue=nullptr;
}

inline file::~file()
{
    cout<<"\nAppel du destructeur"<<this<<endl;
}
