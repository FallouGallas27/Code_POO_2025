#include "Titulaire.h"
#include "Vaccataire.h"
#include "Etudiant.h"
#include "Admin.h"
#include "Institut.h"

int main(){
    Titulaire permanent("MBAYE","Saint-Lious",2015,"Amphi C",24,9000000);
    Admin ad("Cisse","Sanar",2021,"Batiment G",400000);
    Etudiant etudiant("NDIAYE","Village P",2021,11.89,"Groupe 1");
    Vaccataire vac("SARR","Sanar",2014,"Batiment  G",25,20.5,10000);
    Institut I("AVENIR");
    I.ajouter(&permanent);
    I.ajouter(&ad);
    I.ajouter(&vac);
    I.ajouter(&etudiant);
    I.affiche();
}