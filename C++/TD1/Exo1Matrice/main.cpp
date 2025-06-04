#include"matrice.h"
int main(){
    Matrice *m,*M,*g;
    m=creer_matrice(4,4);
    affiche_mat(m);
    cout<<"\nla transpose de la matrice\n"<<endl;
    M=transpose_mat(m);
    affiche_mat(M);
    cout<<"\nla multiplication de la matrice\n";
    g=produit_mat(M,m);
    affiche_mat(g);
    detruire(m);
}