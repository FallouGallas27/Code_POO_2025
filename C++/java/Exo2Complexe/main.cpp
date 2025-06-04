#include"complexe.h"
int main(){
    complexe c(3,9),c1(2,5),c2(0,0),c3(9,-10),c4(10,20),c5(0,0);
    cout<<"\nLe nombre complexe::";c.affiche();
    cout<<"\nle module est::\t"<<c.module();
    c1=c1.ajouter(c);
    cout<<"\nLa fonction ajouter\n";
    c1.affiche();
    c1=c1.multiplier(c);
    cout<<"\nla multiplication\t";c1.affiche();
    cout<<"\n========LA SURDEFINITION DE L'OPERATEUR <<==========\n\n";
    c2=c3+c4;
    cout<<"\nLa somme avec l'operateur +\t";
    cout<<c2;
    //cout<<"L'utilisation de l'operateur *\n";
    c5=c3*c4;
    cout<<"\n\n L'affichage de la mutiplication\t\t";cout<<c5;

}
