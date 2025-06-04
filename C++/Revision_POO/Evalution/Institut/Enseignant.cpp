#include "Enseignant.h"

Enseignant:: Enseignant(string n,int a,string d,string l,int s):Personnel(n,a,d){
    labo = l;
    salaire = s;
}

Enseignant::~Enseignant(){}

void Enseignant::affiche(){
    Personnel::affiche();
    cout<<"\tLaboratoire \t"<<labo<<"\tSalaire\t"<<salaire;
}