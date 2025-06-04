#
#include<iostream>
#include"Compte.h"
using namespace std;
Compte::Compte(long nb)
{
    numero =nb;
    cout<<"\nAppel du constructeur par defaut "<<this<<endl;
    numero++;
}

Compte::~Compte()
{
    cout<<"\nAppel du destructeur "<<this<<endl;
}
void Compte::affiche(){
    cout<<"\nVoici le compte numero::\t"<<numero;
    cout<<"\n Avec un solde de "<<solde;
}
void Compte:: versement(double vers){
    solde+=vers;
}
bool Compte::retrait(double montant){
    cout<<"\n La fonction retrait\n";
    if ((solde>=montant))
    {
        solde-=montant;
        return true;
    }
    else{return false;}

}