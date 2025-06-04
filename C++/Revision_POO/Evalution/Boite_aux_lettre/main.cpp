#include "Lettre.h"
#include "Colis.h"
#include "Boite_aux_lettre.h"

int main(){
    Courrier c(12, normal,"Dakar","Saint-Lious");
    Lettre l(140.9, normal, "Kaolack","Mbour", A3);
    Colis g(159.5, express,"TOUBA", "Dalakh", 40);
    Boite_aux_lettre b(4);
    b.ajout(&c);
    b.ajout(&l);
    b.ajout(&g);
    b.affiche();
    
}