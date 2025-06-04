#include"Salarie.h"


Salarie::Salarie(char n[10],char p[20])
{
    cout << "Appel du constructeur de Salarie" << endl;
    strcpy(nom,n);
    strcpy(prenom,p);
}

Salarie::~Salarie()
{
    cout<<"Appel d destructeur de salarie"<<endl;
}
char* Salarie::getNom(){
    return nom;
}
char* Salarie::getPrenom(){
    return prenom;
}
void Salarie::affiche(){
    cout<<"Prenom "<<getPrenom()<<"  Nom  "<<getNom()<<endl;
}