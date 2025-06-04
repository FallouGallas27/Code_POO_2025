#include <iostream>
#include <cstring>
#include "Societe.h"
using namespace std;

int main()
{
    // Creer une societe avec 5 lignes et 3 colonnes
    Societe societe(5, 3);
    
    // Creer quelques voitures
    Voiture* v1 = new Voiture;
    strcpy(v1->cle, "ABC123");
    strcpy(v1->gamme, "Berline");
    strcpy(v1->modele, "Civic");
    v1->annee = 2020;
    strcpy(v1->presentation, "Voiture economique");
    
    Voiture* v2 = new Voiture;
    strcpy(v2->cle, "DEF456");
    strcpy(v2->gamme, "SUV");
    strcpy(v2->modele, "CR-V");
    v2->annee = 2021;
    strcpy(v2->presentation, "SUV familial");
    
    Voiture* v3 = new Voiture;
    strcpy(v3->cle, "GHI789");
    strcpy(v3->gamme, "Sport");
    strcpy(v3->modele, "Mustang");
    v3->annee = 2022;
    strcpy(v3->presentation, "Voiture sportive");
    
    Voiture* v4 = new Voiture;
    strcpy(v4->cle, "JKL012");
    strcpy(v4->gamme, "Compact");
    strcpy(v4->modele, "Fiesta");
    v4->annee = 2019;
    strcpy(v4->presentation, "Petite citadine");
    
    // Inserer les voitures
    cout << "=== Insertion des voitures ===" << endl;
    societe.insertion(v1);
    societe.insertion(v2);
    societe.insertion(v3);
    societe.insertion(v4);
    
    // Afficher le contenu
    cout << "\n=== Affichage après insertion ===" << endl;
    affiche(societe);
    
    // Rechercher une voiture
    cout << "\n=== Recherche ===" << endl;
    char cle1[] = "ABC123";
    if (societe.recherche(cle1)) {
        cout << "Voiture ABC123 trouvee" << endl;
    } else {
        cout << "Voiture ABC123 non trouvee" << endl;
    }
    
    char cle2[] = "XYZ999";
    if (societe.recherche(cle2)) {
        cout << "Voiture XYZ999 trouvee" << endl;
    } else {
        cout << "Voiture XYZ999 non trouvee" << endl;
    }
    
    // Supprimer une voiture
    cout << "\n=== Suppression ===" << endl;
    char cle3[] = "DEF456";
    societe.supprimer(cle3);
    
    // Afficher après suppression
    cout << "\n=== Affichage après suppression ===" << endl;
    affiche(societe);
    
    // Tentative d'insertion d'une voiture avec une cle existante
    cout << "\n=== Tentative d'insertion d'un doublon ===" << endl;
    Voiture* v5 = new Voiture;
    strcpy(v5->cle, "ABC123");
    strcpy(v5->gamme, "Autre");
    strcpy(v5->modele, "Test");
    v5->annee = 2023;
    strcpy(v5->presentation, "Test doublon");
    societe.insertion(v5);
    affiche(societe);
    Societe s(societe);
    //s.insertion(v5);
    affiche(s);
    return 0;
}