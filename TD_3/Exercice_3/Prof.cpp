
#include "Prof.h"
Prof::Prof(string n, string p, string d): Salarie(n,p)
{
    diplome = d;
    for (int  i = 0; i < 10; i++)
    {
        matiere[i] = nullptr;
    }
    //cout<<"Appel du const de Prof "<<this<<endl;
}

Prof::~Prof()
{
    for (int  i = 0; i < 10; i++)
    {
        delete [] matiere[i];
    }
    
   // cout<<"Appel du dest du Prof "<<this<<endl;
}

string Prof::getDiplome()const{
    return diplome;
}
string& Prof::iemeMatiere(int  n){
    if (n < 0 || n >= 10 || matiere[n] ==nullptr)
    {
        throw Erreurindice(n);
    }
    return *matiere[n];
}

void Prof::ajoutMatiere(string mat){
    int i = 0;
    while (i < 10 && matiere[i] != nullptr)
    {
        i++;
    }
    if(i < 10){
        matiere[i] = new  string(mat);
    }else {
        cout << "Impossible d'ajouter une matière : tableau plein." << endl;
    }
    
}

Prof ::Prof(const Prof& P): Salarie(P), diplome(P.diplome)
{
    for (int  i = 0; i < 10; i++)
    {
        if (P.matiere[i] != nullptr)
        {
            matiere[i] = new string(*P.matiere[i]);
        }else{
            matiere[i] = nullptr;
        }
    }
    cout<<"Le const de recopie de Prof\n";

}
Prof& Prof::operator=( Prof& p) {
    if (this != &p) {
        Salarie::operator=(p);
        diplome = p.diplome;
        for (int i = 0; i < 10; i++) {
            delete matiere[i];
            matiere[i] = (p.matiere[i] != nullptr) ? new string(*p.matiere[i]) : nullptr;
        }
        cout << "Operateur d'affectation de Prof\n";
    }
    return *this;
}

void Prof::affiche(){
    Salarie::affiche();
    cout<<" Diplome "<<diplome<<endl;;
    cout<<"Les matieres enseignes \n";
    for (int  i = 0; i < 10; i++)
    {
        if(matiere[i] != nullptr)
            cout<<iemeMatiere(i)<<" ";
    }
    cout<<endl;
}