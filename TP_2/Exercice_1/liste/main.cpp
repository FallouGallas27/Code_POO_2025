#include<cstring>
#include "Pile.h"
int main(){
    Pile p;
    p.empiler(1);
    p.empiler(2);
    p.empiler(3);
    p.empiler(4);
    p.empiler(5);
    p.afficher();
    p.depiler();
    p.afficher();
    cout<<"Le sommet de la pile est: "<<p.sommet()<<endl;
    cout<<"le constructeur de recopie\n";
    Pile d(p);
    d.afficher();
    d.empiler(9);
    d.empiler(12);
    p = d;
    p.afficher();
    char exp[] ="56+2*";
    cout<<"Le resultat final de l'expression "<<p.evaluation(exp,strlen(exp))<<endl;
}
