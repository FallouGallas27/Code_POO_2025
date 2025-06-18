#include "Societe.h"

Societe::Societe(int l, int c){
    nbligne = l;
    nbcolonne = c;
    voiture = new Voiture**[l];
    for (int i = 0; i < l; i++)
    {
        voiture[i] = new Voiture*[c];
        for (int j = 0; j < c; j++)
        {
            voiture[i][j] = nullptr;
        }
        
    }
    cout<<"Appel du const de societe "<<this<<endl;
}
Societe::~Societe(){
    if (voiture)
    {
        for (int i = 0; i < nbligne; i++)
        {
            for (int j = 0; j < nbcolonne; j++)
            {
                delete voiture[i][j];
            }
            delete[] voiture[i];
        }
        delete []voiture;
    }
    cout<<"Appel du dest de societe "   <<this<<endl;
}

void Societe::insertion(Voiture * v){
    int i = h(v->cle);
    int j = 0;
    while (j < nbcolonne && voiture[i][j] != nullptr &&  strcmp(voiture[i][j]->cle,v->cle) !=0)
    {
        j ++;
    }
    if (j < nbcolonne && voiture[i][j] != nullptr &&  strcmp(voiture[i][j]->cle,v->cle) ==0)
    {
        cout<<"Voiture deja insere \n";
    }
    if (j < nbcolonne && voiture[i][j] == nullptr)
    {
        voiture[i][j] = v;
    }
    if (j == nbcolonne)
    {
        cout<<"La ligne est pleine\n";
    }

}
void Societe::supprimer(char* clee){
    int i = h(clee);
    int j = 0;
    if (voiture[i][j] == nullptr)
    {
        cout<<"La voiture n'est pas insere \n";
    }
    else
    {
        for(j = 0; j < nbcolonne; j++){
            if(voiture[i][j] != nullptr && strcmp(voiture[i][j]->cle, clee)== 0){
                delete voiture[i][j];
                for (int k = j; k < nbcolonne; k++){
                    
                    voiture[i][k] = voiture[i][k + 1];
                }
                voiture[i][ nbcolonne -1] = nullptr;
            }
        }
    }
}

bool Societe::recherche(char * clee){
    int i = h( clee);
    int j = 0;
    for ( j = 0; j < nbcolonne; j++)
    {
        if (voiture[i][j] !=nullptr && strcmp(voiture[i][j]->cle, clee) == 0)
        {
            return true;
        }
        
    }
     return false;
}

int Societe::h(char * clee){
    int somme = 0;
    for (int i = 0; i < strlen(clee) +1; i++)
    {
        somme += clee[i];
    }
    return somme % nbligne;
}

void affiche(const Societe& societe){
    for (int i = 0; i < societe.nbligne; i++)
    {
        for (int j = 0; j < societe.nbcolonne; j++)
        {
            if (societe.voiture[i][j] )
            {
                cout <<"Ligne  "<<i;
                cout<<"Cle "<<societe.voiture[i][j]->cle<<"  ";
                cout<<"Marque "<<societe.voiture[i][j]->marque<<"  ";
                cout<<"Modele "<<societe.voiture[i][j]->modele<<"  ";
                cout<<"Gamme "<<societe.voiture[i][j]->gamme<<"  ";
                cout<<"Annee "<<societe.voiture[i][j]->annee<<"  ";
                cout<<"Presentation "<<societe.voiture[i][j]->presentation<<"  ";
                cout<<endl;
            }
        }
        
    }
    
}


Societe::Societe(const Societe& s){
    nbcolonne = s.nbcolonne;
    nbligne = s.nbligne;
    voiture = new Voiture**[nbligne];
    for (int i = 0; i < nbligne; i++)
    {
        voiture[i] = new Voiture*[nbcolonne];
        for(int j = 0; j < nbcolonne; j++)
            voiture[i][j] = nullptr;
    }
    for (int i = 0; i < nbligne; i++)
    {
        for (int j = 0; j < nbcolonne; j++)
        {
            if (s.voiture[i][j])
            {
                Voiture *v = new Voiture;
                strcpy(v->cle, s.voiture[i][j]->cle );
                (v->annee = s.voiture[i][j]->annee);
                strcpy(v->gamme, s.voiture[i][j]->gamme);
                strcpy(v->marque, s.voiture[i][j]->marque);
                strcpy(v->modele, s.voiture[i][j]->modele);
                strcpy(v->presentation, s.voiture[i][j]->presentation);
                voiture[i][j] = v;
            }
            
        }
        
    }
    
    cout<<"Le const de recopie \n";
}

Societe& Societe:: operator<<(Voiture * v){
    int i = h(v->cle);
    int j = 0;
    while (j < nbcolonne && voiture[i][j] !=nullptr && strcmp(voiture[i][j]->cle, v ->cle) != 0)
    {
        j++;
    }
    if (j < nbcolonne && voiture[i][j] !=nullptr && strcmp(voiture[i][j]->cle, v ->cle) == 0)
    {
        cout<<"Voiture deja insere\n";
    }
    if (j < nbcolonne && voiture[i][j] ==nullptr )
    {
        voiture[i][j] = v;
    }
    if (j == nbcolonne)
    {
        cout<<"La ligne est pleine\n";
    }
    return *this;
}
Societe& Societe:: operator>>(char * clee){
    int i = h(clee);
    int j =0;
    if (voiture[i][j] == nullptr)
    {
        cout<<"La voiture n'est pas insere\n";
    }
    else
    {
        for (int  j = 0; j < nbcolonne; j++)
        {
            if (voiture[i][j] != nullptr && strcmp(voiture[i][j]->cle, clee) == 0)
            {
                delete voiture[i][j];
                for (int d = 0; d < nbcolonne; d++)
                {
                    voiture[i][d] = voiture[i][d +1];
                }
                
            }
            voiture[i][nbcolonne -1] = nullptr;
            
        }
        
    }
    
    return *this;
}
bool Societe::operator%(char*clee){
    int i = h(clee);
    int j = 0;
    if(voiture[i][j] != nullptr){
        return true;
    }
    return false;
}