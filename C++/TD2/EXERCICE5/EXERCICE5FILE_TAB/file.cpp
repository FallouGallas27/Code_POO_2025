#include"file.h"
file::file(int k){
    taille=k;
    elmt=0;
    tete=0;
    tab=new int[k];
    cout <<"\nAppel du constructeur pa defaut"<<this<<endl;
}
file::~file(){
    delete tab;
    cout<<"\nAppel du destruceur"<<this<<endl;
}
bool file:: estvide(){
    return (elmt==tete);
}
void file::ajouter(int n ){
    if(elmt<taille){
        tab[elmt++]=n;
    }
    else
     cout<<"\nLa file est pleine\n";
}
void file::defiler(){
    if(estvide()){
        //cout<<"Impossible";
        exit(-1);
    }
    while (tete<elmt)
    {
        tab[tete]=tab[tete+1];
        tete++;
    }
    elmt--;
    tete=0;
    //tete++;
}
int file::premier(){
  return tab[tete];
}
void file::afficher(){
    while(tete<elmt){
    cout<<premier()<<"\t";
    tete++;
    }
    tete=0;
    cout<<"\nSituation d'invocation du constructeur de recopie\n";
}
bool file::filevide(){
    return (elmt=tete=0);
}
file::file(const file& p){
    taille=p.taille;
    elmt=p.elmt;
    tete=p.tete;
    tab=new int[taille];
    while (tete<elmt)
    {
        tab[tete]=p.tab[tete];
        tete++;
    }
    tete=0;
}

