#include <iostream>
#include <cstring>
#include "Table.h"

using namespace std;

int main() {
    // Creation d'une table avec une capacite de 10
    Table t(10);
    
    // Creation du premier objet Document
    Document *d1 = new Document;
    d1->cle = 1;
    strcpy(d1->val, "POO_1");
    d1->mot_cles = new char*[3]; // Allocation pour 2 mots + nullptr
    d1->mot_cles[0] = new char[strlen("Class") + 1];
    strcpy(d1->mot_cles[0], "Class");
    d1->mot_cles[1] = new char[strlen("Heritage") + 1];
    strcpy(d1->mot_cles[1], "Heritage");
    d1->mot_cles[2] = nullptr;
    t.insertion(d1);
    
    // Creation du deuxième objet Document
    Document *d2 = new Document;
    d2->cle = 2;
    strcpy(d2->val, "POO_2");
    d2->mot_cles = new char*[3];
    d2->mot_cles[0] = new char[strlen("Polymorphisme") + 1];
    strcpy(d2->mot_cles[0], "Polymorphisme");
    d2->mot_cles[1] = new char[strlen("Encapsulation") + 1];
    strcpy(d2->mot_cles[1], "Encapsulation");
    d2->mot_cles[2] = nullptr;
    t.insertion(d2);
    
    // Creation du troisième objet Document
    Document *d3 = new Document;
    d3->cle = 3;
    strcpy(d3->val, "POO_3");
    d3->mot_cles = new char*[3];
    d3->mot_cles[0] = new char[strlen("Abstraction") + 1];
    strcpy(d3->mot_cles[0], "Abstraction");
    d3->mot_cles[1] = new char[strlen("Interface") + 1];
    strcpy(d3->mot_cles[1], "Interface");
    d3->mot_cles[2] = nullptr;
    t.insertion(d3);
    
    // Creation du quatrième objet Document
    Document *d4 = new Document;
    d4->cle = 4;
    strcpy(d4->val, "POO_4");
    d4->mot_cles = new char*[3];
    d4->mot_cles[0] = new char[strlen("Constructeur") + 1];
    strcpy(d4->mot_cles[0], "Constructeur");
    d4->mot_cles[1] = new char[strlen("Destructeur") + 1];
    strcpy(d4->mot_cles[1], "Destructeur");
    d4->mot_cles[2] = nullptr;
    t.insertion(d4);
    
    // Creation du cinquième objet Document
    Document *d5 = new Document;
    d5->cle = 5;
    strcpy(d5->val, "POO_5");
    d5->mot_cles = new char*[3];
    d5->mot_cles[0] = new char[strlen("Template") + 1];
    strcpy(d5->mot_cles[0], "Template");
    d5->mot_cles[1] = new char[strlen("STL") + 1];
    strcpy(d5->mot_cles[1], "STL");
    d5->mot_cles[2] = nullptr;
    t.insertion(d5);
    
    // Affichage de la table
    cout << "Affichage de la table t:\n";
    t.affiche();
    t.supprimer(2); 
    cout << "\nTable apres suppression de l'element avec cle 2:\n";
    t.affiche();

    // Test de la copie
    cout << "\nTest de la copie (table t1):\n";
    Table t1 = t;
    t1.affiche();
    
    // Test des operateurs
    cout << "\nTest de l'operateur << (insertion):\n";
    Document *d6 = new Document;
    d6->cle = 6;
    strcpy(d6->val, "POO_6");
    d6->mot_cles = new char*[3];
    d6->mot_cles[0] = new char[strlen("Surcharge") + 1];
    strcpy(d6->mot_cles[0], "Surcharge");
    d6->mot_cles[1] = new char[strlen("Operateur") + 1];
    strcpy(d6->mot_cles[1], "Operateur");
    d6->mot_cles[2] = nullptr;
    t << d6;
    t.affiche();
    
    cout << "\nTest de l'operateur % (recherche cle 3):\n";
    if (t % 3) {
        cout << "Cle 3 trouvee\n";
    } else {
        cout << "Cle 3 non trouvee\n";
    }
    
    cout << "\nTest de l'operateur >> (suppression cle 2):\n";
    t >> 2;
    t.affiche();
    
    // Nettoyage manuel pour eviter les fuites memoire
    // Note : Normalement, le destructeur de Table devrait gerer cela
    return 0;
}