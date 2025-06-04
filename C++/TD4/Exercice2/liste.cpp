#include"liste.h"
liste::liste(int n)
{
    max=n;
    nbelmt=0;
    b=new Base*[max];
    cout<<"\nAppel du const de la liste\n";
}

liste::~liste()
{
    if(b)
      free(b);
    cout<<"\n Appel du dest de la class liste";
}
void liste::ajout(Base* d){
    if (nbelmt<max)
    {
        b[nbelmt++]=d;
    }
}
void liste::affiche(){
    for (int i = 0; i < nbelmt; i++)
    {
        b[i]->affiche();
    }
    
}