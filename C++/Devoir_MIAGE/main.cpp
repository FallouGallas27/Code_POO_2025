#include<iostream>
#include"TabPointeur.h"
using namespace std;
int main(){
    TabPointeur p(5),q;int n=6,m=4,r=3,v=10;
    p.ajout(&n);
    p.ajout(&m);
    p.ajout(&r);
    p.ajout(&v);
    //p.ajout(2);
    p.affiche();
    p.supprimer(6);
    cout<<"\n===========APRES LA SUPPRESSION DE ==========6\n";
    p.affiche();
    TabPointeur k=p;
    k.affiche();
    q=k;
    q.affiche();
}