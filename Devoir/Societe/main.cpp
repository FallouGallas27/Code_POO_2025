#include"Societe.h"

int  main(){
    Societe societe(10, 13);
    
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
    // societe.insertion(v1);
    // societe.insertion(v2);
    // societe.insertion(v3);
    // societe.insertion(v4);
    societe<<v1<<v2<<v3<<v4;
    
    // Afficher le contenu
    cout << "\n=== Affichage apres insertion ===" << endl;
    affiche(societe);
    Societe d = societe;
    //affiche(d);
    cout<<"\n==== La suppression de la ABC123==="<<endl;
    char a [] = "ABC123";
    //societe.supprimer(a);
    societe>>a;
    affiche(societe);
    //if(societe.recherche(a) == true)
    if(societe % a)
        cout<<"Trouvee\n";
    cout<<"Non trouve";
}