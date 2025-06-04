#ifndef SITE_H
#define SITE_H
#include"Document.h"
struct Doc{
    Document doc;
    struct Doc*suiv;
};
typedef struct Doc * listdoc;
class Site:public Document
{
private:
    listdoc debut;
    listdoc courant;
    listdoc document;
public:
    Site(char *);
    ~Site();
    void ajout(Document);
    void supDoc();
    Document& copier(const Document&);
    bool recherche();
    void affiche_site();
};

#endif