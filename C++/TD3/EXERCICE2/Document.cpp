#include<iostream>
using namespace std;
#include"Document.h"
 Document ::Document(char mot[200]){
    cout<<"\nAppel du constructeur "<<this<<endl;
    strcpy(titre,mot);
    tete=queue=nullptr;

 }
Document::~Document(){
    cout<<"\nAppel du destructeur\n";
}
void Document::set_motcle(char mots[30]){
    liste p=new liste_mot;
    strcpy(p->mot,mots);
    p->suiv=nullptr;
    if(tete==nullptr)
      {tete=p;}
      else{
    p->suiv=tete;
    tete=p;}
}
void Document::affiche(){
    cout<<titre;
    if(tete!=nullptr){
        queue=tete;
     while (queue!=nullptr)
     {
        cout<<"\t"<<queue->mot<<"\t";
        queue=queue->suiv;
     }
    }
    
}


