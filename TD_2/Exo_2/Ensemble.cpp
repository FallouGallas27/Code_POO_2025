#include "Ensemble.h"

Ensemble ::Ensemble(int nbre){
    nmax = nbre;
    card = 0;
    tab = new int [nmax];
}

Ensemble::~Ensemble(){
    if (tab)
    {
        delete [] tab;
    }
}
void Ensemble::ajouter(int n){
    if (contient(n))
    {
        cout<<"L'element est dans l'ensemble\n";
    }
    if(card < nmax)
        tab[card++] = n;
    else cout<<"Ensemble plein\n";
}
bool Ensemble::contient(int n){
    for (int i = 0; i < card; i++)
    {
        if (tab[i] == n)
        {
            return true;
        }
        
    }
    return false;
}
void Ensemble::supprimer(int n){
    int i = 0;
    if (contient(n))
    {
       while (i < card && tab[i] != n)
       {
            i++;
       }
       for (int j = i; j < card; j++)
       {
            tab[j] = tab[j+1];
       }
       card --;
    }
    else
        cout<<"\nL'element n'est pas dans l'ensemble\n";
    
}
int  Ensemble::cardinal()const{
    return card;
}

void Ensemble::afficher(){
    cout<<"E = [";
    for (int i = 0; i < card-1; i++)
    {
        cout<<tab[i]<<",";
    }
    cout<<tab[card-1]<<"]"<<endl;
}