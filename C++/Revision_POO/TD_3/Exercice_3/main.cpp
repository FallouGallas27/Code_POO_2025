#include"Salarie.h"
#include"Admin.h"
#include"Professeurs.h"

int main(){
    char buf[10] = "Niang",ds[10] ="Mbaye"; char d[10] ="Loum",v[10] ="Talla",f[10] ="Directeur";
    char g[10] ="Daouda",h[10] ="Fall",w[11] ="Professeur";
    char matier1[10] ="Math",matier2[10] ="Pc",matier3[10] ="Info";
    Salarie S(buf,ds);
    S.affiche();
    Admin A(d,v,f);
    A.affiche();
    Professeurs P(h,g,w);
    P.ajout_matiere(matier1);
    P.ajout_matiere(matier2);
    P.ajout_matiere(matier3);
    P.affiche();
    return 0;
}