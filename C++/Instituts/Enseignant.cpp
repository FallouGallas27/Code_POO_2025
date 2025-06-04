#include "Enseignant.h"
Enseignant::Enseignant(string noom,string prenoom,string adress,int annee,double sall,string bureaau,int num,string statt)
:Membre_Personnel(noom,prenoom,adress,annee,sall,bureaau,statt){
    numero_casier=num;
    cout<<"\n Appel du const de l'enseignant "<<prenom<<"  "<<nom<<endl;
}

Enseignant::~Enseignant()
{
    cout<<"\nAppel du dest de l'enseignant  "<<prenom<<"  "<<nom<<endl;
}
void Enseignant::affiche(){
    cout<<"Le P.A :"<<prenom<<"  "<<nom<<"\tTitre  "<<statut<<"\tadresse:  "<<adresse<<"\tArrivee : "<<annee_d_arrive<<"\tBureau : "
    <<bureau<<"\tSalaire : "<<salaire<<"\tNumero casier  "<<numero_casier<<endl;
}