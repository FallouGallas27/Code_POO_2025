#include"Administratif.h"
#include"professeurs.h"

int main(){
    chaine nom="gallas",prenom="Fallou",fonct="PATS",diplom="docteur",mat="info"; 
    chaine nomp="kala",prenomp="fall";
    chaine fonction="Direteur",pprenom="Serigne Abdou",nnom="NIANG",ddiplom="Professeur en MATH",matier="ANALYSE 1,2,3",matier2="STAT INFO";
    
    cout<<"\n=======================La classe SALARIE=============================\n ";
    salarie s(prenom,nom),s1(prenomp,nomp);
    salarie d(s);
    s1 = s;
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

    // ========== NOUVELLES AFFECTATIONS ENTRE TYPES DIFFeRENTS ==========
    
    cout<<"\n\n============ AFFECTATIONS ENTRE TYPES DIFFeRENTS ============\n";
    
    // 1. Affectation Administratif vers Salarie
    cout<<"\n1. Affectation Administratif vers Salarie:\n";
    cout<<"Avant affectation - Salarie s:\n";
    s.affiche();
    cout<<"Administratif A a affecter:\n";
    A.affiche();
    s = A;  // Affectation Administratif -> Salarie
    cout<<"Apres affectation s = A:\n";
    s.affiche();
    
    // 2. Affectation Professeur vers Salarie
    cout<<"\n2. Affectation Professeur vers Salarie:\n";
    salarie s2(prenomp, nomp);
    cout<<"Avant affectation - Salarie s2:\n";
    s2.affiche();
    cout<<"Professeur p a affecter:\n";
    p.affiche();
    s2 = p;  // Affectation Professeur -> Salarie
    cout<<"Apres affectation s2 = p:\n";
    s2.affiche();
    
    // // 3. Affectation Salarie vers Administratif
    // cout<<"\n3. Affectation Salarie vers Administratif:\n";
    // Administratif A2(prenomp, nomp, "TEMP");
    // cout<<"Avant affectation - Administratif A2:\n";
    // A2.affiche();
    // cout<<"Salarie s a affecter:\n";
    // s.affiche();
    // //A2 = s;  // Affectation Salarie -> Administratif
    // cout<<"Apres affectation A2 = s:\n";
    // A2.affiche();
    
    // // 4. Affectation Professeur vers Administratif
    // cout<<"\n4. Affectation Professeur vers Administratif:\n";
    // Administratif A3(prenom, nom, "ANCIEN");
    // cout<<"Avant affectation - Administratif A3:\n";
    // A3.affiche();
    // cout<<"Professeur f a affecter:\n";
    // f.affiche();
    // //A3 = f;  // Affectation Professeur -> Administratif
    // cout<<"Apres affectation A3 = f:\n";
    // A3.affiche();
    
    // // 5. Affectation Salarie vers Professeur
    // cout<<"\n5. Affectation Salarie vers Professeur:\n";
    // professeurs p2(prenomp, nomp, "Master");
    // cout<<"Avant affectation - Professeur p2:\n";
    // p2.affiche();
    // cout<<"Salarie s1 a affecter:\n";
    // s1.affiche();
    // //p2 = s1;  // Affectation Salarie -> Professeur
    // cout<<"Apres affectation p2 = s1:\n";
    // p2.affiche();
    
    // // 6. Affectation Administratif vers Professeur
    // cout<<"\n6. Affectation Administratif vers Professeur:\n";
    // professeurs p3(nom, prenom, "Licence");
    // cout<<"Avant affectation - Professeur p3:\n";
    // p3.affiche();
    // cout<<"Administratif C a affecter:\n";
    // C.affiche();
    // p3 = C;  // Affectation Administratif -> Professeur
    // cout<<"Apres affectation p3 = C:\n";
    // p3.affiche();
    
    // cout<<"\n\n============ DeMONSTRATION DE LA POLYMORPHIE ============\n";
    
    // // Creation d'un tableau de pointeurs vers la classe de base
    // salarie* employes[6];
    // employes[0] = new salarie(prenom, nom);
    // employes[1] = new Administratif(prenomp, nomp, fonct);
    // employes[2] = new professeurs(pprenom, nnom, ddiplom);
    // employes[3] = &s;
    // employes[4] = &A;
    // employes[5] = &p;
    
    // cout<<"Affichage polymorphe de tous les employes:\n";
    // for(int i = 0; i < 6; i++){
    //     cout<<"Employe " << i+1 << ":\n";
    //     employes[i]->affiche();
    //     cout<<"\n";
    // }
    
    // // Liberation de la memoire
    // delete employes[0];
    // delete employes[1];
    // delete employes[2];
    
    // return 0;
}