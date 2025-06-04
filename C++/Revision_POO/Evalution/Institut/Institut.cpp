#include "Institut.h"

Institut::Institut(string i,int n)
{ 
    nomInst = i;
    nmax = n;
    courant = 0;
    tab = new Personne*[nmax];
}
Institut :: ~Institut(){
    delete[] tab;
}
void Institut::ajout(Personne *p){
    if(courant < nmax)
      tab[courant++] = p;
    else
        cout<<"Tableau Plein\n";
}

void Institut ::affiche(){
    cout<<"Nom Institut\t"<<nomInst;
    for (int i = 0; i < courant; i++)
    {
        tab[i]->affiche();
    }
    
}