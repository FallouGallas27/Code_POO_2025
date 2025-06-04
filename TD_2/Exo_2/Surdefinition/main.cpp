#include "Ensemble.h"

Ensemble f(Ensemble e){
    Ensemble E(e);
    return E;
}

int somme(Ensemble e){
    int p = 0;
    e.init();
    while (e.exist())
    {
       // cout<<"E = "<<e.prochain()<<" ";
        p += e.prochain();
        //break;
    }
    return p;
}
int main(){
    Ensemble E1(10),E5(5),E6;
    cout<<"Les elements de l'ensemble\n";
    E1<<1<<2<<3<<4<<5<<6<<7;
    E1.afficher();
    E1>>2>>5>>1;
    E5<<11<<12<<14<<3<<4;
    E1.afficher();
    if (E1 % 4)
    {
        cout<<"4 est dans l'ensemble E1\n";
    }
    else cout<<"4 n'est pas dans E1\n";
    Ensemble E2 =(E1),E3,E4;
    E3 = f(E1);
    E4 = E3 = E1;
    E4.afficher();
    E5.afficher();
    E6 = E1 + E5;
    cout<<"L'operateur +";E6.afficher();
    E3 = E1 * E5;
    cout<<"L'operateur *";E3.afficher();
    int p = somme(E1);
    E1.afficher();
    cout<<"La somme est : "<<p<<endl;
}
