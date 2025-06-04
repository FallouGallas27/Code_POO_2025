#include"Enseignant.h"
int main(){
    char nom[]="diop";char prenom[]="gallas";char mat[]="docteur";char matiere[]="mathematique";char matiere1[]="phisique";
    char nom1[]="ndiaye";char prenom1[]="mariama";char mat1[]="licence";char matiere0[]="statmath";char matiere2[]="chimie";
    Enseignant E(nom,prenom,mat);E.affiche();
    E.getMatiere(matiere);
    E.getMatiere(matiere1);
    cout<<"\nAvec la fonction get\n";
    E.affiche();
    Enseignant E3(nom1,prenom1,mat1);E3.affiche();
    Enseignant E2(E);
    E2.affiche();cout<<endl;
    E2.getMatiere(matiere0);
    E2.getMatiere(matiere2);
    E2.affiche();
    cout<<"\nLa fonction setNom\t";
    cout<<E.setNom();
    cout<<"\nLa fonction setprenom\t";cout<<E.setPrenom();
    cout<<"\nLa fonction setdiplome\t";cout<<E.setDiplome();cout<<endl;
    E.affiche();
    E3=E;
    //Enseignant E1(E);
    E3.affiche();
    
}