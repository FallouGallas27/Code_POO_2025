#include"Administratif.h"
#include"professeurs.h"
int main(){
    chaine nom="gallas",prenom="Fallou",fonct="PATS",diplom="docteur",mat="info"; chaine nomp="kala",prenomp="fall";
    chaine fonction="Direteur",pprenom="Serigne Abdou",nnom="NIANG",ddiplom="Professeur en MATH",matier="ANALYSE 1,2,3",matier2="STAT INFO";
    cout<<"\n=======================La classe SALARIE=============================\n ";
    salarie s(prenom,nom),s1(prenomp,nomp);
    salarie d(s);
    s1=s;
    s.affiche();
    cout<<"\nLa surdefinition de '='\n";
    s1.affiche();
    cout<<"\n =====================la class Administratif==================\n";
    Administratif A(prenom,nom,fonct),C(prenomp,nom,fonction);
    cout<<"Voici les Administratifs\n";
    A.affiche();
    Administratif B(A);
    cout<<"\nApres la recopie\n";
    B.affiche();
    cout<<"\nla surdefinition de = pour admin\n";
    cout<<"\nVoici l'objet avant l'operation '='\n";
    C.affiche();
    A=C;cout<<"\n";
    A.affiche();
    cout<<"\n================LA classe PROFESSEURS============\n";
    professeurs p(prenom,nom,diplom),f(pprenom,nnom,ddiplom);
    //professeurs h(p);
    //h.affiche();
    p.affiche();
    p.set_matiere(mat);
    cout<<"\n";
    p.affiche();
    f.set_matiere(matier);
    f.set_matiere(matier2);
    cout<<"\n La definition de = avec la classe professeurs\n";
    cout<<"Voici l'objet qu'on affecte\n";
    f.affiche();
    p=f;
    cout<<"\n Apres l'operation '='\n";
    p.affiche();
}