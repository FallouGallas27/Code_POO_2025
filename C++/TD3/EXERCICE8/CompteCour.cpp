#include<iostream>
#include"CompteCour.h"
using namespace std;
CompteCour::CompteCour(long nb):Compte(nb){
    cout<<"\n Appel du constructeur de la classe   COMPTECOUR\n";
}
CompteCour::~CompteCour()
{
    cout<<"\nAppel du destructeur de la classe COMPTECOUR\n";
}
bool CompteCour::retrait(double p){
    if(solde>=-10000){
        solde-=p;
        return true;
    }
    else{
        cout<<"\n vous avez atteint la limite du decouvert\n";
        return false;
    }
}