#include "Site.h"

int main(){
    Document doc1("Informatique", new string[3]{"C++", "POO", "Programmation"}, 3);
    Document doc2("Mathematiques", new string[2]{"Algebre", "Calcul"}, 2);
    Document doc3("Physique", new string[2]{"Mecanique", "Thermodynamique"}, 2);
    Site *site = new Site();
    site->ajouterDocument(doc1);
    site->ajouterDocument(doc2);
    site->ajouterDocument(doc3);
    cout << "Recherche du mot cle 'C++': " << (site->RechercherDocument("C++") ? "Trouve" : "Non trouve") << endl;
    cout << "Recherche du mot cle 'Biologie': " << (site->RechercherDocument("Biologie") ? "Trouve" : "Non trouve") << endl;
    site->supprimerDocument(doc2);
    cout << "Recherche du mot cle 'Algebre' apres suppression: " << (site->RechercherDocument("Algebre") ? "Trouve" : "Non trouve") << endl;
    delete site; 
}