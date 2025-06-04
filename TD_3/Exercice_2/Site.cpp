#include"Site.h"

Site::Site() {
    cout << "Creation d'un site" << endl;
    capacite = 10; // Capacité initiale du tableau de documents
    documents = new Document*[capacite]; // Allocation dynamique du tableau de pointeurs
    nb_documents = 0; // Initialisation du nombre de documents à 0
    
}
Site::~Site() {
    cout << "Destruction d'un site" << endl;
    // Libération de la mémoire allouée pour les documents
    for (int i = 0; i < nb_documents; i++) {
        delete documents[i];
    }
    delete[] documents;
}

void Site::ajouterDocument(Document &doc) {
    if (nb_documents >= capacite) {
        // Si le tableau est plein, on double sa capacité
        capacite *= 2;
        Document **nouveau_tableau = new Document*[capacite];
        for (int i = 0; i < nb_documents; i++) {
            nouveau_tableau[i] = documents[i];
        }
        delete[] documents;
        documents = nouveau_tableau;
    }
    documents[nb_documents++] = &doc; // Ajout du document et incrémentation du compteur
}
void Site::supprimerDocument(Document& doc) {
    for (int i = 0; i < nb_documents; i++) {
        if (documents[i] == &doc) {
            delete documents[i]; // Libération de la mémoire du document
            // Décalage des éléments suivants
            for (int j = i; j < nb_documents - 1; j++) {
                documents[j] = documents[j + 1];
            }
            nb_documents--; // Décrémentation du compteur de documents
            return;
        }
    }
}
void Site::copierDocument(Site &site) {
    for (int i = 0; i < site.nb_documents; i++) {
        ajouterDocument(*site.documents[i]); // Ajout de chaque document du site source
    }
}

bool Site::RechercherDocument(string mot_cle) {
    for (int i = 0; i < nb_documents; i++) {
        Document *doc = documents[i];
        for (int j = 0; j < doc->getNbMotsCle(); j++) {
            if (doc->getMotCle()[j] == mot_cle) {
                return true; // Mot clé trouvé dans le document
            }
        }
    }
    return false; // Mot clé non trouvé dans aucun document
}
