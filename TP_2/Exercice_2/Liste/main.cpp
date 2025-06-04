#include "File.h"

int main()
{
    File f1;
    
    cout << "Enfilage des elements 0, 1, 2, 3, 4:\n";
    f1.enfiler(0);
    f1.enfiler(1);
    f1.enfiler(2);
    f1.enfiler(3);
    f1.enfiler(4);
    f1.affiche();
    
    cout << "\nDefilage de 2 elements:\n";
    cout << "Element defile: " << f1.defiler() << endl;
    cout << "Element defile: " << f1.defiler() << endl;
    f1.affiche();
    
    cout << "\nTete de la file: " << f1.Tete() << endl;
    cout << "File vide? " << (f1.est_vide() ? "Oui" : "Non") << endl;
    cout << "\n=== Test constructeur de recopie ===\n";
    File f2(f1);  // Appel du constructeur de recopie
    cout << "f2 (copie de f1): ";
    f2.affiche();
    
    cout << "\n=== Test independance des copies ===\n";
    cout << "Modification de f1 (defilage de 2 elements):\n";
    f1.defiler();
    f1.defiler();
    cout << "f1 apres defilage: ";
    f1.affiche();
    cout << "f2 (doit rester inchange): ";
    f2.affiche();
    
    cout << "\n=== Test operateur d'affectation ===\n";
    File f3;
    f3.enfiler(100);
    f3.enfiler(200);
    cout << "f3 avant affectation: ";
    f3.affiche();
    
    f3 = f2;  // Appel de l'opérateur d'affectation
    cout << "f3 apres f3 = f2: ";
    f3.affiche();
    
    cout << "\n=== Test auto-affectation ===\n";
    f3 = f3;  // Auto-affectation
    cout << "f3 apres auto-affectation: ";
    f3.affiche();
    f2.guichet(f3);
    
    return 0;
}