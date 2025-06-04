#include"liste.h"
 liste::liste(){
    cout<<"\nAppel du constructeur par defaut "<<this<<endl;
    debut=nullptr;
 }
liste::~liste(){
    Liste p;
    while (debut)
    {
        p=debut;
        debut=debut->suiv;
        delete p;
    }
    cout<<"\nAppel du destructeur "<<this<<endl;
}
void liste::ajout(int element){
    Liste p=new noeud;
    p->elmt=element;
    p->suiv=nullptr;
    if(debut==nullptr)
       debut =p;
    else{
        p->suiv=debut;
        debut=p;
    }
}
void liste::supprimer(int element){
    Liste p=debut,d;
    while (p &&p->elmt!=element)
    {
        d=p;
        p=p->suiv;
    }
    if(p){
        d->suiv=p->suiv;
        delete p;
    }
}
void liste::affiche(){
    Liste p=debut;
    while (p)
    {
        if(p!=nullptr){
        cout<<p->elmt<<"\t";
        p=p->suiv;}
    }
    //p=debut;
}
liste::liste(const liste& p){
    debut=p.debut;
    cout<<"\n========LA RECOPIE========\n";
    // Liste d=p.debut;//l,k=debut;
    // while (d!=nullptr)
    // { 
    //    ajout(d->elmt);
    //    d=d->suiv;
    // }
}
liste& liste::operator=(const liste& p){
  if(this==&p) return *this;
  Liste k;
  while (debut)
  {
    k=debut;
    debut=debut->suiv;
    delete k;
  }
  Liste d=p.debut;
  while (d)
  {
    ajoutq(d->elmt);
    d=d->suiv;
  }
  return *this;
 }
    void liste:: ajoutq(int element){
        Liste p=new noeud;
        p->elmt=element;
        p->suiv=nullptr;
        if(debut==nullptr){
            debut=p;
        }
        else{
        Liste d=debut;
        while (d->suiv!=nullptr)
        {
            d=d->suiv;
        }
        if(d->suiv==nullptr)
           d->suiv=p;
        }
    }