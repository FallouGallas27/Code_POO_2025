#include <cstring>
#include "File.h"

File :: File(int tail){
    courant = 0;
    taillemx = tail;
    tab = new int[tail];
}

File ::~File(){
    if (tab)
        delete tab;
    //cout<<"Appel du destructeur "<<this<<endl;
}

void File::enfiler(int val){
    if (courant < taillemx)
    {
        tab[courant++] = val;
    }
    else cout<<"File pleinne\n";
}

int File::defiler(){
    if (!est_vide())
    {
        int a = tab[0];
        for (int i = 0; i < courant; i++)
        {
            tab[i] = tab[i + 1];
        }
        courant --;
        return a;
    }
    cout<<"La file est vide!!!";
    return -1;
}

int File::tete(){
    if (!est_vide())
    {
        return tab[0];
    }
    cout<<"La file est vide!!!";
    return -1;
}

bool File::est_vide(){
    return courant == 0;
}

void File::affiche(){
    cout<<"File : ";
    while (!est_vide())
    {
        cout<<defiler() << " ";
    }
    cout<<endl;
}
File::File(const File& f){
    File d(f.taillemx);
    taillemx = f.taillemx;
    tab = new int [taillemx];
    int i = 0;
    while (i < f.courant)
    {
        d.enfiler(f.tab[i]);
        i++;
    }
    courant = 0;
    while (!d.est_vide())
    {
        enfiler(d.defiler());
    }
    cout<<"Le constructeur de recopie\n";
}
File& File::operator =(const File& f){
    if (this == & f)
    {
        return *this;
    }
    if (tab)
    {
        delete tab;
    }
    File d(f.taillemx);
    int i = 0;
    while (i < f.courant)
    {
        d.enfiler(f.tab[i++]);
    }
    taillemx = (f.taillemx);
    courant = 0;
    tab = new int [taillemx];
    while (!d.est_vide())
    {
        enfiler(d.defiler());
    }
    return *this;
}
void File::afficher(){
    cout<<"File :";
    for (int  i = 0; i < courant; i++)
    {
        cout<<tab[i] <<" ";
    }
    cout<<endl;
}

void File::evaluation(){
   File f(this->taillemx);
   for (int i = 0; i < courant-1; i++)
   {
        f.enfiler(tab[i]);
        cout<<"Client " <<tab[i]<<" arrive\n";
        i++;
        f.enfiler(tab[i]);
        cout<<"Client " <<tab[i]<<" arrive\n";
        int a = f.defiler();
        cout<<"Client "<< a <<" est servie\n";
   }
   while (!f.est_vide())
   {
        int a = f.defiler();
        cout<<"Client "<< a <<" est servie\n";
   }
   
   
}
