#ifndef ENSEMBLE_H
#define eNSEMBLE_H
#include <iostream>

using namespace std;

struct  Liste
{
    int elmt;
    Liste * suiv;
};
class Ensemble
{
private:
    Liste * liste;
    int nbelmt;
public:
    Ensemble(/* args */);
    ~Ensemble();
    int cardinal();
    void ajouter(int );
    void supprimer(int);
    bool contient(int);
    void affiche();
    Ensemble(Ensemble&);
    Ensemble& operator<<(int);
    Ensemble& operator>>(int);
    bool operator%(int);
};
//#endif
Ensemble::Ensemble(/* args */)
{
    liste = new Liste;
    liste = nullptr;
    nbelmt = 0;
}

Ensemble::~Ensemble()
{
    Liste * p = liste;
    while (liste)
    {
        liste = liste->suiv;
        delete p;
    }
    
}

int  Ensemble::cardinal(){
    return nbelmt;
}
void Ensemble::ajouter(int n){
    if (contient(n))
    {
        cout<<"l'element "<<n<<" est dans l'ensemble\n";
    }
    else{
    if (liste == nullptr)
    {
        liste = new Liste;
        liste->elmt = n;
       // cout<<liste->elmt;
        liste->suiv =nullptr;
        nbelmt ++;
    }
    else{
    Liste * p = new Liste;
    p->elmt =n;
    p->suiv = liste;
    liste = p;
    nbelmt++;}
    }
}
void Ensemble::supprimer(int n){
 if (!contient(n))
    {
        cout<<"l'element "<<n<<" n'est pas dans l'ensemble\n";
    }
    else{
        if (liste->elmt == n)
        {
            Liste *p = liste;
            liste = liste -> suiv;
            delete p;
        }
        
        Liste *p = liste;
        Liste * l;
        while (p && p->elmt != n)
        {
            l = p;
            p = p->suiv;
        }
        if(p)//{
        l->suiv = p->suiv;
        //delete p;}
    }
}
bool Ensemble::contient(int n){
    Liste * p = liste;
    while (p  && p->elmt != n)
    {
        p = p->suiv;
    }
    if(p)
        return true;
    return false;
}
void Ensemble::affiche(){
    Liste * p = liste;
    while (p)
    {
        if(p)
        cout<<p->elmt<<"\t";
        p = p->suiv;
    }
    
}
Ensemble::Ensemble(Ensemble& e){
    liste = nullptr; // Initialisation de la liste
        if (e.liste != nullptr) {
            Liste* src = e.liste;  // Pointeur source (original)
            Liste* prev = nullptr; // Dernier élément copié

            while (src != nullptr) {
                // Créer un nouveau nœud avec la même valeur
                Liste* newNode = new Liste;
                newNode->elmt = src->elmt;
                newNode->suiv = nullptr;

                if (liste == nullptr) {
                    // Premier élément copié devient la tête
                    liste = newNode;
                } else {
                    // Lier le dernier élément copié au nouveau
                    prev->suiv = newNode;
                }

                // Mettre à jour le pointeur précédent
                prev = newNode;
                src = src->suiv;
            }
        }
    }


Ensemble& Ensemble::operator<<(int n){
    if (contient(n))
    {
        cout<<"l'element "<<n<<" est dans l'ensemble\n";
    }
    else
    {
        if (liste == nullptr)
        {
            liste = new Liste ;
            liste->elmt = n;
            liste->suiv = nullptr;
            nbelmt ++;
        }
        else
        {
            Liste *p = new Liste ;
            p ->elmt = n;
            p->suiv =liste;
            liste = p;
            nbelmt ++;
        }
    }
    return *this;    
}
Ensemble& Ensemble::operator>>(int n){
    if (!contient(n))
    {
        cout<<"L'element "<<n<<" n'est pas dans l'ensemble\n";
    }
    else
    {
        if (liste->elmt == n)
        {
          Liste *p = liste;
          liste = liste->suiv;
          delete p;  
        }
        
        Liste *p = liste,*l;
        while (p && p->elmt != n)
        {
            l = p;
            p = p->suiv;
        }
        if (p)
        {
            l->suiv  = p->suiv;
            delete p;
        }
        
    }
    
    return *this;
}
bool Ensemble::operator%(int n){
    Liste * p = liste;
    while (p && p->elmt != n)
    {
        p = p->suiv;
    }
    if (p)
    {
        return true;
    }
    return false;    
}
#endif
int main(){
    Ensemble E;
    E.ajouter(2);
    E.ajouter(21);
    E.ajouter(24);
    E.ajouter(25);
    E.ajouter(52);
    E.affiche();
    cout<<E.cardinal()<<endl;
    E.supprimer(52);
    E.affiche();
    Ensemble e =E;
    cout<<endl;
    e.affiche();
    cout<<"\n========================================================================\n";
    Ensemble d;
    d<<2<<4<<5;
    d.affiche();
    d>>2>>1>>3;
    d.affiche();
    return 0;
}