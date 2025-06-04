#include "Soiree.h"


Soiree::Soiree(string th,string s, Date d,double f){
    theme = th;
    date = d;
    frais_location = f;
    salle = s;
    cout<<"Appel de const de Soiree\n";
}

Soiree::~Soiree()
{
    cout<<"Appel du dest de Soiree\n";
}

ostream & operator<<(ostream& sortie, Soiree & s){
    sortie<<"Theme\t"<<s.theme<<"\tDate \t"<<s.date.getJours()<<"/"<<s.date.getMois()<<"/"
    <<s.date.getAnnee()<<"\t"<<"Frais Location"<<s.frais_location<<endl;
    return sortie;
}
void Soiree::affiche(){
    cout<<*this;
}
double Soiree::gain() {
    return frais_location;
}
double Soiree::calcul_cout(){
    return 0;
}