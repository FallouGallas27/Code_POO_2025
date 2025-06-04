#include "ArticleLocal.h"

ArticleLocal::ArticleLocal(string n,string d, double p , double c):Article(n,d,p)
{
    cout_trans = c;
}

ArticleLocal::~ArticleLocal()
{
}
void ArticleLocal::affiche(){
    Article::affiche();
    cout<<"Cout de transport\t"<<cout_trans;
}

double ArticleLocal::calcul_prix(){
    return prix + cout_trans;
}