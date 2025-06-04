#include<iostream>
#include"Compte.h"
#include"CompteCour.h"
using namespace std;
int main(){
    Compte c(1000);CompteCour p(10);
    c.versement(322032);
    cout<<"\nAvant retrait\n";
    c.affiche();
    c.retrait(30000.4);
    cout<<"\nApres retrait\n";
    c.affiche();
    p.versement(2500);
    cout<<"\n Apres versement\n";
    p.affiche();
    p.retrait(5000000);
    p.affiche();
}