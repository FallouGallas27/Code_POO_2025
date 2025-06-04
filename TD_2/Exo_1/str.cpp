#include <cstring>
#include "str.h"


str::str(/* args */)
{
    longueur = 0;
    chaine = nullptr;
}

str::~str(){
    if(chaine)
        delete chaine;
}

str::str(char* mot){
    longueur = strlen(mot)+1;
    chaine = new char[longueur];
    for (int i = 0; i < longueur; i++)
    {
        chaine[i] = mot[i];
    }
}
str::str(str& s){
    longueur = s.longueur;
    chaine = new char[longueur];
    for (int i = 0; i < longueur; i++)
    {
        chaine[i] = s.chaine[i];
    }
    
}
void str::affiche(){
    cout<< longueur<<endl;
    cout<<chaine;
}
str& str::operator=(const str& s){
    if (this == &s)
    {
        return *this;
    }
    delete chaine;
    longueur = s.longueur;
    chaine = new char[longueur];
    for (int i = 0; i < longueur; i++)
    {
        chaine[i] = s.chaine[i];
    }
    
    return *this;
}
bool str::operator==(const str& s){
    if (longueur != s.longueur)
    {
        return false;
    }
    for (int i = 0; i < longueur; i++)
    {
        if (chaine[i] != s.chaine[i])
        {
            return false;
        }
    }
    return true;    
}
str str::operator+(const str& s) {
    str a;
    int taille1 = strlen(this->chaine);
    int taille2 = strlen(s.chaine);
    a.longueur = taille1 + taille2 + 1; // +1 pour '\0'
    a.chaine = new char[a.longueur];

    for (int i = 0; i < taille1; i++) {
        a.chaine[i] = this->chaine[i];
    }
    for (int i = 0; i < taille2; i++) {
        a.chaine[taille1 + i] = s.chaine[i];
    }
    a.chaine[a.longueur - 1] = '\0'; // très important !

    return a;
}

char& str::operator[](int n){
    if (n < 0 && n > longueur)
    {
        cout<<"Attention erreur!!!"<<endl;
    }
    return chaine[n];
    
}