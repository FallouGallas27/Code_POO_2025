#include"Administratif.h"
Administratif::Administratif(string noom,string prenoom,string adress,int annee,double moy,string group,string statt)
:Membre_Personnel(noom,prenoom,adress,annee,moy,group,statt){
    cout<<"\n Appel du const du personnel administratif "<<prenom<<"\t"<<nom;
}

Administratif::~Administratif()
{
    cout<<"\n Appel du dest du personnel administratif "<<prenom<<"\t"<<nom;
}
void Administratif::affiche(){
    cout<<"Le P.A :"<<prenom<<"  "<<nom<<"\tTitre  "<<statut<<"\tadresse:  "<<adresse<<"\tArrivee : "<<annee_d_arrive<<"\tBureau : "
    <<bureau<<"\tSalaire : "<<salaire<<endl;
}
