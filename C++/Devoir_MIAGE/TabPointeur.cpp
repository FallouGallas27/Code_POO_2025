#include<iostream>
using namespace std;
#include"TabPointeur.h"
TabPointeur::TabPointeur(int p)
{
  cout<<"\n Appel du constructeur par defaut"<<this<<endl;
  taille=p;
  tab=new int*[p];
  for (int i = 0; i <p; i++)
  {
    tab[i]=nullptr;
  }
}

TabPointeur::~TabPointeur()
{
    cout<<"\n Appel du destructeur "<<this<<endl;
    delete tab;
}
TabPointeur::TabPointeur(const TabPointeur& p){
    taille=p.taille;
    tab=new int*[taille];
    for (int i = 0; i < taille; i++)
    {
        tab[i]=p.tab[i];
    }
    cout<<"\n==========CONSTRUCTEUR DE RECOPIE==============\n";
}
TabPointeur::TabPointeur(){
    cout<<"\n Appel du constructeur vide\n";
}
void TabPointeur::ajout(int* k){
    int i=0;
    while (i<taille &&tab[i]!=nullptr)
    {
        i++;
    }
    if(i<taille){
      tab[i]=new int;
      tab[i]=k;}
    else{
      cout<<"la tableau est plein\n";}
}
void TabPointeur:: supprimer(int p){
    int i=0;
    while (i<taille && p!=*tab[i])
        i++;
    if (i<taille)
    {
        for (int j = 0; j <taille; j++)
        {
            tab[j]=tab[j+1];
        }
        taille--;
    }
    else{
        cout <<"\n L'element n'est pas dans le tableau\n";
    }
}
void TabPointeur::affiche(){
    for(int i=0;i<taille;i++){
        if(tab[i]!=nullptr)
          cout<<*tab[i]<<"\t";
    }
}
TabPointeur& TabPointeur:: operator=(const TabPointeur& p){
    if(this==&p) return *this;
    delete tab;
    taille=p.taille;
    tab=new int*[taille];
    int i=0;
    while (i<taille&& p.tab[i]!=nullptr)
    {
        tab[i]=p.tab[i];
        i++;
    }
    cout<<"\n========L'OPERATEUR '=' ==================\n";
    return *this;
}
