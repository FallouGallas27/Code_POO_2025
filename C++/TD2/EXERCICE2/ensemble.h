#include<iostream>
#include<stdlib.h>
using namespace std;
#define N 100
class ensemble
{
private:
    int max;
    int courant;
    int m_elements;
    int *tab;
public:
    ensemble(int c=0){
        cout<<"\nAppel du constructeur par defaut"<<this<<endl;
        m_elements=0;
        max=c;
        tab=new int[max];
        };
    ~ensemble(){
        cout<<"\nAppel du destructeur "<<this<<endl;
        delete tab;
    };
    int cardinal()const;
    void  ajouter(int);
    void  supprimer(int);
    bool contient(int n);
    void afficher();
    ensemble(ensemble&);
    void init();
    bool existe();
    int prochain();
};
int somme(ensemble);

