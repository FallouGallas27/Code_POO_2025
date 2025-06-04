#include"matrice.h"
matrice f(matrice p){
    cout<<"\n SITUATION D'INVOCATION \n";
    return p;
}
int main(){
    matrice M(4,4),M1(4,4);
    M.affiche();
    //cout<<M.setElement();
    //M.getElement(4);
   // M.affiche();
    matrice M2(4,4);M2=M.produit_mat(M1);
    cout<<"le produit de deux matrice\n";
    M2.affiche();
    matrice M3(M2);
    M3.affiche();
    matrice M4=M1;
    matrice m(2,3);
    m=M4=M1;
    cout<<"La surdefinition de l'operateur=\n";
    m.affiche();
    int som=M4.somme();
    m=f(M);
    cout<<"\nla somme des elements de ls matrice est\t"<<som;

}