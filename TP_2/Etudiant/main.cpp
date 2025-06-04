#include "Ensemble.h"

int main() {
    Ensemble e(5);
    Etudiant et1 = {"Fallou","Ndiaye","ndaiye@gmail.com", 1, 2020, "un etudiant tres asidue en cours c'est ce qui l'a permiss d'avoir 60 credit"};
    Etudiant et2 = {"Aissatou","Diallo","diallo@gmail.com", 2, 2021, "UN etudiant regulier"};
    Etudiant et3 = {"Mamadou","Sow","sow@gmail.com", 3, 2022, "Etudiant perturbateur"};
    Etudiant et4 = {"Fatou","Sarr","sarr@gmail.com", 4, 2023, "Etudiante modele"};
    Etudiant et5 = {"Ousmane","Ba","ba@gmail.com", 5, 2024, "Un halpoular hors paire"};
    e.ajoutet(&et1);
    e.ajoutet(&et2);
    e.ajoutet(&et3);
    e.ajoutet(&et4);
    e.ajoutet(&et5);
    e.afficher();
    cout << "Cardinal: " << e.cardinal() << endl;
    Etudiant et6 = {"Aminata","Diop","diop@gmail.com", 6, 2025, "Une bete de l'informatique"};
    e.ajoutet(&et6); 
    e.afficher();
    e.supprimer(&et3);
    e.afficher();
    cout << "Cardinal: " << e.cardinal() << endl;
    if (e.contient(&et2)) {
        cout << "Ensemble contient l'etudiant " << et2.nom << endl;
    } else {
        cout << "Ensemble ne contient pas l'etudiant " << et2.nom << endl;
    }
    Ensemble e2 = e; // Test du constructeur de copie
    e2.afficher();
    return 0;
}