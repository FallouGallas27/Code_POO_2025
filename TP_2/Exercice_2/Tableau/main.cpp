#include "File.h"

int main(){
    File F(7),x;
    F.enfiler(0);
    F.enfiler(1);
    F.enfiler(2);
    F.enfiler(3);
    F.enfiler(4);
    F.evaluation();
    F.defiler();
    F.defiler();
    F.enfiler(7);
    F.enfiler(8);
    F.afficher();
    File d = F;
    d.afficher();
    d.enfiler(9);
    x = F = d;
    cout<<"L'operateur d'affectation\n";
    x.afficher();
    x.evaluation();
}