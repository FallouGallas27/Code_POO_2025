#include"ensemble.h"
ensemble f(ensemble e){
    cout<<"\n METTRE EN EVIDENCE LA CONDITION D'APPEL AUTOMATIQUE DU CONSTRUCTEUR DE COPIE\n";
    return e;
}
int main(){
    ensemble t2(7);
    ensemble t(15),T;
    cout<<"affichage apres ajout\t";
    t.ajouter(1);
    t.ajouter(2);
    t.ajouter(3);
    t.ajouter(4);
    t2.ajouter(10);
    cout<<"\n le cardinal de l'ensemble initial est\t"<<t.cardinal();
    cout<<"\n ===Voici l'ensemble initial=====\n";
    t2.ajouter(11);
    t2.ajouter(12);
    t2.ajouter(13);
    t2.ajouter(14);
    t2.ajouter(15);
    cout<<"\n le cardinal apres ajout est\t"<<t.cardinal();
    cout<<"\n Voici l'ensemble apres ajout\n";
    t.afficher();
    t.afficher();
    cout<<"\nLa fonction contient\t avec l'element 7\n";
    if(t.contient(7)) 
    cout<<"\nL'ensemble  contient  cet element \n";
    else 
    cout <<"\nL'ensemble ne contient pas cet element\n";
    t.supprimer(9);
    cout<<"\nSuppression de l'element 9\n";
    cout<<"\n=======La suppression d'un element===\t";
    t.afficher();
    T=f(t);
}
