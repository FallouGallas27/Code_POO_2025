#include"vecteurs.h"
Vecteur::Vecteur(int d){
    m_dimension=d;
    m_x=new float[d];
    for(int i=0;i<d;i++){
        m_x[i]=i;
    }
}
    Vecteur::Vecteur( const Vecteur& v){
        m_dimension=v.m_dimension;
        m_x=new float[m_dimension];
        for(int i=0;i<m_dimension;i++){
            m_x[i]=v.m_x[i];
        }
    }
    int Vecteur::composante(int i){
        return(m_x[i]);
    }
    void Vecteur::composante(int i,float x){
        m_x[i]=x;
    }
    void Vecteur::affiche(Vecteur &p){
        for(int i=0;i<p.m_dimension;i++){
            cout<<p.composante(i);
        }
    }
    void operator<<(ostream &sortie, const Vecteur &v){
        for(int i=0;i<v.m_dimension;i++)
        sortie <<v.m_x[i];
    }