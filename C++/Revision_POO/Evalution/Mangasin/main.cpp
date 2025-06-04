#include "ArticleImporte.h"
#include "ArticleLocal.h"
#include "Mangasin.h"

int main(){
    Article a("EF12","Beur",150);
    ArticleImporte ar("BLL","Jadida",15500000,100000);
    ArticleLocal al("QP09","Ciment", 75000,2000);
    Mangasin m(5);
    m.ajout(&a);
    m.ajout(&ar);
    m.ajout(&al);
    m.affiche();
    cout<<"Le cout total est\t"<<m.calcul_prix();
}