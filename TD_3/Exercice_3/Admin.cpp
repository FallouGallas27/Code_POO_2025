#include "Admin.h"
Admin::Admin(string n , string p, string f):Salarie(n,p)
{
    fonction = f;
    //cout<<"Appel du const de Admin "<<this<<endl;
}

Admin::~Admin()
{
    //cout<<"Appel du dest de Salarie "<<this<<endl;
}

string Admin::getFonction()const{
    return fonction;
}

Admin::Admin(const Admin& A):Salarie(A){
    fonction = A.fonction;
    cout<<"Le const  recopie Administratif\n ";
}
Admin& Admin::operator=( Admin& a ){
    Salarie *s1,*s2;
    s1 = this;
    s2 = &a;
    fonction = a.fonction;
    cout<<"L'operateur d'affectation de Administratif\n";
    return *this;
}

void Admin::affiche(){
    Salarie::affiche();
    cout<<" Fonction "<<fonction<<endl;
}