#include"Enseignant.h"
Enseignant::Enseignant(char nom[20] ,char prenom[20],char diplome[30]){
    cout<<"\nAppel du constructeur par defaut\n";
    strcpy(m_nom,nom);
    strcpy(m_prenom,prenom);
    strcpy(m_diplome,diplome);
    m_matiere=new char*[5];
    for (int  i = 0; i <5; i++)
    {
        
        m_matiere[i]=NULL;
    }
}
Enseignant::~Enseignant(){
    cout<<"\nAppel du destructeur "<<this<<endl;
    for (int i = 0; i < 5; i++)
           delete m_matiere[i];
    delete m_matiere;
}
char*Enseignant ::setNom(){
    return m_nom;
}
char* Enseignant:: setPrenom(){
    return m_prenom;
}
char*Enseignant:: setDiplome(){
    return m_diplome;
}
void Enseignant:: getMatiere(chaine matiere){
    int i=0;int n=strlen(matiere);
    while (i<5&&m_matiere[i]!=NULL)
    {
        i++;
    }
    if(i<5){
        m_matiere[i]=new char[n+1];
      strcpy(m_matiere[i],matiere);
    }
}
void Enseignant::affiche(){
    cout<<m_prenom<<"\t"<<m_nom<<"\t"<<m_diplome<<"\t";
    for (int i = 0; i < 5; i++)
    {
        if(m_matiere[i]!=NULL)
           cout<<m_matiere[i]<<"\t";
    }
    
}
Enseignant::Enseignant(const Enseignant& E){
    //int n;
    cout<<"\nsituation d'invocation du constructeur de copie\n";
    strcpy(m_nom,E.m_nom);
    strcpy(m_prenom,E.m_prenom);
    strcpy(m_diplome,E.m_diplome);
    m_matiere=new char*[5];
          for (int i = 0; i <5 ; i++)
          {
            if(E.m_matiere[i]!=NULL){
              m_matiere[i]=new char[strlen(E.m_matiere[i])+1];
              strcpy(m_matiere[i],E.m_matiere[i]);
            }
          }
}
Enseignant& Enseignant::operator=(const Enseignant &E){
    if(this==&E) return *this;
    for (int  i = 0; i < 5; i++)
    {
        if(m_matiere[i]!=NULL)
          delete m_matiere[i];
    }
    delete m_matiere;
    cout<<"\nOp. d'affectation\n";
    strcpy(m_nom,E.m_nom);
    strcpy(m_prenom,E.m_prenom);
    strcpy(m_diplome,E.m_diplome);
    m_matiere=new char*[5];
          for (int i = 0; i <5 ; i++)
          {
            if(E.m_matiere[i]!=NULL){
              m_matiere[i]=new char[strlen(E.m_matiere[i])+1];
              strcpy(m_matiere[i],E.m_matiere[i]);
            }
          }
    return* this;
}