#include"Secretaire.h"

Secretaire::Secretaire(string n,int a,string d):Personnel(n,a,d){}

Secretaire::~Secretaire(){}

void Secretaire::affiche(){
    Personnel::affiche();
}