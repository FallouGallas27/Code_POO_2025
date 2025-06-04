#include"Ensemble.h"
Ensemble::Ensemble(int N)
{
    tailleMax=N;
    debut=courant=nullptr;
    card=0;
    cout<<"Appel du constructeur par defaut\n";
}

Ensemble::~Ensemble()
{
    cout<<"\nAppel du destructeur\n";
}
int Ensemble::cardinal()const{
    return card;
}
void Ensemble::ajouter(int elmt){
    Liste p=new liste;
    p->element=elmt;
    p->suiv=nullptr;
    if(card<tailleMax){
        if(debut==nullptr){
            debut=p;
        }
        else{
            p->suiv=debut;
            debut=p;
        }
    }card++;
}
void Ensemble::supprimer(int elmt){
    if(contient(elmt)){
        if(debut->element==elmt){
        courant=debut;
        debut=debut->suiv;
        delete courant;
        }
        else{
            Liste p;
        courant=debut;
        while(courant!=nullptr&& courant->element!=elmt){
            p=courant;
            courant=courant->suiv;
        }
        //if(courant!=nullptr){
            p->suiv=courant->suiv;
            //delete courant;
        //}

        }
    }
}
bool Ensemble::contient(int elmt){
    courant=debut;
    while(courant!=nullptr&& courant->element!=elmt)
       courant=courant->suiv;
    if(courant!=nullptr)
       return true;
    return false;
}
void Ensemble::afficher(){
  Liste p=debut;
    while(p!=nullptr){
        cout<<p->element<<"\t";
        p=p->suiv;
    }
}