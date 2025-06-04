#include "lettre.h"

lettre::lettre(double poid ,string dest,string exped,Mode_expedition nor,string forme)
:Boite(poid,dest,exped,nor){
    format = forme;
}
lettre::~lettre(){}
void lettre::affiche(){
    cout<<"Caracteristique de la lettre\n";
    cout<<"Poids\t"<<poids<<"\tAdresse destination\t"<<adress_dest<<"\tAdresse d'expedition  "<<adress_expedition<<"\tFormat  "<<format;
}
double lettre::CalculPrix(){}