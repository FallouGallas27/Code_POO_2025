#include "Enseignant.h"


Enseignant::Enseignant(char* noom, char* prenoom, char* dip, int j ,int m ,int an)
{
    nom = new char[strlen(noom)+1];
    strcpy(nom, noom);
    prenom = new char[strlen(prenoom)+ 1];
    strcpy(prenom, prenoom);
    diplome = new char[strlen(dip)+ 1];
    strcpy(diplome, dip);
    date.annee = an;
    date.jour = j;
    date.mois = m;
    for (int i = 0; i < 5; i++)
    {
        matiere[i] =  nullptr;
    }
    
}

Enseignant::~Enseignant()
{
    delete[] nom;
    delete[] prenom;
    delete[] diplome;
    for (int i = 0; matiere[i] != nullptr; i++)
    {
        delete [] matiere[i];
    }
    
}

void Enseignant::affiche(){
    cout<<"Les informations sur un enseignant\n";
    cout<<"Nom\t"<<nom<<"\tPrenom\t"<<prenom<<"\tDiplome\t"<<diplome<<"\tDate de naissance\t"<<date.jour<<"/"<<date.mois<<"/"<<date.annee<<endl;
    cout<<"La liste des matieres enseignees\n";
    for (int i = 0; i < 5; i++)
    {
        if(matiere[i] != nullptr)
        cout<<matiere[i]<<"\t";
    }
    
}
char* Enseignant:: getDiplome(){
    return diplome;
}
char* Enseignant::getIemMatiere(int n){
    if (n < 0 || n > 5)
    {
        throw ErreurIndice(n);
    }

    return matiere[n];
}
void Enseignant::ajouter(char* nommatiere){
    int i = 0;
    while (i < 5 && matiere[i] != nullptr) i++;
    if (i < 5)
    {
        matiere[i] = new char[strlen(nommatiere) +1];
        strcpy(matiere[i], nommatiere);
    }
    
    
}
void Enseignant::supprimer(char* nomm){
    int i = 0;
    while (i < 5 && strcmp(matiere[i] ,nomm) != 0) i++;
    if (i < 5)
    {
        delete matiere[i];
        for (int  j = i; j < 4; j++)
        {
            matiere[j] =  matiere[j + 1];
        }
        matiere[4] = nullptr;
    }
    
    
}
bool Enseignant::teste_matiere(char* nomm){
    for (int i = 0;matiere[i] != nullptr; i++)
    {
        if (strcmp(matiere[i],nomm) ==0)
        {
            return true;
        }
        
    }
    return false;
}
Enseignant& Enseignant:: operator<<(char* noom){
    ajouter(noom);
    return *this;
}
Enseignant& Enseignant:: operator>>(char* mat){
    supprimer(mat);
    return *this;
}
bool Enseignant:: operator%(char* mat){
    return teste_matiere(mat);
}
Enseignant ::Enseignant(const Enseignant& e){
    nom = new char[strlen(e.nom)+1];
    strcpy(nom, e.nom);
    prenom = new char[strlen(e.prenom)+1];
    strcpy(prenom, e.prenom);
    diplome = new char[strlen(e.diplome)+1];
    strcpy(diplome, e.diplome);
    date.jour = e.date.jour;
    date.mois = e.date.mois;
    date.annee = e.date.annee;
    for (int i = 0; i < 5; i++)
    {
        if(e.matiere[i] != nullptr){ 
        matiere[i] = new char[strlen(e.matiere[i])+1];
        strcpy(matiere[i], e.matiere[i]);
        }
        else 
        matiere[i] = nullptr;
    }
    
}
Enseignant& Enseignant::operator=(const Enseignant& e){
    if(this == &e) return *this;
    delete[] nom;
    delete[] prenom;
    delete[] diplome;
    for (int i = 0; matiere[i] != nullptr; i++)
    {
        delete [] matiere[i];
    }
    nom = new char[strlen(e.nom)+1];
    strcpy(nom, e.nom);
    prenom = new char[strlen(e.prenom)+1];
    strcpy(prenom, e.prenom);
    diplome = new char[strlen(e.diplome)+1];
    strcpy(diplome, e.diplome);
    date.jour = e.date.jour;
    date.mois = e.date.mois;
    date.annee = e.date.annee;
    for (int i = 0; i < 5; i++)
    {
        if(e.matiere[i] != nullptr){ 
        matiere[i] = new char[strlen(e.matiere[i])+1];
        strcpy(matiere[i], e.matiere[i]);
        }
        else 
        matiere[i] = nullptr;
    }
    return *this;
}