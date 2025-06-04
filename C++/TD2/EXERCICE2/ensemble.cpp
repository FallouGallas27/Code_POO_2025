#include"ensemble.h"
int ensemble:: cardinal()const{
    return m_elements;
}
void ensemble:: ajouter(int n){
    if(contient(n)==false){
    if(m_elements==0){
        tab[m_elements]=n;
        m_elements++;
    }
    else if (m_elements<max)
    {
      
        this->tab[m_elements]=n;
          m_elements++;
    }
    else{
        cout<<"la taille  max est atteinte\n";
    }
    }
    else 
    cout<<"\nL'element est deja ajoute\n";
}
void ensemble::supprimer(int n){
    int i=0;
    while (i<m_elements && tab[i]!=n)
    {  
        i++;
    }
    if(i<m_elements){
    for(int j=i;j<m_elements;j++){
        tab[j]=tab[j+1];
    }
            m_elements--;
    }
    else 
    cout<<"L'element que vous voulez supprimer n'est pas dans l'ensemble\n";
}
bool ensemble::contient(int n){
 int i=0;
 while(i<m_elements && tab[i]!=n)
   i++;
 if(i<m_elements)
   return true;
 else 
 return false;
}
void ensemble::afficher(){
    int k=cardinal();cout<<"E="<<"[";
    for(int i=0;i<k;i++){
      cout<<tab[i]<<",";
    }cout<<"]";
}
ensemble::ensemble(ensemble& e){
    cout <<"\nAppel du constructeur de recopire\n";
    max=e.max;
    m_elements=e.m_elements;
    tab=new int[m_elements];
    for(int i=0;i<m_elements;i++){
        tab[i]=e.tab[i];
    }
}
void ensemble::init(){courant=0;}
bool ensemble::existe(){
    if(courant<m_elements)
     return true; 
    return false;
}
int ensemble::prochain(){
    return tab[courant++];
}
int somme(ensemble e){
    int som=0;
    e.init();
    while (e.existe())
    {
        som=som+e.prochain();
    }
    
}