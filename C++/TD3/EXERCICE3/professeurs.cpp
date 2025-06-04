#include"salarie.h"
#include"professeurs.h"
professeurs::professeurs(chaine p_prenom,chaine p_nom,chaine p_dip):salarie(p_prenom,p_nom){
    //cout<<"\nAppel du constructeur de professeurs"<<this<<endl;
    nbmatiere=0;
    strcpy(p_diplome,p_dip);
    p_matiere=new char*[10];
    for(int i=0;i<10;i++)
      p_matiere[i]=nullptr;
}
professeurs::~professeurs(){
    //cout<<"\nAppel du destructeur de professeurs"<<this<<endl;
    for (int i = 0; i < 10; i++)
    {
        if(p_matiere[i]!=nullptr)
        delete p_matiere[i];
    }
    delete p_matiere;
}
char* professeurs::get_diplome(){
    return p_diplome;
}
char* professeurs::get_matiere(int n){
    if(n<0||n>10){
      cout<<"\n Attention!!! Mauvaise indice\n";
      exit(-1);
    }
    return p_matiere[n];
    
}
void professeurs::affiche(){
    salarie::affiche();
    cout<<"\t"<<p_diplome<<"\t";
    for (int  i = 0; i <nbmatiere; i++)
    {
        if(p_matiere[i]!=nullptr)
         cout<<p_matiere[i]<<"\t";
    }
    cout<<"\n";
}
void professeurs::set_matiere(chaine mot){
    for (int i = 0; i < 10; i++)
    {
        if(p_matiere[i]==nullptr){
           p_matiere[i]=new char[strlen(mot)+1];
           strcpy(p_matiere[i],mot);
           break;
        }
    }
    nbmatiere++;
}
professeurs::professeurs(const professeurs& prof):salarie(prof){
    //cout<<"\n CONSTRUCTEUR DE RECOPIE DE LA CLASSE PROF\n";
    strcpy(p_diplome,prof.p_diplome);
    p_matiere=new char*[10];
    for (int i = 0; i < nbmatiere; i++)
    {   
        p_matiere[i]=new char[strlen(prof.p_matiere[i])+1];
        strcpy(p_matiere[i],prof.p_matiere[i]);
    }
}
professeurs& professeurs:: operator=( professeurs& prof){
    if(this==&prof) return *this;
    for (int  i = 0; i < nbmatiere; i++)
    {  
        if(p_matiere[i]!=nullptr)
         delete p_matiere[i];
    }
    if(p_matiere!=nullptr)
     delete p_matiere;
    salarie *s1,*s2;
    s1=this; s2=&prof;
    *s1=*s2;
    strcpy(p_diplome,prof.p_diplome);
    nbmatiere=prof.nbmatiere;
    p_matiere=new char*[nbmatiere];
    for (int i = 0; i < nbmatiere; i++)
    {
        if(prof.p_matiere[i]!=nullptr){
        p_matiere[i]=new char[strlen(prof.p_matiere[i])+1];
        strcpy(p_matiere[i],prof.p_matiere[i]);}
   }
    return*this;
}
