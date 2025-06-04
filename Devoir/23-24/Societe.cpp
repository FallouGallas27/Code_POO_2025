#include "Societe.h"

Societe:: Societe(int lign, int col){
    ligne = lign;
    colonne = col;
    voiture = new Voiture**[lign];
    for (int i = 0; i < lign; i++)
    {
        voiture[i] = new Voiture*[colonne];
        for (int j = 0; j < colonne; j++)
        {
            voiture[i][j] = nullptr;
        }
        
    }
    cout<<"Appel du const de societe "<<this<<endl;
}
Societe::~Societe(){
    if (voiture) {
        for (int i = 0; i < ligne; i++) {
            for (int j = 0; j < colonne; j++) {
                if (voiture[i][j] != nullptr) {
                    delete voiture[i][j];
                }
            }
            delete[] voiture[i];
        }
        delete[] voiture;
    }
    cout << "Appel du dest de societe " << this << endl;
}
void Societe::insertion(Voiture* v) {
    int i = hachage(v->cle);
    int j = 0;
    while (j < colonne && voiture[i][j] != nullptr && strcmp(voiture[i][j]->cle, v->cle) != 0) {
        j++;
    }
    if (j < colonne && voiture[i][j] != nullptr && strcmp(voiture[i][j]->cle, v->cle) == 0) {
        cout << "Voiture deja insere!!!\n";
        delete v;
        return;
    }
    if (j < colonne && voiture[i][j] == nullptr) {
        voiture[i][j] = v;
        cout << "Voiture inseree avec succes\n";
    } else {
        cout << "Impossible d'inserer, ligne pleine\n";
        delete v;
    }
}
void Societe::supprimer(char ccle[20]){
    int i = hachage(ccle);
    int j ,d;
    
    for(j = 0; j < colonne; j++){
        if(voiture[i][j] != nullptr && strcmp(voiture[i][j]->cle, ccle) == 0){
            delete voiture[i][j];
            for ( d = j; d < colonne; d++)
            {
                voiture[i][d] = voiture[i][d+1];
            }
            voiture[i][colonne-1] = nullptr;
        }
    }




}
bool Societe::recherche(char ccle[20]){
    int i = hachage(ccle);
    int j = 0;
    if (voiture[i][j] != nullptr)
    {
        return true;
    }
    return false;
    
}
void affiche(const Societe& s){
    for (int i = 0; i < s.ligne; i++)
    {
        if (s.voiture[i][0])
        {
            cout<<"Ligne "<<i<<" :";
            cout<<"Cle "<<s.voiture[i][0]->cle<<" "<<s.voiture[i][0]->gamme<<" "<<s.voiture[i][0]->annee<<" "<<s.voiture[i][0]->modele<<" "<<s.voiture[i][0]->presentation;
            for (int j = 1; j < s.colonne; j++)
            {
                if (s.voiture[i][j])
                {
            cout<<"Cle "<<s.voiture[i][j]->cle<<" "<<s.voiture[i][j]->gamme<<" "<<s.voiture[i][j]->annee<<" "<<s.voiture[i][j]->modele<<" "<<s.voiture[i][j]->presentation;
                    
                }
                
            }
            cout<<endl;
        }
        
    }
    
}
int Societe::hachage(char ccle[20]){
    int val= 0;
    for (int i = 0; i < strlen(ccle); i++)
    {
        val += ccle[i];
    }
    return val % ligne;
}
Societe::Societe(const Societe& s) {
    ligne = s.ligne;
    colonne = s.colonne;
    voiture = new Voiture**[ligne];
    for (int i = 0; i < ligne; i++) {
        voiture[i] = new Voiture*[colonne];
        for (int j = 0; j < colonne; j++) {
            voiture[i][j] = nullptr;
        }
    }
    
    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colonne; j++) {
            if (s.voiture[i][j] != nullptr) {
                Voiture* nouvelleVoiture = new Voiture;
                strcpy(nouvelleVoiture->cle, s.voiture[i][j]->cle);
                strcpy(nouvelleVoiture->gamme, s.voiture[i][j]->gamme);
                strcpy(nouvelleVoiture->modele, s.voiture[i][j]->modele);
                nouvelleVoiture->annee = s.voiture[i][j]->annee;
                strcpy(nouvelleVoiture->presentation, s.voiture[i][j]->presentation);
                voiture[i][j] = nouvelleVoiture;
            }
        }
    }
    cout << "Le constructeur de recopie " << this << endl;
}