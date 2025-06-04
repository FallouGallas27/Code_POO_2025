#include"pile.h"
pile::pile(int tail){
    taille=tail;
    sommet=0;elmt=0;
    tab=new int[tail];
    cout<<"\n Appel du constructeur"<<this<<endl;
}
pile::~pile(){
    cout<<"\nAppel du destructeur"<<this<<endl;
    delete tab;
}
pile& pile::operator<<(int n){
    if(elmt<taille){
        tab[elmt++]=n;sommet=elmt-1;
    }
    return *this;
}
pile&pile::operator>>(int n){
    if(!estvide()){
     if(tab[sommet]==n){
        elmt--;
    }
    else{
        cout<<"\nPour depiler i fait donner le tete de la pile\n";
    }
    }
    return *this;
}
int pile::sommetpile(){
    
    return tab[sommet];
}
bool pile::estvide(){
    return(sommet==-1);
}
void pile::afficher(){
    while (!estvide())
    {
        cout<<sommetpile()<<"\t";
           sommet--;
    }
    sommet=elmt-1;
    
}