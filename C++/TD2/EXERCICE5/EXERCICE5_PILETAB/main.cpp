#include"pile.h"
int main(){
    pile p(10);
    p.empiler(1);
    p.empiler(2);
    p.empiler(3);
    p.empiler(4);
    p.empiler(5);
    cout<<"\n Le sommet de la pile est \t"<<p.sommetpile();
    cout<<"\n Affichage de le pile\n";
    p.afficher();
    cout<<"\nDepiler\n";
    p.depiler();
    p.afficher();
    cout<<"\nempiler\n";
    p.empiler(8);
    p.afficher();
}