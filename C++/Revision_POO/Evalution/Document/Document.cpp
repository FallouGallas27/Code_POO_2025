#include <iostream>
#include <cstring>

using namespace std;
class Document
{
private:
   char* nom;
   char *tab[5];
public:
    Document(char* noom);
    ~Document();
    void ajouter(char* noom);
    void supprimer(char* noom);
    bool recherche(char * noom);
    void affiche();
    Document (const Document&);
    Document& operator<<(char* noom);
    bool operator%(char *noom );
};

Document::Document(char* noom)
{
    nom = new char[strlen(noom)+ 1];
    strcpy(nom, noom);
    for (int i = 0; i < 5; i++)
    {
        tab[i] = nullptr;
    }
    
}

Document::~Document()
{
    for (int  i = 0; i < 5; i++)
    {
        delete[] tab[i];
        tab[i]= nullptr;
    }
    delete [] nom;
}
void Document::ajouter(char* noom){
    int i = 0;
   while (i < 5 && tab[i] != nullptr)
   {
        i++;
   }
   if (i < 5)
   {
        tab[i] = new char[strlen(noom) +1];
        strcpy(tab[i], noom);
   }
   else
    cout<<"Tableau plein\n";
}
void Document:: supprimer(char* noom){
    int i = 0; 
    while (i < 5 && strcmp(tab[i],noom) != 0)
    {
        i++;
    }
    if(i < 5 && tab[i] != nullptr){
        delete [] tab[i];
        for (int  j = i; j < 4; j++)
        {
            strcpy(tab[j], tab[j+1]);
        }
        tab[4] = nullptr;
    }
}
bool Document::recherche(char* noom){
    int  i = 0;
    while (i < 5 && strcmp(tab[i],noom) != 0 )
    {
        i++;
    }
    if( i < 5)
        return true;
    return false;
}

void Document :: affiche(){
    cout<< "Le nom du document\t"<< nom<<endl;
    cout<<"La liste des mot-cles du document\n";
    cout<<tab[0] <<"->";
    int  i = 1;
    while (i <= 3 && tab[i] !=NULL)
    {
        cout<<tab[i] <<"->" ;
        i++;
    }
    cout<<tab[4]<<endl;
    
}
Document :: Document(const Document& d){
    nom = new char[strlen(d.nom)+1];
    strcpy(nom, d.nom);
    for (int  i = 0; i < 5; i++)
    {
        tab[i] = new char[strlen(d.tab[i])+1];
        strcpy(tab[i], d.tab[i]);
    }
    
}
Document&  Document::operator<<(char* noom){
   ajouter(noom);
   return *this;
}
bool  Document::operator%(char *noom ){
   return recherche(noom);
}
int main(){
    char *mot = new char[strlen("Notion de classe")+ 1];char *mot1 = new char[strlen("operateur d'affectation")+ 1];
    char *mot2 = new char[strlen("surcharge d'operateur") +1];char*mot3 =new char[strlen("template") + 1]; char *mot4 = new char[strlen("classe")+ 1];
    char *mot5 = new char[strlen("recopie") + 1];
     strcpy(mot ,"Notion de classe"); strcpy(mot1, "operateur d'affectation");
    strcpy(mot2 ,"surcharge d'operateur"); strcpy(mot3, "template");strcpy(mot4, "classe");
    strcpy(mot5, "recopie");
    Document d(mot);
    // d.ajouter(mot1);
    // d.ajouter(mot2);
    // d.ajouter(mot3);
    // d.ajouter(mot4);
    // d.ajouter(mot5);
    d<<mot1;
    d<<mot2;
    d<<mot3;
    d<<mot4;
    d<<mot5;
    d.affiche();
    cout<<"\nRecherche du mot 'template' "<<(d.recherche(mot3)? "Trouve" : "Non trouvee")<<endl;
    cout<<"\nRecherche du mot 'classe' "<<(d % (mot3)? "Trouve" : "Non trouvee")<<endl;
    Document D (d);
    cout<<"La recopie\n";
    D.affiche();
}