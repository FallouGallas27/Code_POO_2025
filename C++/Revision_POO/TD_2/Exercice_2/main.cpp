#include"Ensemble.h"

int main(){
    Ensemble E(8);
    E.ajout(1);
    E.ajout(2);
    E.ajout(3);
    E.ajout(4);
    E.ajout(5);
    E.ajout(6);
    E.ajout(6);
    E.affiche();
    E.supprimer(3);
    E.supprimer(7);
    E.affiche();
    // Ensemble E1 = E;
    // E1.affiche();
    cout<<"\nle cardinal est "<<E.cardinal();
    cout<<"\n==========================================================\n";
    cout<<"\n==========SURDEFINITION D'OPERATEURS======================\n";
    Ensemble e(10);
    e<<1<<2<<3<<4<<5<<6<<6;
    e.affiche();cout<<endl;
    e>>3>>4>>8;
    e.affiche();

    cout<<"\n===========================================================\n";
    cout<<"\n============UNION & iNTERSECTION & AFFECTATION ============\n";
    Ensemble e1(0);
    e1=e;
    cout<<"Affectaion\n";
    e1.affiche();
    cout<<"\nUnion\n";
    e1 = e+E;
    e1.affiche();
    cout<<"\n Intersection\n";
    e1 = e*E;
    e1.affiche();
    cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    e1.init();
     while (e.existe())
     {
        e.traiter(e.prochain());
        break;
     }
     
}