#include "Ensemble.h"
Ensemble ::Ensemble(int n){
    taille = 0;
    capacite = n;
    etudiant = new Etudiant[n];
}

Ensemble :: ~Ensemble(){
    delete[] etudiant;
}

int Ensemble :: cardinal() const{
    return taille;
}

void Ensemble :: ajoutet(Etudiant* e){
    if(taille < capacite && !contient(e)){
        etudiant[taille] = *e;
        taille++;
    }else{
        cout << "Ensemble plein" << endl;
    }
}

void Ensemble :: supprimer(Etudiant* e){
    int i = 0;
    while(i < taille && etudiant[i].id != e->id){
        i++;
    }
    if(i < taille){
        for(int j = i; j < taille - 1; j++){
            etudiant[j] = etudiant[j + 1];
        }
        taille--;
    }
}

bool Ensemble :: contient(Etudiant* e){
    for(int i = 0; i < taille; i++){
        if(etudiant[i].id == e->id){
            return true;
        }
    }
    return false;
}

void Ensemble :: afficher(){
    cout << "Ensemble : \n";
    for(int i = 0; i < taille; i++){
        cout << etudiant[i].id << " ";
        cout << etudiant[i].nom << " ";
        cout << etudiant[i].prenom << " ";
        cout << etudiant[i].email << " ";
        cout << etudiant[i].annee_arrivee << " ";
        cout << etudiant[i].description << " | ";
        cout<< endl;
    }
    cout << endl;
}
Ensemble::Ensemble(const Ensemble& other) {
    taille = other.taille;
    capacite = other.capacite;
    etudiant = new Etudiant[capacite];
    for (int i = 0; i < taille; i++) {
        etudiant[i] = other.etudiant[i];
    }
}
