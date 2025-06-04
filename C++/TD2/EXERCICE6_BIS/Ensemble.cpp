#include"Ensemble.h"
 Ensemble::Ensemble(int p){
    tailleMax =p;
    card=0;
    debut=courant=nullptr;
    cout<<"\nAppel du construteur\n";
 }
Ensemble::~Ensemble(){
    cout<<"\n Appel du destructeur\n";
}
int Ensemble::cardinal()const{
    return card;
}
Ensemble& Ensemble::operator=(const Ensemble& E){
    cout<<"\nAppel de la surdefinition de =\n";
    if(this==&E) return *this;
    while (debut!=nullptr)
    {
        courant=debut;
        debut=debut->suiv;
        delete courant;
    }
    tailleMax=E.tailleMax;
    card=E.card;
    Liste b=E.debut;
    while(b!=nullptr){
     Liste p=new liste;
        p->element=b->element;
        p->suiv=nullptr;
        if(debut==nullptr){
            debut=p;
        }
        else{
            courant=debut;
            while(courant->suiv!=nullptr){
                courant=courant->suiv;
            }
            courant->suiv=p;
        }
        b=b->suiv;
    }
     return*this;
    
}
Ensemble& Ensemble::operator<<(int elmt){
    if(card<tailleMax){
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
    card++;
    }
    return *this;
}
 Ensemble& Ensemble::operator>>(int elmt){
     if((*this%elmt)==true){
        Liste p;
        if(debut->element==elmt){
           courant=debut;
            debut=debut->suiv;
            delete courant;
        }
        else{
        courant=debut;
            while(courant!=nullptr&&courant->element!=elmt){
                p=courant;
                courant=courant->suiv;
            }
            p->suiv=courant->suiv;
        }
     }
     return*this;
 }
bool Ensemble::operator%(int elmt){
    courant=debut;
    while (courant!=nullptr &&courant->element!=elmt)
    {
        courant=courant->suiv;
    }
    if(courant!=nullptr)
        return true;
    return false;
    
}
 void Ensemble::afficher(){
    courant=debut;
    while(courant!=nullptr){
        cout<<courant->element<<"\t";
        courant=courant->suiv;
    }
}