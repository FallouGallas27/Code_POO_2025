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
    cout<<"Prenom : "<<A.getPrenom()<<"  Nom : "<<A.getNom()<<" Fonction :"<<A.getFonction()<<endl;
    cout<<"Voici les informations d'un Professeur\n";
    cout<<"Prenom : "<<P.getPrenom()<<" Nom : "<<P.getNom()<<" Diplome : "<<P.getDiplome()<<endl;
    cout<<"Voici les matiere enseignes\n";
    int i = 0;
    try
    {

        while (i < 10 )
        {
            
            cout<<P.iemeMatiere(i)<<" ";
            i++;
        }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
    }
    Salarie D(A);
    cout<<D.getNom()<<endl;
    cout<<D.getPrenom()<<endl;
    D = P;
    cout<<D.getNom()<<endl;
    cout<<D.getPrenom()<<endl;
    Admin E(A);
    cout<<"Prenom : "<<E.getPrenom()<<"  Nom : "<<E.getNom()<<" Fonction :"<<E.getFonction()<<endl;
    E = B;
    cout<<"Prenom : "<<E.getPrenom()<<"  Nom : "<<E.getNom()<<" Fonction :"<<E.getFonction()<<endl;
    Prof G(P);
    cout<<"Prenom : "<<G.getPrenom()<<" Nom : "<<G.getNom()<<" Diplome : "<<G.getDiplome()<<endl;
    cout<<"Voici les matiere enseignes\n";
     i = 0;
    try
    {

        while (i < 10 )
        {
            
            cout<<G.iemeMatiere(i)<<" ";
            i++;
        }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
    }
    cout<<"Prenom : "<<M.getPrenom()<<" Nom : "<<M.getNom()<<" Diplome : "<<M.getDiplome()<<endl;
    cout<<"Voici les matiere enseignes\n";
     i = 0;
    try
    {

        while (i < 10 )
        {
            
            cout<<M.iemeMatiere(i)<<" ";
            i++;
        }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
    }
    M = P;
    cout<<"Prenom : "<<M.getPrenom()<<" Nom : "<<M.getNom()<<" Diplome : "<<M.getDiplome()<<endl;
    cout<<"Voici les matiere enseignes\n";
     i = 0;
    try
    {

        while (i < 10 )
        {
            
            cout<<M.iemeMatiere(i)<<" ";
            i++;
        }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
    }
}