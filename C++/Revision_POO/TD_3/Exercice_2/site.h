#include<iostream>

using namespace std;
class Document{
    string titre ;
    string *Motcles;
    int nbMotcles;
    public:
    Document(string t, string *m, int n){
        titre = t;
        Motcles = new string[n];
        nbMotcles = n;
        for(int i = 0; i < n; i++){
            Motcles[i] = m[i];
        }
    }
    ~Document(){
        delete[]Motcles;
    }
    string getTitre() {
        return titre;
    }
    string* getMotcles() {
        return Motcles;
    }
    int getNbMotcles() {
        return nbMotcles;
    }
};

class Site{
    Document ** document;
    int nbDocument;
    int courant;
    public:
    Site(int );
    ~Site();
    void ajouter_doc(string t, string *m, int n);
    void supp_doc(string );
    bool recherche(string);
    void copier_site(Site);
    void affiche();
};