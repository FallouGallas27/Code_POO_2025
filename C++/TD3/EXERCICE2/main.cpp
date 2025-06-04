#include"Document.h"
#include"Site.h"
int main(){
    char nom[]="programmation"; char mot[]="Wikipedia";char b[]="deguerpissement";
    Site s(mot);
    Document d(nom);
    cout<<"\nL'affichage du site"<<endl;
    s.affiche_site();
    cout<<"\n L'affiche du document"<<endl;
    d.affiche();cout<<"\n";
    //s.ajout()
    d.set_motcle(b);
    d.affiche();
}