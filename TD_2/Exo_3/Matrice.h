#include<iostream>
using namespace std;

class Errorindice{
    public:
    int i,j;
    Errorindice(int a = 0,int b = 0){
        i = a;
        j = b;
        cout<<"Incice invalide "<<i <<" "<<j;
    }
};
class Matrice 
{
private:
    int ligne;
    int colone;
    int **mat;
public:
    Matrice(int a = 0, int b = 0);
    int getligne(){
        return ligne;
    }
    int getcolone(){
        return colone;
    }
    ~Matrice();
    int GetElelments(int, int);
    void SetElements(int,int,int);
    Matrice produit(const Matrice&);
    void affiche();
    Matrice (const Matrice&);
    Matrice& operator=( Matrice&);
};
