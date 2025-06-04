#include"Entreprise.h"
#include"liste.h"
int main(){
    Individu  a(01,"Ndiaye","Gallas");
    Employe b(02,"Faye","Ndiaga","Ingenieur");
    Entreprise c(001,"DalakhAgro",03,"Ndiaye","Bada","Agronomiste",50);
    liste l(5);
    l.ajout(&a);
    l.ajout(&b);
    //l.ajout(&c);
    c.affiche();
}
