#include "Article.h"

Article::Article(string n,string d, double p)
{
    numref = n;
    designation = d;
    prix = p;
    cout<<"Appel du constructeur de Article\n";
}

Article::~Article()
{
    cout<<"Appel du destructeur de Article\n";
}

void Article::affiche(){
    cout<<"\nVoici les informations de l'article\n";
    cout<<"Numero de reference\t"<<numref<<"\tDesignation\t"<<designation<<"\tPrix\t"<<prix<<endl;
}
double Article::calcul_prix(){
    return prix;
}