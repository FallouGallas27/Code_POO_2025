#include "Ensemble.h"


Ensemble::Ensemble(int n)
{
     nmax = n;
     tab = new int [n];
     ncourant  = 0 ;
     for (int i = 0; i < nmax; i++)
     {
        tab[i] = -1;
     }
     
}

Ensemble::~Ensemble()
{   
    delete[] tab;
}
int Ensemble ::cardinal(){
    return ncourant;
}
bool Ensemble::contient(int n){
    int i = 0 ;
    while (i<ncourant && tab[i] != n)
    {
        i++;
    }
    if(i < ncourant)
        return true;
    return false;
    
}
void Ensemble::ajout(int n){
    if(ncourant<nmax){
    if(!contient(n)){
        tab[ncourant++] = n;
    }
    else
    cout<<"L'element "<<n<<" est dans l'ensemble\n";
    }
}
void Ensemble::supprimer(int n){
    if(!contient(n)){
        cout<<"L'element "<<n<<" n' est pas dans l'ensemble\n";
    }
    for (int i = 0; i < ncourant; i++)
    {
        if(tab[i] == n){
            for (int  j = i; j < ncourant; j++)
            {
                tab[j] = tab[j+1];
            }
            ncourant--;        
        }
    }
}
void Ensemble::affiche(){
    for (int i = 0; i < ncourant; i++)
    {
        cout<<tab[i]<<"\t";
    }
    
}

Ensemble::Ensemble(Ensemble &e){
    nmax = e.nmax;
    ncourant = e.ncourant;
    for (int i = 0; i < ncourant; i++)
    {
        tab[i] = e.tab[i];
    }
}
void Ensemble::f(){

}
Ensemble& Ensemble::Ensemble::operator<<(int n){
    if(!operator%(n)){
        tab[ncourant++] = n;
    }
    else 
        cout<<"L'element "<<n<<" est dans l'ensemble\n";
    return *this;
}
Ensemble& Ensemble::operator>>(int n){
    if(!operator%(n)){
        cout<<"L'element "<<n<<" n'est pas dans l'ensemble\n";
    }
    else{
    for (int i = 0; i < ncourant; i++)
    {
        if (tab[i] == n)
        {
            for(int j = i; j<ncourant; j++)
                tab[j] =tab[j+1];
            ncourant--;
        }
    }
    }
    return *this;
}
bool Ensemble::operator %(int f){
    int i = 0;
    while(i < ncourant && tab[i] != f)
       i++;
    if(i < ncourant)
      return true;
    else
    return false;
}
Ensemble& Ensemble::operator = (const Ensemble& e){
    if(this == &e) return *this;
    delete tab;
    nmax = e.nmax;
    ncourant = e.ncourant;
    tab = new int[nmax];
    for (int i = 0; i < ncourant; i++)
    {
        tab[i] =e.tab[i];
    }
    return *this;
}

Ensemble Ensemble::operator+( Ensemble &m){
    Ensemble p;
    p.nmax = nmax+m.nmax;
    p.ncourant =  ncourant + m.ncourant;
    p.tab = new int[p.nmax];
    int j=0;
    for (int  i =0 ; i < p.nmax; i++)
    {
        if (i<ncourant)
            p.tab[i] = tab[i];
        else
         p.tab[i] = m.tab[j++];
    }
    return p;   
}
Ensemble Ensemble::operator*(Ensemble& p){
    Ensemble d;
    d.nmax = nmax;
    d.ncourant =  ncourant;
    d.tab = new int[nmax];
    for (int i = 0; i < ncourant; i++)
    {
        for (int j = 0; j < p.ncourant; j++)
        {
            if(tab[i] == p.tab[j])
                d.tab[i] = tab[i];
        }
    }
    return d;
}
void Ensemble::init(){
    ncourant = 0;
}
bool Ensemble::existe(){
    return tab[ncourant];
}
int  Ensemble::prochain(){
    return tab[ncourant++];
}

void Ensemble::traiter(int n){
    cout<<2*n+'h';
}
