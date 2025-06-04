#include "Ensemble.h"

int main(){
    Ensemble E(10);
    E.ajouter(0);
    E.ajouter(1);
    E.ajouter(2);
    E.ajouter(3);
    E.ajouter(4);
    E.ajouter(5);
    E.ajouter(6);
    E.ajouter(7);
    cout<<"Le cardinal est : "<<E.cardinal()<<endl;
    if (E.contient(5))
    {
        cout<<"L'element est dans l'ensemble \n";
    }
    else
        cout<<"L'eleent n'est pas dans l'ensemble\n";
    cout<<"Avant la suppression des elements\n";
    E.afficher();
    E.supprimer(1);
    E.supprimer(3);
    E.supprimer(7);
    cout<<"Apres la suppression des elements\n";
    E.afficher();
}