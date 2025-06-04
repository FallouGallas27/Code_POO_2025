#include <iostream>
#include<cmath>
#include "Complexe.h"

using namespace std;

Complexe::Complexe(double reel,double imag)
{
    reelle = reel;
    imaginaire = imag;
    //cout<<"Appel du constructeur "<<this<<endl;
}

Complexe::~Complexe()
{
    //cout<<"Appel du destructeur de la classe"<<this<<endl;
}

double Complexe::getReelle(){
    return reelle;
}

double Complexe :: getImaginaire(){
    return imaginaire;
}

Complexe Complexe::ajouter(Complexe& c){
    Complexe k;
    k.reelle = this->reelle + c.reelle;
    k.imaginaire = this->imaginaire + c.imaginaire;
    return k;
}

Complexe Complexe::multiplier(Complexe& c){
    Complexe d;
    d.reelle = this->reelle * c.reelle + (-1*(this->imaginaire * c.imaginaire));
    d.imaginaire = reelle * c.imaginaire + imaginaire * c.reelle;
    return d;

}

void Complexe::aficher(){
    cout<< reelle ;
    if (imaginaire > 0)
    {
        cout<< " + "<<imaginaire<<"i"<<endl;;
    }
    else
        cout<<" "<<imaginaire<<"i"<<endl;
}

double Complexe::Modulle(){
    return sqrt(reelle * reelle + imaginaire * imaginaire);
}
Complexe Complexe::operator+(Complexe& c){
    Complexe k;
    k.reelle = this->reelle + c.reelle;
    k.imaginaire = this->imaginaire + c.imaginaire;
    return k;
}
Complexe Complexe::operator*(Complexe& c){
    Complexe d;
    d.reelle = this->reelle * c.reelle + (-1*(this->imaginaire * c.imaginaire));
    d.imaginaire = reelle * c.imaginaire + imaginaire * c.reelle;
    return d;

}
ostream& operator<<(ostream& sortie, Complexe & c){
    sortie<< c.getReelle ();
    if (c.getImaginaire() > 0)
    {
        sortie<< " + "<<c.getImaginaire()<<"i"<<endl;;
    }
    else
        sortie<<" "<<c.getImaginaire()<<"i"<<endl;
    return sortie;
}

int main(){
    Complexe A(-3, 4),B(-11, -7),C,D,E;
    cout<<"Complexe A = ";
    A.aficher();
    cout<<"Complexe B = ";
    B.aficher();
    cout<<"Apres l'addition de A et  B\n";
    C = A.ajouter(B);
    C.aficher();
    cout<<"La multiplication de A et B\n";
    D = A.multiplier(B);
    D.aficher();
    cout<<"Le module de A est "<< A.Modulle()<<endl;;
    E = A + B;
    cout<<"Oprateur +\n";
    E.aficher();
    cout<<"OPperation de *\n";
    E = A * D;
    //E.aficher();
    cout<<"Avec l'operateur <<\n";
    cout<<E<<A;
}