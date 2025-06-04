#ifndef ARTICLELOCAL_H
#define ARTICLELOCAL_H
#include "Article.h"
class ArticleLocal :public Article
{
private:
    double cout_trans;
public:
    ArticleLocal(string, string, double,double);
    ~ArticleLocal();
    void affiche();
    double calcul_prix();
};



#endif