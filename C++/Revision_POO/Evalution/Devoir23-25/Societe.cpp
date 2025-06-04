#include "Societe.h"


Societe::Societe(int l,int c)
{
    nbml = l;
    nbmc = c;
    voiture = new Voiture**[l];
    for (int i = 0; i < l; i++)
    {
        voiture[i] = new Voiture*[c];
    }
    for (int i = 0; i < nbml; i++)
    {
        for (int j = 0; j < nbmc; j++)
        {
            voiture[i][j] = nullptr;
        }
        
    }
    cout<<"Appel du constructeur de Societe\n";
}

Societe::~Societe()
{
    for (int i = 0; i < nbml; i++)
    {
        for (int  j = 0; j < nbmc; j++)
        {
            delete []voiture[i][j];
        }
        
    }
    delete[] voiture;
    cout<<"Appel du dest de la classe Societe\n";
}
int Societe::hachage(char input[20]) {
     int hash = 0; // Initialiser la valeur de hachage à 0
     // Parcourir chaque caractère de l'entrée
    for (int i = 0; i <  strlen(input); i++) {
        hash = (hash + input[i])%nbml; // Calcul du hachage
    }
    return hash; // Retourner la valeur de hachage
}
void Societe::insertion(Voiture * v){
    int  i = hachage(v->cle);
    int j = 0;
    if(voiture[i][j] == nullptr){
        voiture[i][j] = v;
    }
    else
    {
        while (j < nbmc && voiture[i][j] !=nullptr)
        {
            j++;
        }
        if(j < nbmc)
            voiture[i][j] = v;
    }
    
}

void Societe::supprimer(char cle[20]){
    int i = hachage(cle);
    int j =0;
    if(voiture[i][j] != nullptr && strcmp(voiture[i][j]->cle,cle) == 0){
        delete voiture[i][j];
        for (int d = j; d < nbmc; d++)
        {
            if(voiture[i][d+1] != nullptr)
            voiture[i][d] = voiture[i][d+1];
        }
        
    }
    else
    {
        while (j < nbmc && voiture[i][j]!=nullptr&& strcmp(voiture[i][j]->cle,cle)!=0)
        {
            j++;
        }
        if(j < nbmc){
            for (int d = j; d < nbmc; d++)
            {
                voiture[i][d] = voiture[i][d+1];
            }
        }
        
    }
    
}

bool Societe::recherche(char into[20]){
    int i = hachage(into);
    for (int j = 0; j < nbmc; j++)
    {
        if(voiture[i][j] != nullptr && strcmp(voiture[i][j]->cle,into)==0)   
            return true; 
    }
    return false;
}

void Societe::affiche(Voiture *v){
    int i = hachage(v->cle);
    {
        cout<<"Ligne "<<i<<endl;
        for (int j = 0; j < nbmc; j++)
        {
            if(voiture[i][j] != NULL)
            cout<<"Cle\t"<<voiture[i][j]->cle<<"\tMarque\t"<<voiture[i][j]->marque<<"\tModele\t"<<voiture[i][j]->modele
            <<"\tGamme\t"<<voiture[i][j]->gamme<<"\tAnnee\t"<<voiture[i][j]->annee<<"\tPresentation\t"<<voiture[i][j]->presentation<<endl;
        }
        
    }
    
}

Societe ::Societe(Societe& s){
    cout<<"Appel du constructeur de recopie\n";
    nbml = s.nbml;
    nbmc = s.nbmc;
    voiture = new Voiture**[nbml];
    for (int i = 0; i < nbml; i++)
    {
        voiture[i] = new Voiture*[nbmc];
    }

    for (int i = 0; i < nbml; i++)
    {
        for (int j = 0; j < nbmc; j++)
        {
            voiture [i][j] =  s.voiture[i][j];
        }
        
    }
}

Societe& Societe::operator<<(Voiture* v){
    int i = hachage(v->cle);
    for (int j = 0; j < nbmc; j++)
    {
        if(voiture[i][j] == nullptr)
        voiture[i][j] = v;
        break;
    }
    return *this;
}
Societe& Societe::operator>>(char mot[20] ){
    int i = hachage(mot);
    for (int j = 0; j < nbmc; j++)
    {
        if (voiture[i][j] && strcmp(voiture[i][j]->cle,mot)==0)
        {
            delete voiture[i][j];
            for (int d = j; d < nbmc; d++)
            {
                voiture[i][d] = voiture[i][d+1];
            }
            
        }
        
    }
    return *this;
}
bool Societe::operator%(char mot[20]){
    int i = hachage(mot);
    for (int j = 0; j < nbmc; j++)
    {
        if(voiture[i][j] != nullptr && strcmp(voiture[i][j]->cle,mot)==0)
          return true;
    }
    return false;
}