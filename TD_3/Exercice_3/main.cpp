#include "Admin.h"
#include "Prof.h"

int main(){
    Admin A("Ndiour", "Moussa", "PATS"),B("Ba","Oussemane","PERS");
    Prof P("Leye", "Mouhamed", "Licence");
    P.ajoutMatiere("Maths");
    P.ajoutMatiere("Infomatique");
    P.ajoutMatiere("Francais");
    P.ajoutMatiere("Espagnol");
    Prof M("Ndiaye", "Mor", "Bac");
    M.ajoutMatiere("Maths");
    M.ajoutMatiere("SVT");
    M.ajoutMatiere("PC");
    cout<<"Voici les informations d'un administratif\n";
    A.affiche();
    //cout<<"Prenom : "<<A.getPrenom()<<"  Nom : "<<A.getNom()<<" Fonction :"<<A.getFonction()<<endl;
    cout<<"Voici les informations d'un Professeur\n";
    P.affiche();
    cout<<"\n===========La copie d'un objet Admin vers un salarie=========\n";
    Salarie D(A);
    D.affiche();
    cout<<"\n===========L'affectation d'un prof vers un salarie=============\n";
    D = P;
    D.affiche();
    cout<<"\n===========La copie d'un objet Admin =========\n";
    Admin E(A);
    E.affiche();
    cout<<"\n===========L'affection entre deux objets Admin=========\n";
    E = B;
    E.affiche();
    cout<<"\n===========L'affectation d'un prof =============\n";
    Prof G(P);
    G.affiche();
    cout<<"Les infos d'un prof \n";
    M.affiche();
    cout<<"\n=========L'affection entre deux profs=========\n";
    M = P;
    M.affiche();
}