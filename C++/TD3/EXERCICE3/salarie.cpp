#include"salarie.h"
salarie::salarie(chaine f_prenom,chaine f_nom){
    strcpy(s_prenom,f_prenom);
    strcpy(s_nom,f_nom);
    //cout<<"\nAppel du constructeur de salarie par defaut"<<this<<endl;
}
salarie::~salarie(){
   // cout<<"\nAppel du destructeur de salarie "<<this<<endl;
}
char* salarie::get_nom(){
    return s_nom;
}
char* salarie::get_prenom(){
    return s_prenom;
}
void salarie::affiche(){
    cout<<s_prenom<<"\t"<<s_nom;
}
salarie:: salarie(const salarie& sal){
    strcpy(s_nom,sal.s_nom);
    strcpy(s_prenom,sal.s_prenom);
    cout<<"\nCONSTRUCTEUR DE RECOPIE DE LA CLASSE SALARIE\n";
}
salarie& salarie:: operator=(const salarie& sal){
    if(this==&sal) return *this;
    strcpy(s_nom,sal.s_nom);
    strcpy(s_prenom,sal.s_prenom);
    return *this;
}