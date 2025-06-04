#include "Personnell.h"

Personnel::Personnel(string n,int a,string d) : Personne(n,a)
{
    depart = d;
}

Personnel::~Personnel()
{
}
void Personnel::affiche(){
    Personne ::affiche();
    cout<<"Departemenr\t"<<depart;
}