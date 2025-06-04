#include "site.h"
int main() {
    // Création de mots-clés pour les documents
    string mots1[] = {"mot1", "mot2"};
    string mots2[] = {"mot2", "mot3"};

    // Création de documents
    Site site1(10);
    site1.ajouter_doc("Document1", mots1, 2);
    site1.ajouter_doc("Document2", mots2, 2);
    site1.affiche();
    cout << "\nRecherche de documents avec le mot-clé 'mot2' :" << endl;
    cout<<site1.recherche("mot2");

    //Copie des documents vers un autre site
    cout<<"Copier site\n";
    Site site2(10);
    site2.copier_site(site1);
    cout<<"\nCopier site\n";
    site2.affiche();


    site1.supp_doc("Document1");
    cout<<"\nApres la suppresion d'un document\n";
    site1.affiche();

    //Copie des documents vers un autre site
    // cout<<"Copier site\n";
    // Site site2(10);
    // site2.copier_site(site1);
    // cout<<"\nCopier site\n";
    // site2.affiche();

    // Suppression d'un document
    
    // Recherche de documents par mot-clé
    // cout << "\nRecherche de documents avec le mot-cle 'mot2' :" << endl;
    // cout<<site2.recherche("mot2");
    
    return 0;
}
