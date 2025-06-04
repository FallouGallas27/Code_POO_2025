#include"salarie.h"
#include"Administratif.h"
Administratif::Administratif(chaine f_prenom,chaine f_nom,chaine f_fonction):salarie(f_prenom,f_nom){
    strcpy(fonction,f_fonction);
    //cout<<"\n Appel du constructeur par defaut d'Administratif"<<this<<endl;
}
Administratif::~Administratif(){
    //cout<<"\nAppel du destructeur d'Administratif\n";
}
char* Administratif::get_fonction(){
    return fonction;
}
void Administratif::affiche(){
    salarie::affiche();
    cout<<"\t"<<fonction;
}
Administratif::Administratif(const Administratif& A):salarie(A){
    strcpy(fonction,A.fonction);
    cout<<"\nLe constructeur de recopie de la classe ADMINISTRATIF\n ";
}
Administratif& Administratif:: operator=( Administratif& a){
    cout<<"\nLa surdefinition de l'operateur '=' de la classe ADMINISTRATIF\n";
    if(this==&a) return *this;
    salarie *a1,*a2;
    a1=this;a2=&a;
    *a1=*a2;
    strcpy(fonction,a.fonction);
    return *this;
}