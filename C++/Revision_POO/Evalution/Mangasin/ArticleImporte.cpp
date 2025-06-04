#include "ArticleImporte.h"


ArticleImporte::ArticleImporte(string n,string d,double p ,double pi):Article(n,d,p)
{
    taxe = pi; 
}

ArticleImporte::~ArticleImporte()
{
}

void ArticleImporte::affiche(){
    Article:: affiche();
    cout<<"Taxe\t"<<taxe;
}
 
double ArticleImporte::calcul_prix(){
    double p = prix + taxe*40/100;
    return p;
}