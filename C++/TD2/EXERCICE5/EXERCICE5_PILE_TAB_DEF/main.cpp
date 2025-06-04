#include"pile.h"
int main(){
    pile p(10);
    p<<1<<2<<3<<4<<5;
    cout<<"\nLa pile initial\n";
    p.afficher();
    p>>5;
    p<<7;
    cout<<"\n affichage de la pile apres le depilage et l'empilage\n";
    p.afficher();
}