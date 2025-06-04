#ifndef ARTICLEIMPORTE_H
#define ARTICLEIMPORTE_H
#include "Article.h"

class ArticleImporte : public Article
{
private:
    double taxe;
public:
    ArticleImporte(string, string, double, double);
    ~ArticleImporte();
    void affiche();
    double calcul_prix();
};

#endif