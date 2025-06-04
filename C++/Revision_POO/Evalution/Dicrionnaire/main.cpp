#include <iostream>
#include "Dictionnaire.h"

using namespace std;

int main() {
    // Création d'un dictionnaire avec une taille de 10
    Dictionnaire dict(10);
    char b[] ="hello", a[]= "bonjour";char c[]= "world",d[] = "monde",f[]="apple",g[]= "pomme",k[]= "cat", h[]="chat";
    // Création de quelques traductions
    traduction trad1 = {b,a};
    traduction trad2 = {c,d};
    traduction trad3 = {f ,g};
    traduction trad4 = {k, h};

    // Ajout des traductions au dictionnaire
    dict.ajout(&trad1);
    dict.ajout(&trad2);
    dict.ajout(&trad3);
    dict.ajout(&trad4);

    // Recherche de mots dans le dictionnaire
    char mot1[] = "hello";
    char mot2[] = "cat";
    char mot3[] = "dog";

    char* result1 = dict.DSearch(mot1);
    char* result2 = dict.DSearch(mot2);
    char* result3 = dict.DSearch(mot3);

    // Affichage des résultats
    if (result1) {
        cout << "Traduction de '" << mot1 << "' : " << result1 << endl;
    } else {
        cout << "Le mot '" << mot1 << "' n'a pas été trouvé dans le dictionnaire." << endl;
    }

    if (result2) {
        cout << "Traduction de '" << mot2 << "' : " << result2 << endl;
    } else {
        cout << "Le mot '" << mot2 << "' n'a pas été trouvé dans le dictionnaire." << endl;
    }

    if (result3) {
        cout << "Traduction de '" << mot3 << "' : " << result3 << endl;
    } else {
        cout << "Le mot '" << mot3 << "' n'a pas été trouvé dans le dictionnaire." << endl;
    }

    return 0;
}