#include "File.h"

File::File()
{
    tete = nullptr;
    queue = nullptr;
    cout << "Appel du constructeur\n";
}

// Destructor
File::~File()
{
    while (tete)
    {
        Liste* temp = tete;
        tete = tete->suiv;
        delete temp;
    }
    //cout << "Appel du destructeur\n";
}

// Enqueue operation
void File::enfiler(int val)
{
    Liste* nouveau = new Liste;
    nouveau->elemt = val;
    nouveau->suiv = nullptr;
    
    if (tete == nullptr)  // Queue is empty
    {
        tete = nouveau;
        queue = nouveau;
    }
    else  // Queue is not empty
    {
        queue->suiv = nouveau;  // Link the new node
        queue = nouveau;        // Update queue pointer
    }
}

// Dequeue operation
int File::defiler()
{
    if (est_vide())
    {
        cout << "Erreur: File vide\n";
        return -1; // or throw exception
    }
    
    int valeur = tete->elemt;
    Liste* temp = tete;
    tete = tete->suiv;
    
    if (tete == nullptr)  // Queue becomes empty
    {
        queue = nullptr;
    }
    
    delete temp;
    return valeur;
}

// Get front element without removing it
int File::Tete()
{
    if (est_vide())
    {
        cout << "Erreur: File vide\n";
        return -1;
    }
    return tete->elemt;
}

// Check if queue is empty
bool File::est_vide()
{
    return tete == nullptr;
}

// Display queue
void File::affiche()
{
    Liste *courant = tete;
    cout << "File: ";
    while (courant)
    {
        cout << courant->elemt << " ";
        courant = courant->suiv;
    }
    cout << endl;
}
// Constructeur de recopie
File::File(const File& autre)
{
    tete = nullptr;
    queue = nullptr;
    cout << "Appel du constructeur de recopie\n";
    
    Liste* courant = autre.tete;
    while (courant != nullptr)
    {
        enfiler(courant->elemt);
        courant = courant->suiv;
    }
}

// Opérateur d'affectation
File& File::operator=(const File& autre)
{
    cout << "Appel de l'operateur d'affectation\n";
    
    // Vérifier l'auto-affectation
    if (this == &autre)
    {
        return *this;
    }
    
    // Vider la file actuelle
    while (!est_vide())
    {
        defiler();
    }
    
    // Copier tous les éléments de l'autre file
    Liste* courant = autre.tete;
    while (courant != nullptr)
    {
        enfiler(courant->elemt);
        courant = courant->suiv;
    }
    
    return *this;
}
// void File::guichet(const File& f){
//     Liste * courant = f.tete;
//     while (courant)
//     {
//         enfiler(courant->elemt);
//         cout<<"Client "<<courant->elemt<<" arrivee\n";
//         courant = courant->suiv;
//         enfiler(courant->elemt);
//         cout<<"Client "<<courant->elemt<<" arrivee\n";
//         cout<<"Client "<<defiler()<<" est servie\n";
//     }
//     while (!est_vide())
//     {
//          cout<<"Client "<<defiler()<<" est servie\n";
//     }
    
    
// }
void File::guichet(const File& f) {
    Liste* courant = f.tete;

    // Remplir la file courante avec les clients de f
    while (courant) {
        enfiler(courant->elemt);  // copier le client
        cout << "Client " << courant->elemt << " arrivée\n";
        courant = courant->suiv;
    }

    // Servir les clients dans l'ordre
    while (!est_vide()) {
        cout << "Client " << defiler() << " est servi\n";
    }
}
