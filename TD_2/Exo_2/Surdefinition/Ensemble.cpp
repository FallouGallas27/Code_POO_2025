#include "Ensemble.h"
Ensemble::Ensemble(int n){
    nmax = n;
    card = 0;
    cour = 0;
    tab = new int[n];
}
Ensemble::~Ensemble(){
    if (tab)
    {
        delete [] tab;
    }
    
}
Ensemble::Ensemble(Ensemble& E){
    nmax = E.nmax;
    card = E.card;
    tab = new int [E.nmax];
    for (int i = 0; i < E.card; i++)
    {
        tab[i] = E.tab[i];
    }
    cout<<"Le constructeur de recopie\n";
}
bool Ensemble::operator%(int n){
    int i = 0;
    while (i < card && tab[i] != n)
    {
        i++;
    }
    if (i < card)
    {
        return true;
    }
    return false;
    
}
Ensemble& Ensemble::operator<<(int n){
    if (*this%n)
    {
        cout<<"L'element est dans l'ensemble\n";
    }
    if (card < nmax)
    {
        tab[card++] = n;
    }
    else
    cout<<"Ensemble plein\n";
    return *this;
}
Ensemble& Ensemble::operator>>(int n){
    if (*this % n)
    {
        int i = 0;
        while (i < card && tab[i] != n)
        {
            i++;
        }
        for (int j = i; j < card; j++)
        {
            tab[j] = tab[j + 1];
        }
        
        card--;
    }
    else cout<<"L'element n'est pas danss l'ensemble\n";
    return *this;
}

void Ensemble::afficher(){
    cout<<"E = [";
    for (int i = 0; i < card-1; i++)
    {
        cout<<tab[i]<<",";
    }
    cout<<tab[card-1]<<"]"<<endl;
}
Ensemble& Ensemble::operator=(const Ensemble& E){
    if (this == &E)
    {
        return *this;
    }
    delete []tab;
    nmax = E.nmax;
    card = E.card;
    tab = new int[nmax];
    for (int  i = 0; i < card; i++)
    {
        tab[i] = E.tab[i];
    }
    return *this;
}
Ensemble Ensemble::operator+(const Ensemble& E){ 
    Ensemble e;
    e.nmax = nmax + E.nmax;
    e.card = card + E.card;
    e.tab = new int [e.nmax];
    int i,j=0;
    for ( i = 0; i < e.card; i++)
    {
        if (i < card )
        {
            e.tab[i] = tab[i];
        }
        else
            e.tab[i] = E.tab[j++];
    }
    return e;
}
Ensemble Ensemble::operator*(const Ensemble& e){
    Ensemble E;
    //E.card = card;
    E.nmax = nmax;
    E.tab = new int[nmax];
    int i = 0,j =0;
    for ( i = 0; i < card; i++)
    {
        for ( j = 0; j < e.card; j++)
        {
            if(tab[i] == e.tab[j]){
                E.tab[i] = tab[i];
                E.card++;
            }
        }
        
    }
    return E;   
}
void Ensemble::init(){
    cour = 0;
}
bool Ensemble::exist(){
    return cour < card;
}

int Ensemble::prochain(){
    return tab[cour++];
}
