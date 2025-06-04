#include "Institut.h"
Institut::Institut(string noom)
{
    nomis = noom;
    liste = nullptr;
}

Institut::~Institut()
{
    if (liste)
    {
        Liste * courant = liste;
        while (courant)
        {
            Liste * p = courant;
            courant = courant->suiv;
            delete p;
        }
        
    }
    
}
void Institut::ajouter(Membre * per){
    Liste *p = new Liste;
    p->m = per;
    p->suiv = liste;
    liste = p;
}
void Institut::affiche(){
    Liste *courant = liste;
    cout<<"Nom institut"<<nomis<<endl;
    while (courant)
    {
        courant->m->affiche();
        courant = courant->suiv;
    }
    
}
