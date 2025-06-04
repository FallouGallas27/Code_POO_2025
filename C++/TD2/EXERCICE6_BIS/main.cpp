#include"Ensemble.h"
int main(){
    Ensemble e(10),e1;
    e<<1<<2<<3<<4<<5<<6<<7<<8<<9<<0<<10;cout<<e.cardinal();
    cout<<"\nAffichage\n";
    e.afficher();
    e1=e;
    e1.afficher();
    cout<<"\nAvec la surdrfinition de >>\n";
    //cout<<e%2;
    e1>>5>>9>>3;
    e1.afficher();
}