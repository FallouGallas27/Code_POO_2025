#include"Enseignant.h"
Enseignant::Enseignant(Noeud* p){
    cout<<"\nAppel du constructeur par defaut\n";
    tete =p;
    //tete->suiv=nullptr;
}
Enseignant::~Enseignant(){
    Noeud* courant;
    while(tete!=nullptr){
         courant=tete;
         tete=tete->suiv;
         delete courant;
    }
    cout<<"\nAppel du destructeur\n";

}
char* Enseignant::getNom(){
    return tete->nom;
}
char* Enseignant::getPrenom(){
    return tete->prenom;
}
char* Enseignant::getDiplome(){
    return tete->diplome;
}
void Enseignant::setMatiere(chaine matieere){
    if(tete->nb_matiere<5){
        tete->matiere[tete->nb_matiere]=new char[strlen(matieere)+1];
        strcpy( tete->matiere[tete->nb_matiere++],matieere);
    }
}

void Enseignant::affiche(){
    Noeud*p=tete;
    while(p!=nullptr){
    cout<<p->prenom<<"\t";
    cout<<p->nom<<"\t";
    cout<<p->diplome<<"\t";
    for(int i=0;i<p->nb_matiere;i++){
        cout<<p->matiere[i]<<"\t";
    }
    cout<<"->";
    p=p->suiv;
    }cout<<endl;
}
void Enseignant::ajout(chaine noom ,chaine prenoom,chaine diiplome,Noeud* suivant=nullptr ){
    Noeud* newnoeud=new Noeud(noom,prenoom,diiplome,suivant);
    if(tete==NULL){
        tete =newnoeud;
    }
    else{
        //newnoeud->suiv=tete;
        //tete=newnoeud;
        Noeud*courant=tete;
         while (courant->suiv!=NULL)
         {
             courant=courant->suiv;
         }
         courant->suiv=newnoeud;
        
    }
}
Enseignant& Enseignant:: operator=(const Enseignant& E){
    if(this==&E) return *this;
    Noeud* courant;
    while(tete!=nullptr){
        courant=tete;
        tete=tete->suiv;
        delete courant;
    }
    while(E.tete!=nullptr){
        Noeud*p=E.tete;
        this->ajout_tete(p->nom,p->prenom,p->diplome,p->suiv);
        p=p->suiv;
    }    
    return*this;
}
void Enseignant::ajout_tete(chaine noom ,chaine prenoom,chaine diiplome,Noeud* suivant=nullptr  ){
    Noeud* newnoeud=new Noeud(noom,prenoom,diiplome,suivant);
    if(tete==NULL){
        tete =newnoeud;
    }
    else{
        newnoeud->suiv=tete;
        tete=newnoeud;
        // Noeud*courant=tete;
        //  while (courant->suiv!=NULL)
        //  {
        //      courant=courant->suiv;
        //  }
        //  courant->suiv=newnoeud;
        
    }
}
