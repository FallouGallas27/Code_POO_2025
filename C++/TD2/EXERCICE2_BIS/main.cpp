#include"Ensemble.h"
int main(){
    Ensemble t2(7);
    Ensemble t(15),T,T1;
    cout<<"affichage apres ajout\t";
    t<<1<<2<<3<<4<<5;
    t2<<23<<45<<56<<32;
    cout<<"\n le cardinal de l'ensemble initial est\t"<<t.cardinal();
    cout<<"\n ===Voici l'ensemble initial=====\n";
    t<<15<<16<<17<<18;
    cout<<"\n le cardinal apres ajout est\t"<<t.cardinal();
    cout<<"\n Voici l'ensemble apres ajout\n";
    t.afficher();
    //cout<<"\n situation d'injocation de F\n";
    // T.afficher();
    cout<<"\nL'affichage du constructeur de copie\t";
    T=t;
    T.afficher();
    cout<<"\nAvec la surdefinition de % \n";
    cout<<"\n\n Est ce que l'ensemble contient l'element 7\n";
    if(t%7)cout<<"\nL'element est dans l'ensemble\n";
    else
     cout<<"\nL'element n'est pas dans l'ensemble\n";
    cout<<"\nLa suppression des elements 17 et 18\n";
    t>>17>>18;
    t.afficher();
    cout<<"Avec la surdefinition de +\n";
    cout<<"\n voici le deuxiem tableau\n";
    t2.afficher();
    t=t+t2;
    cout<<"\n affichage de +\n";
    t.afficher();
}
