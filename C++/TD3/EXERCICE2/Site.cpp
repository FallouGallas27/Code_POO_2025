#include"Site.h"
Site::Site(char mot[250]):Document(mot){
    cout<<"\nAppel du constructeur par defaut"<<this<<endl;
   debut=courant=nullptr;
}
Site::~Site(){
    cout<<"\nAppel du destructeur"<<this<<endl;
}
void Site::ajout(Document docu){
    document->doc=docu;document->suiv=nullptr;
   if(debut==nullptr){
    debut=document;
   }
   document->suiv=debut;
   debut=document;
}
void supDoc();
Document& copier(const Document&);
bool recherche();
void Site::affiche_site(){
    //courant=debut;
    //while(courant!=nullptr){
    Document::affiche();
    //courant=courant->suiv;
    //}
}