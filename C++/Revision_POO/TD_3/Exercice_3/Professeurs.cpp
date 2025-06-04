#include<iostream>
#include"Professeurs.h"
using namespace std;

Professeurs::Professeurs(char n[10],char p[20],char d[30]):Salarie(n,p)
{
    strcpy(diplome,d);
    for(int  i=0;i<10;i++)
        matiere[i]= nullptr;
    cout<<"Appel du constructeur de Professeurs"<<endl;
}

Professeurs::~Professeurs()
{
    cout<<"Appel du destructeur de Professeur"<<endl;
}
char* Professeurs::getDiplome(){
    return diplome;
}
void Professeurs::ajout_matiere(char*matier){
    int i=0;
    while(i<10 && matiere[i]!=nullptr)
        i++;
    if(i<10){
        matiere[i] =matier;
    }
    else
      cout<<"Il enseigne  10 matieres deja\n ";
}

void Professeurs::affiche(){
    Salarie::affiche();
    cout<<"Diplome  "<<getDiplome()<<endl;
    cout<<"Matiere enseigne\n";
    int i=0;
    while(matiere[i]!=nullptr){
        cout<<matiere[i]<<endl;
        i++;
        }
}