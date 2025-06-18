#include "Table.h"

Table ::Table(int c){
    nbmax = c;
    nbcourant = 0;
    doc = new Document*[c];
    for (int  i = 0; i < c; i++)
    {
        doc[i] = nullptr;
    }
    
}
Table ::~Table(){
    if (doc)
    {
        for(int i = 0; i < nbmax; i++){
            for (int j = 0; j < N; j++)
            {
                delete doc[i]->mot_cles[j];
            }
            
            delete [] doc[i];
        delete doc;
    }
    }
    
}
void Table::insertion(Document* d){
    int i = 0;
    while(i < nbcourant && doc[i]->cle != d->cle)
        i++;
    if(i < nbcourant){
        cout<<"Le document est deja insere\n";
    }
    else 
        if (nbcourant < nbmax)
        {
            doc[nbcourant++] = d;
        }
        else
            cout<<"La table est pleine\n";
}
void Table::supprimer(int c){
    for (int  i = 0; i < nbcourant; i++)
    {
        if (doc[i]->cle == c)
        {
            delete doc[i];
            for (int j = i; j < nbcourant; j++)
            {
                doc[j] = doc[j +1];
            }
            nbcourant--;
            
        }
        
    }

}

bool Table::recherche(int cl){
    for (int i = 0; i < nbcourant; i++)
    {
        if (doc[i]->cle == cl)
        {
            return true;
        }
        
    }
    return false;
}

Table::Table(const Table& t) {
    nbmax = t.nbmax;
    nbcourant = t.nbcourant;
    doc = new Document*[nbmax];
    
    for (int i = 0; i < nbmax; i++) {
        doc[i] = nullptr;
    }

    cout << "\nLe constructeur de recopie\n";

    for (int i = 0; i < nbcourant; i++) {
        doc[i] = new Document;
        doc[i]->cle = t.doc[i]->cle;
        strcpy(doc[i]->val, t.doc[i]->val);

        // Copier les mots-clés
        doc[i]->mot_cles = new char*[N];
        int j = 0;
        while (t.doc[i]->mot_cles[j] != nullptr) {
            doc[i]->mot_cles[j] = new char[strlen(t.doc[i]->mot_cles[j]) + 1];
            strcpy(doc[i]->mot_cles[j], t.doc[i]->mot_cles[j]);
            j++;
        }
        doc[i]->mot_cles[j] = nullptr; // Fin du tableau
    }
}
void Table::affiche(){
    for (int  i = 0; i < nbcourant; i++)
    {
        cout<<"Cle "<<doc[i]->cle<<" Valeur "<<doc[i]->val<<endl;
        int j = 0;
        cout<<"La liste des mots cles\n";
        while (doc[i]->mot_cles[j] != nullptr)
        {
            cout<<doc[i]->mot_cles[j]<<" ";
            j++;
        }
        cout<<endl;
    }
    
}
Table& Table::operator =(const Table& t){
    if (this != &t)
    {
        for (int  i = 0; i < nbmax; i++)
        {
            for (int j = 0; j < N; j++)
            {
                delete doc[i]->mot_cles[j];
            }
            
            delete doc[i];
        }
        delete doc;
        nbmax = t.nbmax;
        nbcourant = t.nbcourant;
        doc = new Document*[nbmax];
        for (int i = 0; i < nbmax; i++)
        {
            doc[i] = nullptr;
        }
        for (int i = 0; i < nbcourant; i++)
        {
            Document* d = new Document;
            d->cle = t.doc[i]->cle;
            strcpy(d->val, t.doc[i]->val);
            d->mot_cles = new char*[N];
            for (int j = 0; j < N; j++)
            {
                if(t.doc[i]->mot_cles[j]){
                    d->mot_cles[j] = new char[strlen(t.doc[i]->mot_cles[j]) + 1];
                    strcpy(d->mot_cles[j], t.doc[i]->mot_cles[j]);
                }

            }
            

        }
        
        
    }
    return * this;
}

Table& Table::operator<<(Document* d){
     int i = 0;
    while(i < nbcourant && doc[i]->cle != d->cle)
        i++;
    if(i < nbcourant){
        cout<<"Le document est deja insere\n";
    }
    else 
        if (nbcourant < nbmax)
        {
            doc[nbcourant++] = d;
        }
        else
            cout<<"La table est pleine\n";
    return *this;
}
Table& Table::operator>>(int c){
      for (int  i = 0; i < nbcourant; i++)
    {
        if (doc[i]->cle == c)
        {
            delete doc[i];
            for (int j = i; j < nbcourant; j++)
            {
                doc[j] = doc[j +1];
            }
            nbcourant--;
        }
        
    }
    return *this;
}
bool Table::operator%(int c){
     for (int i = 0; i < nbcourant; i++)
    {
        if (doc[i]->cle == c)
        {
            return true;
        }
        
    }
    return false;
}