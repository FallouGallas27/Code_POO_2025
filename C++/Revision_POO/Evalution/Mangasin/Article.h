#ifndef ARTICLE_H
#define ARTICLE_H
#include <iostream>

using namespace std;

class Article
{
protected:
    string numref;
    string designation;
     double prix;
public:
    Article(string, string, double);
    ~Article();
    virtual void affiche();
    virtual double calcul_prix();
};
#endif
