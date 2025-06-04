#include "Societe.h"

   int main() {
    Societe s(10, 5);

    Voiture* v1 = new Voiture;
    v1->cle = new char[strlen("ABC123") + 1];
    strcpy(v1->cle, "ABC123");
    strcpy(v1->marque, "Toyota");
    strcpy(v1->gamme, "SUV");
    v1->annee = 2020;
    strcpy(v1->modele, "Rav4");
    strcpy(v1->presentation, "Voiture robuste");

    Voiture* v4 = new Voiture;
    v4->cle = new char[strlen("ABG120") + 1];
    strcpy(v4->cle, "ABG120");
    strcpy(v4->marque, "Toyota");
    strcpy(v4->gamme, "SUV");
    v4->annee = 2020;
    strcpy(v4->modele, "Rav4");
    strcpy(v4->presentation, "Voiture robuste");

    Voiture* v2 = new Voiture;
    v2->cle = new char[strlen("XYZ789") + 1];
    strcpy(v2->cle, "XYZ789");
    strcpy(v2->marque, "Honda");
    strcpy(v2->gamme, "Berline");
    v2->annee = 2019;
    strcpy(v2->modele, "Accord");
    strcpy(v2->presentation, "Voiture élégante");

    Voiture* v3 = new Voiture;
    v3->cle = new char[strlen("XYZ780") + 1];
    strcpy(v3->cle, "XYZ780");
    strcpy(v3->marque, "Honda");
    strcpy(v3->gamme, "Berline");
    v3->annee = 2019;
    strcpy(v3->modele, "Accord");
    strcpy(v3->presentation, "Voiture élégante");

    s.insertion(v1);
    s.insertion(v2);
    s.affiche(v1);
    s.affiche(v2);

    Societe k (s);
    k.affiche(v1);
    k.affiche(v2);
    char mot1[] = "ABC123",mot2[]="XYZ789",mot3[] = "ABG120",mot4[] = "XYZ780";
    cout << "Recherche ABC123: " << (s.recherche(mot1) ? "Trouvee" : "Non trouvee") << endl;
    cout << "Recherche XYZ789: " << (s.recherche(mot2) ? "Trouvee" : "Non trouvee") << endl;

    s>>mot1;//s.supprimer(mot1);
    cout << "Recherche ABC123 apres suppression: " << (s.recherche(mot1) ? "Trouvee" : "Non trouvee") << endl;
    cout<<"\n===================SURDEFINTION======================\n";
    s<<v3<<v4;
    s.affiche(v3);
    s.affiche(v4);
    cout << "Recherche ABC123: " << ((s % mot3) ? "Trouvee" : "Non trouvee") << endl;
    cout << "Recherche XYZ789: " << ((s % mot2) ? "Trouvee" : "Non trouvee") << endl;
    return 0;
}