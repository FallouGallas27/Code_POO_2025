#include "Matrice.h"

int main(){
    Matrice m(3,3);
    m.affiche();
    cout<<"get\t"<<m.getElements(2,1)<<endl;
    m.setElement(0,0,4);
    m.affiche();
    Matrice p(3,3);
   // p.affiche();
    Matrice n;
    cout<<"Produit\n";
    n = p.produit(m);
    n.affiche();
}