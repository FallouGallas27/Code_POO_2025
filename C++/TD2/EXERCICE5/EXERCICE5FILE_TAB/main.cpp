#include"file.h"
int main(){
    file f(8);//int p;
    f.ajouter(1);
    f.ajouter(2);
    f.ajouter(3);
    f.ajouter(4);
    f.ajouter(5);
    f.ajouter(6);
    f.ajouter(7);
    cout<<"\nLe premier element de la file est:\t"<<f.premier();
    cout<<"\nAffichaige dela file\n";
    f.afficher();cout<<"\ndefiler\n";
    f.defiler();
    f.defiler();
    f.ajouter(7);
    f.afficher();
    file t(f);
    t.afficher();
}