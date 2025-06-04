#include<iostream>
#include"Admin.h"
using namespace std;

Admin:: Admin(char n[10],char p[20],char f[30]):Salarie(n,p){
    cout <<"Appel du constructeur de Admin"<<endl;
    strcpy(fonction,f);
}
Admin::~Admin(){
    cout<<"Appel du destructeur de Admin"<<endl;
}

char *Admin::getFonction(){
    return fonction;
} 
void Admin::affiche(){
    Salarie::affiche();
    cout<<"Fonction  "<<getFonction()<<endl;
}