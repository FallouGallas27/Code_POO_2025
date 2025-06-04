#include "Soiree.h"
#include "Anniversaire_entreprise.h"
#include "Leve_fonds.h"
#include "Complexe.h"

int main(){
    Soiree s1("Liens de famille","Gama",Date(12,03,2024),2000);
    cout<<s1;
    s1.affiche();
    Anniversaire_entreprise a("Solidarite","BETa",Date(01,9,2023),200000,30000,42500,45600);
    Leve_fonds l("touba ca kanam","Grand theatre",Date(27,9,2021), 3000000,10000,2000000,400000);
    Complexe c(4);
    c.ajout(&a);
    c.ajout(&l);
    c.affiche();
    cout<<"Gain Complexe\t"<<c.gain_complexe();

}