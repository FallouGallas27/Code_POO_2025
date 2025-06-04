#include<iostream>
using namespace std;

class File
{
private:
    int taillemx;
    int courant;
    int *tab;
public:
    File(int n = 0);
    ~File();
    void enfiler(int);
    int defiler();
    int tete();
    bool est_vide();
    void affiche();
    File(const File&);
    File& operator =(const File&);
    void afficher();
    void evaluation();
};
