#include <iostream>
#include "Table.h"
using namespace std;

int main() {
    Table table(10); // Création d'une table de taille 10

    // Création d'un article
    Article *article1 = new Article;
    strcpy(article1->cle, "123");
    strcpy(article1->url, "www.site.com");
    strcpy(article1->titre, "Introduction au C++");
    strcpy(article1->auteur, "John Doe");
    article1->suiv = nullptr;
    
    // Insertion de l'article dans la table
    table.insertion(article1);
    char mot[]="123";
    // Recherche d'un article
    if (table.recherche(mot)) {
        cout << "Article avec cle 123 trouve!" << endl;
    } else {
        cout << "Article non trouve!" << endl;
    }

    // Suppression de l'article
    table.supprimer(mot);
    
    // Vérification après suppression
    if (table.recherche(mot)) {
        cout << "Article encore present!" << endl;
    } else {
        cout << "Article supprime avec succes!" << endl;
    }
    
    return 0;
}
