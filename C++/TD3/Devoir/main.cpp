#include"liste.h"
int main(){
    liste p;
    p.ajout(1);
    p.ajout(2);
    p.ajout(3);
    p.ajout(4);
    cout<<"\n Apres l'ajut\n";
    p.affiche();
    cout<<"\n Apres la suppression de 3";
    p.supprimer(3);cout<<"\n";
    p.affiche();
    liste d;
    cout<<"\noperateur '='\n";
    d=p;
    d.affiche();
    liste w(d);
    w.affiche();
}