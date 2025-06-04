#include"pile.h"
pile::pile(){
    debut=courant=nullptr;
    cout<<"\nAppel du constructeur\n";
}
pile::~pile(){
    cout<<"\nAppel du destructeur\n";
}
int pile::sommet(){
    return debut->element;
}
bool pile::est_vide(){
    return (debut!=nullptr);
}
pile& pile::operator<<(int elmt){
     Liste p=new liste;
     p->element=elmt;
     p->suiv=nullptr;
    if(debut==nullptr){
        debut=p;
    }
    else{
        p->suiv=debut;
        debut=p;
    }
    return *this;
}
pile& pile::operator >>(int n){
    if(debut->element==n){
    if(debut!=nullptr && debut->suiv!=NULL ){
        courant=debut;
        debut=debut->suiv;
        delete courant;
    }
    else{
        delete debut;
    }
    }
         return *this;
}
void pile::afficher(){
    courant=debut;
    while (courant!=nullptr)
    {
        cout<<courant->element<<"\t";
        courant=courant->suiv;
    }
    
}