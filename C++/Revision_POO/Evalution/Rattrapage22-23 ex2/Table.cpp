#include "Table.h"

Table ::Table(int n){
    nbmax = n;
    nbcourt = 0;
    article = new Article*[nbmax];
    for (int i = 0; i < nbmax; i++)
    {
        article[i] = nullptr;
    }
    
}
Table::~Table() {
    for (int i = 0; i < nbmax; i++) {
        Article *current = article[i];
        while (current != nullptr) {
            Article *next = current->suiv;
            delete current;
            current = next;
        }
    }
    delete[] article;
}

void Table::insertion(Article * a){
    int i = hachage(a->cle);
    if (article[i] == nullptr)
    {
        article[i] = a;
        nbcourt++;
    }
    else
    {
        Article * p = article[i];
        while (p->suiv != nullptr)
        {
            p = p->suiv;
        }
        p->suiv = a;
        nbcourt++;
    }
    
}
void Table::supprimer(char mot[20]){
    int i = hachage(mot);
    Article * k = article[i];
    if (strcmp(k->cle,mot) == 0)
    {
        Article *d = k;
        k = k->suiv;
        delete d;
        nbcourt--;
    }
    else
    {
        Article *p =article[i],*l;
        while (p && strcmp(p->cle, mot) != 0)
        {
            l = p;
            p = p->suiv;
        }
        if (p)
        {
            l->suiv = p->suiv;
            delete p;
        }
    }
    
}
bool Table::recherche(char mot[20]){
    int i = hachage(mot);
    Article *p = article[i];
    while (p && strcmp(p->cle, mot) != 0)
    {
        p = p->suiv;
    }
    if (p)
    {
        return true;
    }
    else
        return false;
}
int Table::hachage(char mot[20]){
    int hash = 0;
    for (int i = 0; i < strlen(mot); i++)
    {
        hash += mot[i];
    }
    return hash%nbmax;
}