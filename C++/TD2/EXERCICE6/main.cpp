#include"Ensemble.h"
int main(){
    Ensemble E(10);
    E.ajouter(1);
    E.ajouter(2);
    E.ajouter(3);
    E.ajouter(4);
    E.ajouter(5);
    E.ajouter(6);
    E.ajouter(7);
    cout<<"\n LE cardinal est\t"<<E.cardinal();
    cout<<"\nAffichage de l'ensemble\n";
    E.afficher();
    if(E.contient(6)){
        cout<<"\nL'element est dans l'ensemble\n";
    }
    else {
        cout<<"\nL'element n'est pas dans l'ensemble\n";
    }
    E.supprimer(6);
    E.supprimer(1);
    E.afficher();
}