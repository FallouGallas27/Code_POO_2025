#include"Animal.h"
Animal::Animal(string n){
    nom=n;
    cout<<"\nAppel du const de animal\t"<<nom <<"\n";
    
    }
Animal::~Animal(){
    cout <<"\nappel du dest de animal\t"<<nom<<"\n";
}