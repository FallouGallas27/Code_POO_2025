#include"pile.h"
int main(){
    pile p;
    p<<1<<2<<3<<4<<5;
    cout<<"\n Affichage de la pile initial\n";
    p.afficher();
    p<<6<<7<<8<<9;
    cout<<"\nAffichage de la pile apres empilage\n ";
    p.afficher();
    p>>9>>8;
    cout<<"\n Apres le depilage des elements 9 et 8\n";
    p.afficher();
}