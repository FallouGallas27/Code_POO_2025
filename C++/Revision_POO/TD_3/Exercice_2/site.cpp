#include"site.h"
 Site::Site(int taille ){
    nbDocument =taille;
    courant =0;
    document = new Document*[taille];
 }
Site::~Site(){
    for(int i = 0; i< nbDocument; i++){
        delete [] document;
    }
    delete document;
    cout<<"Appel du destructeur de site\n";
}
void Site::ajouter_doc(string t, string *m, int n){
    if(courant<nbDocument)
        document[courant++] = new Document(t,m,n);
    else 
        cout<<"Site plein\n";
}
void Site::supp_doc(string title){
    for(int i = 0; i < courant; i++){
        if(document[i]->getTitre()==title)
            delete document[i];
        for(int j = i; j <courant; j++)
            document[j] = document [j+1];
        nbDocument --;
        break;
    }
}
bool Site::recherche(string mots){
   for(int i = 0; i < nbDocument; i++){
    for(int  j =0; j< document[i]->getNbMotcles(); j++){
            if(mots == document[i]->getMotcles()[j])
             {return true;
             break;}
    }
   }
   return false;
}
//La fonction ne marche pas!!!!!!!!!!!!!
void Site::copier_site(Site autreSite){
    nbDocument = autreSite.nbDocument;
     for (int i = 0; i < autreSite.nbDocument; ++i) {
            Document* doc = autreSite.document[i];
            for(int j = 0; j < autreSite.document[i]->getNbMotcles(); j++)
              document[i]->getMotcles()[j] =  autreSite.document[i]->getMotcles()[j];
            ajouter_doc(doc->getTitre(), doc->getMotcles(), doc->getNbMotcles());
        }
}
void Site::affiche(){
    cout <<"Affichage des informations du document\n";
    for(int i =0; i < courant; i++){
    cout<<"Titre\t"<<document[i]->getTitre()<<"\t";
    for (int j = 0; j < document[i]->getNbMotcles(); j++)
    {
        cout<<document[i]->getMotcles()[j]<<"\t";
    }
    }
}