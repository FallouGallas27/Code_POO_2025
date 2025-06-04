#include "Admin.h" 
Admin::Admin(string n, string ad, int an, string b,double sal): Personnel(n,ad,an,b)
{
    salaire = sal;
}

Admin::~Admin(){}
void Admin::affiche(){
    cout<<"Information sur un administratif"<<endl;
    Personnel::affiche();
    cout<<"\tSalaire\t"<<salaire<<endl;
}

double Admin::moyenne(){
    return annee;
}