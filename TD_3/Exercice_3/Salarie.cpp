#include "Salarie.h"

Salarie ::Salarie(string n, string p):nom(n),prenom(p){
    cout<<"Appel du const de salarie " <<this<<endl;
}

Salarie:: ~Salarie(){
    cout<<"Appel du dest de Salarie "<<this<<endl;
}

string Salarie::getNom()const{
    return nom;
}

string Salarie::getPrenom()const{
    return prenom;
}
Salarie ::Salarie(const Salarie& S){
    nom = S.nom;
    prenom = S.prenom;
    cout<<"Le const de recopie de Salarie\n";
}
Salarie& Salarie::operator=(const Salarie& S){
    if (this != &S)
    {
        nom = S.nom;
        prenom = S.prenom;
        cout<<"L'operateur d'affetation\n";
    }
    
}
void Salarie::affiche(){
    cout<<"Prenom "<<prenom<<" Nom "<<nom;
}