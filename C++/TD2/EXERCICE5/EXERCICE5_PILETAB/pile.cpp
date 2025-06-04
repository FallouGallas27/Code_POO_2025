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
void pile::empiler(int n){
    if(elmt<taille){
        tab[elmt++]=n;sommet=elmt-1;
    }else{
    cout<<"\n La pile est pleine\n";}
}
void pile::depiler(){
    if(estvide()){
      exit(-1);}
    elmt--;
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