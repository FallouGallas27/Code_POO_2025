#include<iostream>
#include<string>
using namespace std;
class Vehicule
{
protected:
    string marque;
    int date_achat;
    long double prix_achat;
    double prix_courant;
public:
    Vehicule(string,int,double,double);
    virtual void affiche();
    double CalculPrix();
};

Vehicule::Vehicule(string marq,int annee ,double prix,double courant)
{
    marque=marq;
    date_achat=annee;
    prix_achat=prix;
    prix_courant=courant;
    cout<<"\nAppel du const du vehicule de marque "<<marque<<endl;
}
void Vehicule:: affiche(){
    cout<<"vehicule : marque ="<<marque<<".\t date "<<date_achat<<".\t prix = "<<prix_achat;
}
double Vehicule:: CalculPrix(){
   prix_courant=prix_achat - 0.01*(2024-date_achat)*prix_achat;
   return prix_courant;
}
class voiture:public Vehicule{
    protected:
    double cylindre;
    int nbporte;
    double puissance;
    double kilometrage;
    public:
    voiture(string,int,long double,double,double,int,double,double);
    virtual void affiche();
    double CalculPrix();
};
voiture::voiture(string marq,int annee,long double prix,double courant,double cylin,int nb,double puiss,double kilometre)
:Vehicule(marq,annee,prix,courant){
    cylindre=cylin;
    nbporte=nb;
    puissance=puiss;
    kilometrage=kilometre;
    cout<<"\n Appel du const de la classe voiture";
}
void voiture::affiche(){
    Vehicule::affiche();
    cout<<"\tcylindre ="<<cylindre<<"\t nombre de porte = "<<nbporte<<"\t puissance = "<<puissance<<"\tkilometrage = "<<kilometrage;
}
double voiture::CalculPrix(){
    double duree,nbkilo,type=0,courant;int n=0;
    duree= (0.2*(2024 -date_achat));
    while (kilometrage/10000>1)
    {
        n++;
        kilometrage=kilometrage/10000;
    }
    nbkilo=0.05*n;
    if (marque=="Renault"||marque=="Fiat")
    {
         type=0.1;
    }
    else
    if (marque=="Ferrari"||marque=="Porsche")
    {
        type=0.2;
    }
    courant=prix_achat - (duree+nbkilo+type)*prix_achat;
    return courant;
}
int main(){
    //Vehicule v("Toyota",2014,600000,0);
    voiture v1("Ferrari",2014,6000000,0,3000.5,4,32,10000);
    v1.affiche();
    cout<<"\n Le prix courant de la voiture est de "<<v1.CalculPrix();
}

