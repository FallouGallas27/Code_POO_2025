#include<iostream>
#include<ctime>
using namespace std;

class ErreurIndice{
    public: 
    int i,j;
    ErreurIndice(int c,int n): i(c),j(n){}
};
class Matrice
{
private:
    int ligne;
    int colone;
    int **mat;
public:
    Matrice(){}
    Matrice(int ,int);
    ~Matrice();
    int getElements(int ,int );
    void setElement(int,int , int);
    Matrice produit(Matrice&);
    void affiche();
    int operator()(int , int );
};

