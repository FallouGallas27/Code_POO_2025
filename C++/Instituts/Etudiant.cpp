#include"Etudiant.h"
Etudiant::Etudiant(string noom,string prenoom,string adress,int annee,double moy,string group)
:Personne( noom,prenoom, adress, annee){
    moy_annuelle=moy;
    groupe=group;
    cout<<"\nAppel du const de l'etudiant "<<prenom<<"\t"<<nom<<endl;
}
Etudiant::~Etudiant()
{
    cout<<"\nAppel du dest de l'etudiant "<<prenom<<"\t"<<nom<<endl;
}
void Etudiant::affiche(){
    cout<<"L'etudiant :"<<prenom<<"  "<<nom<<"\tadresse: "<<adresse<<"\tArrivee :  "<<annee_d_arrive
    <<"\tmoyen annuelle  "<<moy_annuelle<<"\t groupe  "<<groupe<<endl;
}