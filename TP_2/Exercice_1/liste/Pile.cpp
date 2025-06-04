#include "Pile.h"


Pile::Pile()
{
    liste = new Noeud;
    liste = nullptr;
    //cout<<"Appel du constructeur "<<this<<endl;
}

Pile::~Pile()
{
    if (liste)
    {
        Noeud *p;
        while (liste->suiv != nullptr)
        {
            p = liste;
            liste = liste->suiv;
            delete p;
        }
        
    }
    //cout<<"Appel du destructeur "<<this<<endl;
}

void Pile::empiler(int val){
    Noeud *p = new Noeud;
    p->elemt = val;
    p->suiv = liste;
    liste = p;
}

int Pile::depiler(){
    int n;
    Noeud *p;
    if (liste != nullptr)
    {
        p = liste;
        n = p->elemt;
        liste = liste->suiv;
        delete p;
    }
    return n;
}

void Pile::afficher(){
    Noeud *p = liste;
    cout<<"Pile : ";
    while (p != nullptr )
    {
        cout<<p ->elemt<<" ";
        p = p->suiv;
    }
    cout<<endl;   
}
int Pile::sommet(){
    if(!est_vide()){
        return liste->elemt;
    }
    return -1;
}
bool Pile::est_vide(){
    if (liste != nullptr)
    {
        return false;
    }
    return true;
    
}

Pile::Pile(const Pile& p){
    liste = nullptr;
    Pile v;
    Noeud * d = p.liste;
    while (d)
    {
        v.empiler(d->elemt);
        d = d->suiv;
    }
    while (!v.est_vide())
    {
        empiler(v.depiler());
    }    
}

Pile& Pile::operator= (const Pile& p){
    if (this == &p)
    {
        return *this;
    }
    Noeud *v = liste,*k;
    while (v)
    {
        k = v;
        v = v->suiv;
        delete k;
    }
    liste = nullptr;
    Pile d;
    v = p.liste;
    while (v)
    {
        d.empiler(v->elemt);
        v = v->suiv;
    }
    while (!d.est_vide())
    {
        empiler(d.depiler());
    }
    cout<<"L'operateur = :\n";
    return *this;
}

int Pile::evaluation(char exp[], int n){
    for (int i = 0; i < n; i++)
    {
        if (isdigit(exp[i]))
        {
            empiler(exp[i] - '0');
        }
        else{
            int a = depiler();
            int b = depiler();
            switch (exp[i])
            {
            case '+': empiler(a + b); break;
            case '-': empiler(a - b); break;
            case '*': empiler(a * b); break;
            case '/': empiler(a / b); break;
            default:
                cout<<"Caratere non definie\n";
                break;
            }
        }
    }
    return depiler();
}
