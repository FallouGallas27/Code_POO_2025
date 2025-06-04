#include<iostream>
#include<string>

using namespace std;
const double COND_UNITE=0.5;
const double PRIX_BASE=1.5;
const double MAJORATION_HIGHTECH=0.5;
const double REDUCTION_DELOC=0.2;
enum Fabrication {Standard,Hightech};
class Vaccin
{
protected:
    string nom;
    double volumedose;
    int nbdoseaproduire;
    Fabrication mode_fabrication;
public:
    Vaccin(string,double,int, Fabrication=Standard);
    friend ostream& operator<<(ostream&,const Vaccin&);
    double conditionnement();
    double  fabrication();
    double production();
    protected:
    void affiche();
};

Vaccin::Vaccin(string noom,double volume,int dosepro, Fabrication vav)
{
    nom=noom;
    volumedose=volume;
    nbdoseaproduire=dosepro;
    mode_fabrication=vav;
    cout<<"\nAppel du  const du vaccin "<<nom<<endl;
}
ostream& operator<<(ostream& sortie,const Vaccin& v){
    sortie<<v.nom;
    sortie<<"\nvolume/dose:  "<<v.volumedose;
    sortie<<"\nnombre de dose:  "<<v.nbdoseaproduire;
    sortie<<"\n mode de fabrication  ";
    if (v.mode_fabrication==1)
    {
        sortie<<"Hightech";
    }
    else
     sortie<<"Standard";
    return sortie;
}
double Vaccin::conditionnement(){
  return volumedose*nbdoseaproduire*COND_UNITE;  
}
double Vaccin:: fabrication(){
    int cout= volumedose*nbdoseaproduire*PRIX_BASE;
    if(mode_fabrication==Hightech)
      cout+=cout* MAJORATION_HIGHTECH;
    return cout;
}
double Vaccin:: production(){
    return (conditionnement()+fabrication());
}
void Vaccin::affiche(){

}
class delocalise:public Vaccin{
    protected:
    bool frontalier;
    public:
    delocalise(string,double,int,bool, Fabrication=Standard);
    double production();

 };
 delocalise::delocalise(string noom,double volume ,int dose,bool b, Fabrication fab)
   :Vaccin(noom,volume,dose,fab){
    cout<<"\nApel du const de delocalise";
    frontalier=b;
 }
 double delocalise::production(){
    double c=Vaccin::production();
    if(frontalier==true){
        c=c-c*REDUCTION_DELOC;
    }
    else
      c=c/2;
    return c;
 }
 /*On essai avec une liste chaine polymorphe*/
 struct noeud{
    Vaccin *v;
    noeud* suiv;
    noeud(Vaccin* b) : v(b), suiv(nullptr) {}

 };
 class compagnie
 {
 private:
    noeud* debut;
    string nom;
 public:
    compagnie(string);
    ~compagnie();
    void ajout(Vaccin*);
    void affiche();
    double production();
 };
 
compagnie::compagnie(string mon){
    debut=nullptr;
    nom=mon;
}
 compagnie::~compagnie(){
    noeud*p=debut,*d;
    while (p!=nullptr)
    {
        d=p;
        p=p->suiv;
        delete d->v;
        delete (d);
        d=p;
    }
        
}
 void compagnie::ajout(Vaccin * b){
    noeud* m,*p;
    m=new noeud(b) ;
    if (debut ==nullptr)
    {
        debut=m;
    }
    else{
        p=debut;
        while (p->suiv!=nullptr)
        {
            p=p->suiv;
        }
        
       p->suiv=m;
    }
 }
 void compagnie::affiche(){
    noeud* p=debut;
   while (p!=nullptr)
   {
        cout<<*(p->v);
        p=p->suiv;
   }
 }  
 double compagnie::production(){
    double cout_t=0;
    noeud* p=debut;
    while (p!=nullptr)
    {
        cout_t=cout_t+ p->v->production();
    }
    
    return cout_t;
 }
int main(){
    Vaccin v("Triphas",0.2,10000);
    delocalise d("Triphas",0.2,10000,true,Hightech);
    delocalise d2("Remede",0.3,1600,false,Standard);
    Vaccin v2("Zamiflu", 0.55, 200000, Hightech); 
    Vaccin v3("Triphas", 0.20 , 10000);
     cout << d << endl;
    cout << d2 << endl;
    
    compagnie comp("CompA");
    comp.ajout(&v);
    comp.ajout(&d);
    comp.ajout(&v2);
    
    comp.affiche();
    cout << "Production totale de la compagnie : " << comp.production() << endl;
}