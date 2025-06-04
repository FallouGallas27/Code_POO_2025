#include "Ensemble.h"

int somme(Ensemble<int, 9> E){
    int sum = 0;
    E.init();
    while (E.existe())
    {
        sum+= E.prochain();
    }
    return sum;
}
int main(){
    Ensemble <int, 9> E;
    Ensemble <int, 9> E1;
    Ensemble <int, 9> E2;
    Ensemble <int, 9> E3;
    Ensemble <int, 9> E4;
    cout<<"Ajout des elements de 1 a 7\n";
    E<<1<<2<<3<<4<<5<<6<<7;
    E.affiche();
    cout<<"Supression des elements 2, 4 ,8\n";
    E>>2>>4>>8;
    E.affiche();
    E1 = E;
    E1<<2;
    E1.affiche();
    E3<<8<<9<<10<<11;
    cout<<"Union des ensemble \n";E.affiche();E3.affiche();
    E2 = E + E3;
    E2.affiche();
    cout<<"Intersection des ensemble \n";E2.affiche();E3.affiche();
    E4 = E2 * E3<<1<<2<<4;
    E4.affiche();
    cout<<"La somme est :" <<somme(E4);
}