#include"pile.h"
pile::pile()
{
    cout<<"Appel du construteur par defaut"<<this<<endl;
    tete=nullptr;
}
pile::~pile()
{
    cout<<"\nAppel du destructeur"<<this<<endl;
}
void pile::empiler(int elmt){
     Liste p=new liste;
     p->element=elmt;
     p->suivant=nullptr;
    if(tete==nullptr){
        tete=p;
    }
    else{
        p->suivant=tete;
        tete=p;
    }
}
void pile::depiler(){
    if(tete!=nullptr){
        Liste p=tete;
        tete=tete->suivant;
        delete p;
    }
    else{
        cout<<"\n La pile est vide\n";
    }
}
int pile::sommet()const{
    //Liste p=tete;
    if(tete!=nullptr){
      return tete->element;}
    else{
     return 0;
    }
}
bool pile::est_vide(){
    if(tete==nullptr)
      return true;
    return false;
}
void pile::afficher(){
    Liste p=tete;
    while (p!=NULL)
    {
    cout<<p->element<<"\t";
    p=p->suivant;
    }
}