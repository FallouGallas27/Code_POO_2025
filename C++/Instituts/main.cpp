#include "Administratif.h"
#include "Etudiant.h"
#include "Enseignant.h"
#include "Institut.h"
int main (){
    Etudiant E("NDIAYE","Fallou","Dalakh",2021,10.43,"Reseaux");
    Administratif A("FAYE","Ndeye","Khourwa",2019,400000,"B13","Secretaire");
    Enseignant P("MBAYE","Meissa","S.Louis",2008,1500000,"Rouhou Amphi C",34,"Enseignant");
    Institut l("UGB",5);
    l.ajout(&E);
    l.ajout(&A);
    l.ajout(&P);
    l.affiche();
}