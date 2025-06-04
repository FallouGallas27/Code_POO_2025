#ifndef DOCUMENT_H
#define DOCUMENT_H
#include<iostream>
#include<string.h>
#include <string>
using namespace std;
struct  liste_mot
{
    char mot[30];
    struct liste_mot*suiv;    
};
typedef struct liste_mot *liste;

class Document
{
private:
   char titre[100];
   liste tete,queue;
public:
    Document(char nom[200]);
    ~Document();
    void set_motcle( char mt[40]);
    void affiche();
    
};
#endif 