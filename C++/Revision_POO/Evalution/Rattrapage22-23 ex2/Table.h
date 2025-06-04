#include<iostream>
#include<cstring>
using namespace std;

struct Article
{
    char cle[20];
    char url[20];
    char titre[30];
    char auteur[20];
    char *mot_cle[10];
    Article *suiv;
};

class Table
{
private:
    int nbmax;
    int nbcourt;
    Article **article;
public:
    Table(int );
    ~Table();
    void insertion(Article*);
    void supprimer(char*);
    bool recherche(char*);
    int hachage(char*);
};
