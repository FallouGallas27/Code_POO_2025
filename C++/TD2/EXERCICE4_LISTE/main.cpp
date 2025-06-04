#include"Enseignant.h"
int main(){
    chaine nom="diop";chaine prenom="gallas",diplome="docteur";chaine matiere="physique";
    chaine nom1="ndiaye";chaine prenom1="bada",diplome1="professeur";chaine matiere1="mathematique";
    Noeud* p=new Noeud(nom,prenom,diplome,NULL);
    //Noeud* d=new Noeud(nom1,prenom1,diplome1,nullptr);
    Enseignant e(p);Enseignant e1(nullptr);
    e.affiche();e.setMatiere(matiere);e.setMatiere(matiere1);
    cout<<"\nAjout d'une matiere\n";
    e.affiche();
    cout<<" La fontion ajouter \n";
    e.ajout_tete(nom1,prenom1,diplome1,nullptr);
    e.affiche();
    cout<<"\nAppel de la surdifintion =\n";
    e1=e;
    e1.affiche();
}