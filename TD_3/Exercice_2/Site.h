#include <iostream>
using namespace std;
class Document{
    protected:
        string titre;
        string *mot_cle;
        int nb_mots_cle;
    public:
    Document(string titre, string *mot_cle, int nb_mots_cle)
        : titre(titre), mot_cle(mot_cle), nb_mots_cle(nb_mots_cle) {
            cout << "creation d'un document" << endl;
        }
        int getNbMotsCle() const { return nb_mots_cle; }
        string* getMotCle() const { return mot_cle; }
};
class Site
{
protected:
    string nom;
    Document **documents; // Tableau de pointeurs vers des documents
    int nb_documents; // Nombre de documents dans le site
    int capacite; 
public:
    Site();
    ~Site();
    void ajouterDocument(Document &doc) ;
    void supprimerDocument(Document &doc) ;
    void copierDocument(Site &site);
    bool RechercherDocument(string mot_cle) ;

};
