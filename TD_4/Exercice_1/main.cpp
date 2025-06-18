#include "chat.h"
#include "souris.h"
#include "Canari.h"

using namespace std;

int main() {
    cout << "=== Demonstration de la hierarchie d'animaux ===" << endl << endl;
    
    // Creation d'animaux individuels
    cout << "1. Creation d'animaux individuels:" << endl;
    chat monChat("Felix");
    souris maSouris("Jerry");
    Canari monCanari("Titi");
    
    // Demonstration du polymorphisme avec un tableau de pointeurs
    cout << "2. Demonstration du polymorphisme avec tableau de pointeurs:" << endl;
    const int NB_ANIMAUX = 6;
    Animal* animaux[NB_ANIMAUX];
    
    // Creation des animaux avec new
    animaux[0] = new chat("Minou");
    animaux[1] = new souris("Pikachu"); 
    animaux[2] = new Canari("Tweety");
    animaux[3] = new chat("Garfield");
    animaux[4] = new souris("Jerry");
    animaux[5] = new Canari("Titi");
    
    // Parcours du tableau et utilisation du polymorphisme
    for (int i = 0; i < NB_ANIMAUX; i++) {
        cout << animaux[i]->getNom() << " s'exprime: ";
        animaux[i]->s_exprimer();
    }
    
    // Liberation de la memoire
    for (int i = 0; i < NB_ANIMAUX; i++) {
        delete animaux[i];
    }
    
    cout << endl;
       
    return 0;
}