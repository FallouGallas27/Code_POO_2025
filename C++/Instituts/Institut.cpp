#include"Institut.h"
Institut::Institut(string noom,int maxx)
{
    nomI=noom;
    nbelmt=0;
    max=maxx;
    p=new Personne*[max];
}

Institut::~Institut(){}
void Institut::ajout(Personne *d){
    if(nbelmt<max){
        p[nbelmt++]=d;
    }
}
void Institut::affiche(){
    for (int i = 0; i < nbelmt; i++)
    {
        p[i]->affiche();
    }
    
}
// double Institut::moy_annee(){
//     double p=0;
//     for (int i = 0; i < nbelmt; i++)
//     {
//         p+=
//     }
    
// }