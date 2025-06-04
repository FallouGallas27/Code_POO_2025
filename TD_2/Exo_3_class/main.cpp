#include "Ensemble.h"
Ensemble<int,7> f(const Ensemble<int, 7>& E) {
    Ensemble <int, 7> E2(E); 
    return E2;
}
int main(){
    Ensemble< double ,7 > E;
    Ensemble< double ,7 > E2;
    E.ajouter(1.1);
    E.ajouter(2.1);
    E.ajouter(3.1);
    E.ajouter(4.3);
    E.ajouter(5.8);
    E.ajouter(6);
    E.ajouter(7);
    cout<<"Ajout des elements de 0  a 7\n";
    E.affiche();
    cout<<"Suppression des elements 3, 6, 8\n";
    E.supprimer(3.1);
    E.supprimer(6);
    E.supprimer(8);
    E.affiche();
    cout<<"Le cardinal de l'ensemble est :"<<E.getCardinal()<<endl;
    // Ensemble <double, 7> E1;
    // E1 = f(E);
    // E1.affiche();
    // E2 =  E1;
    // E2.affiche();

}