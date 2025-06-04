#include "Secretaire.h"
#include "Enseignant.h"
#include "Etudiant_Etranger.h"
#include "Etudiant_Senegalais.h"
#include "Institut.h"

int main(){
    Personne p("Gallas",2021);
    Secretaire s("Sy",2019,"Informatique");
    Enseignant e("Mbaye",2015,"Informtique","Amphi A",2400000);
    Etudiant_Etranger ee("Hamza",2021,"L3_SI","Tchad");
    Etudiant_Senegalais es("BAMBA",2021,"L3_SI","Bien");
    Institut I("SAT",6);
    p.affiche();s.affiche();
    I.ajout(&p);
    I.ajout(&s);
    I.ajout(&e);
    I.ajout(&ee);
    I.ajout(&es);
    I.affiche();

}