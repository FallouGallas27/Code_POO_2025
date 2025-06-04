#include<iostream>
#include<string.h>
using namespace std;
typedef char chaine [50];
class Noeud{
    public:
    chaine nom,prenom,diplome;
    char**matiere; int nb_matiere;
    Noeud *suiv;
    Noeud(chaine nom1,chaine prenom1,chaine diplome1,Noeud*suivant=NULL){
        strcpy(nom,nom1);
        strcpy(prenom,prenom1);
        strcpy(diplome,diplome1);
        matiere=new char*[5];
        for(int i=0;i<5;i++){
            matiere[i]=nullptr;
        }
        suiv=suivant;
        nb_matiere=0;

    }
    ~Noeud(){
        
    }
};
class Enseignant
{
private:
    Noeud *tete;
public:
    Enseignant(Noeud*);
    ~Enseignant();
    char* getNom();
    char* getPrenom();
    char* getDiplome();
    void setMatiere(chaine);
    void ajout(chaine,chaine,chaine,Noeud* );
    void ajout_tete(chaine,chaine,chaine,Noeud* );
    Enseignant& operator=(const Enseignant&);
    void affiche();
};

