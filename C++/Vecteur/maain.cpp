#include"vecteurs.h"
int main(){
    Vecteur v(3) ;Vecteur v1(v);
    v.affiche(v);cout<<"et";v.affiche(v1);
    cout <<"\nl'opertor de sortie\n";
    cout <<v1;
}