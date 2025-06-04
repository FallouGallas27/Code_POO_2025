#include "Enseignant.h"

int main(){
    char* nom;
    nom = new char[strlen("Dembele") +1]; strcpy(nom, "Dembele");
    char* prenom = new char[strlen("Jean Marie") +1]; strcpy(prenom, "Jean Marie");
    char* diplome = new char[strlen("Professeur Asimile")+ 1]; strcpy(diplome, "Professeur Asimile");
    char* mat1 = new char[strlen("Algo IV") +1]; strcpy(mat1, "Algo IV");
    char* mat2 = new char[strlen("Informatique") +1]; strcpy(mat2, "Informatique");
    char* mat3 = new char[strlen("Bureautique") +1]; strcpy(mat3, "Bureautique");
    Enseignant ens(nom, prenom, diplome, 21, 3,1975);
    // ens.ajouter(mat1);
    // ens.ajouter(mat2);
    // ens.ajouter(mat3);
    ens<<mat1<<mat2<<mat3;
    ens.affiche();
    Enseignant d(ens);
    cout<<"\nSuppression de  Algo IV\n";
    //ens.supprimer(mat1);
    ens>>mat1;
    ens.affiche();
    cout<<"\nget Diplome\t"<<ens.getDiplome();
    try
    {
        cout<<"\nIeme matiere\t"<<ens.getIemMatiere(1);
        cout<<"\nIeme matiere\t"<<ens.getIemMatiere(6);
    }
    catch(ErreurIndice& e)
    {
        std::cerr <<"\nDepassement d'indice " << e.i<< '\n';
    }
    //cout<<"Teste de Bureautique\t"<<(ens.teste_matiere(mat3)? "Trouve" : "Non" );
    cout<<"Teste de Bureautique\t"<<(ens%(mat3)? "Trouve" : "Non" );
    cout<<"Const de recopie"<<endl;
    Enseignant e(ens);
    e.affiche();
    e = d;
    cout<<"\nOperateur d'affectation\n";
    e.affiche();
    return 0;
}