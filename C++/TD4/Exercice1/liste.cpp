#include"liste.h"
liste::liste(int n){
    cout<<"\nCont d'une liste vide au plus "<<max<<"elements"<<endl;
    max=n;
    m_elmt=0;
    p=new Animal*[max];
}
void liste::ajouter(Animal *a){
    if(m_elmt<max){
        p[m_elmt++]=a;
    }
}
void liste::s_exprime(){
    for (int  i = 0; i < m_elmt; i++)
    {
        p[i]->s_exprime();
    }
    
}