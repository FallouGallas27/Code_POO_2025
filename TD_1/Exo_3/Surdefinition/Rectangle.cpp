#include"Rectangle.h"

Rectangle::Rectangle(unsigned int l , unsigned int h ){
    cout<<"Appel du constructeur de la classe rectangle "<<this<<endl;
    largeur  = l;
    hauteur = h;
}
Rectangle::~Rectangle(){
    cout<<"\nAppel du destructeur de la classe rectangle "<<this<<endl;
}
unsigned int Rectangle:: GetLargeur(){
    return largeur;
}
unsigned int Rectangle:: GetHauteur(){
    return hauteur;
}
unsigned int Rectangle:: perimetre(){
    return 2 * (largeur + hauteur);
}
unsigned int Rectangle:: surface(){
    return largeur * hauteur;
}
void Rectangle::SetLargeur(unsigned int larg){
    largeur += larg;
}
void Rectangle::SetHauteur(unsigned int haut){
    hauteur += haut;
}
ostream& operator<<(ostream& sortie, const Rectangle& r){
    sortie<<"La largeur du rectangle est "<<r.largeur<<endl;
    sortie<<"La hauteur du rectangle est "<<r.hauteur<<endl;
    return sortie;
}

bool Rectangle::operator==(const Rectangle& r){
    return largeur == r.largeur && hauteur == r.hauteur;
}
