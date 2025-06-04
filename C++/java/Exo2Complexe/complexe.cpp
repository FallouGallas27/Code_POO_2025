#include"complexe.h"
complexe::complexe(double x=0,double y=0)
{
    cout<<"\nl'appel du constructeur\t"<<this;
    m_x=x;
    m_iy=y;
}

complexe::~complexe()
{
    cout<<"\nl'appel du destructeur\t"<<this;
}
double complexe::reelle()const{
    return m_x;
}
double complexe:: imaginaire()const{
    return m_iy;
}
double complexe:: module(){
    return sqrt(reelle()*reelle()+imaginaire()*imaginaire());
}
complexe complexe:: ajouter(complexe& c1){
    complexe c;
    c.m_x=m_x+c1.m_x;
    c.m_iy=m_iy+c1.m_iy;
    return (c);
}
complexe complexe::multiplier(complexe& c){
    complexe d;
    d.m_x=m_x*c.m_x-m_iy*c.m_iy;
    d.m_iy=m_x*c.m_iy+m_iy*c.m_x;
    return d;
}
void complexe::affiche(){
    cout<<reelle()<<"+"<<imaginaire()<<"i";
}complexe complexe:: operator+( complexe& g){
    complexe d(m_x+g.m_x,m_iy+g.m_iy);
    return d;
}
complexe complexe:: operator*( complexe& p){
    complexe g((m_x*p.m_x-m_iy*p.m_iy),(m_x*p.m_iy+m_iy*p.m_x));
    return g;
}
ostream&  operator<<(ostream& sortie,complexe &k){
     sortie<<k.reelle()<<"+"<<k.imaginaire()<<"i";
     return sortie;
}
