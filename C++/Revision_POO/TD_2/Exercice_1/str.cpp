#include "str.h"

str::str(){
    cout <<"Appel de const par defaut\n";
    longueur = 0;
    chaine = nullptr;
}
str::str(char* mot ){
    longueur = strlen(mot);
    chaine = new char[longueur];
    for (int i = 0; i < longueur; i++)
    {
        chaine[i] = mot[i];
    }
    cout<<"Appel du 2eme const de copie\n";
}
str::str(const str& s){
    longueur = s.longueur;
    chaine = new char[longueur];
    for (int i = 0; i < longueur; i++)
    {
        chaine[i] = s.chaine[i];
    }
    cout<<"Appel du const de recopie\n";
    
}
str::~str(){
    delete chaine;
    cout<<"Appel du dest de str\n";
}
str& str::operator = (const str& s){
    if(this == &s) return *this;
    delete [] chaine;
    longueur = s.longueur;
    
    chaine = new char[longueur];
    for (int i = 0; i < longueur; i++)
    {
        chaine[i] = s.chaine[i];
    }
    cout<<"Appel de l'operateur d'affectation\n";
    return *this;
}
bool str:: operator  ==(const str& p){
    cout<<"Appel de l'operateur de comparaison\n";
    if(longueur != p.longueur)
        return false;
    int i =0 ;
    while (i < longueur && (chaine[i] == p.chaine[i]))
    {
        i++;
    }
    if(i < longueur)
        return false;
    else 
        return true;
    
}
str str:: operator +(const str& s){
    str a;
    cout<<"Appel de l'operateur de concatention\n";
     a.longueur = longueur+ s.longueur;
    a.chaine = new char[a.longueur];
    int j=0;
    for (int  i = 0; i < a.longueur; i++)
    {
        if(i<longueur)
            a.chaine[i] = chaine[i];
        else
            a.chaine[i] = s.chaine[j++];
    }
    
    return a;
}
char str::operator[](int i){
    if(i < 0 || i >longueur)
        throw ErrreurDim(i);
    return chaine[i];
}

void str::affiche(){
    for (int i = 0; i < longueur; i++)
    {
        cout<<chaine[i];
    }
    
}